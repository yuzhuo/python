import xml.etree.cElementTree as ET
import sys
import re
from export import *

try:
    tree = ET.ElementTree(file='presetTableStyles.xml')
    root = tree.getroot()

    f = open("builtintablestyles.inl", "wb")
    f2 = open("call.cpp", "wb")

    # f.write("const double dblAccentPercent20 = 0.79998168889431442;\n")
    # f.write("const double dblAccentPercent40 = 0.59999389629810485;\n")
    # f.write("const double dblAccentPercent60 = 0.39997558519241921;\n\n\n")
    f.write("\n\n")

    for i in root:
        dxfs = i.find("dxfs")
        tableStyles = i.find("tableStyles")
        tableStyle = tableStyles.find("tableStyle")

        f.write("///////////////////" + tableStyle.get("name") +
                "///////////////////" "\n")
        f.write("void Add" + tableStyle.get("name") + "(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)\n")
        f.write("{\n")
        f.write("ks_stdptr<KCoreTableStyle> spItm;\n")
        f.write("spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));\n")
        # f.write("spItm->Init(BSI_" + tableStyle.get("name") + ");\n")

        name = tableStyle.get("name")

        light = re.compile("TableStyleLight")
        medium = re.compile("TableStyleMedium")
        dark = re.compile("TableStyleDark")
        pivotlight = re.compile("PivotStyleLight")
        pivotmedium = re.compile("PivotStyleMedium")
        pivotdark = re.compile("PivotStyleDark")

        mlight = light.match(name)
        mmedium = medium.match(name)
        mdark = dark.match(name)
        mpivotlight = pivotlight.match(name)
        mpivotmedium = pivotmedium.match(name)
        mpivotdark = pivotdark.match(name)

        lightstr = "_STR_TAB_STYLE_LIGHT"
        mediumstr = "_STR_TAB_STYLE_MEDIUM"
        darkstr = "_STR_TAB_STYLE_DARK"
        pivotlightstr = "_STR_PIVOT_STYLE_LIGHT"
        pivotmediumstr = "_STR_PIVOT_STYLE_MEDIUM"
        pivotdarkstr = "_STR_PIVOT_STYLE_DARK"

        namestr = ""
        b = 0
        if mdark:
            id = "BTSI_TABLE_DARK_FROM + "
            namestr = darkstr
            b = 0
        elif mmedium:
            id = "BTSI_TABLE_MEDIUM_FROM + "
            namestr = mediumstr
            b = 0
        elif mlight:
            id = "BTSI_TABLE_LIGHT_FROM + "
            namestr = lightstr
            b = 0
        elif mpivotdark:
            id = "BTSI_PIVOT_DARK_FROM + "
            namestr = pivotdarkstr
            b = 1
        elif mpivotmedium:
            id = "BTSI_PIVOT_MEDIUM_FROM +"
            namestr = pivotmediumstr
            b = 1
        elif mpivotlight:
            id = "BTSI_PIVOT_LIGHT_FROM +"
            namestr = pivotlightstr
            b = 1

        pattern = re.compile('\d+')
        match = pattern.search(name)
        num = int(match.group())
        num -= 1
        id += str(num)

        arg3 = "TST_TABLE_STYLE"
        if b == 1:
            arg3 = "TST_PIVOT_STYLE"

        f.write("spItm->Init(pHolder, " + id + ", " + arg3 + ");\n")

        f.write("ks_wstring wstrName(" + namestr + ");\n")
        f.write("wstrName.AppendFormat(__X(\"%d\"), " + str(num+1) + ");\n")
        f.write("spItm->SetNameInner(wstrName.c_str());\n\n")
        f.write("KTableXF _xf;\n")
        f.write("EtColor clr;\n\n")
        for tableStyleElement in tableStyle:
            t = tableStyleElement.get("type")
            export_dxf(dxfs[int(tableStyleElement.get("dxfId")) - 1], f, t)
        f.write("pStyVec->push_back(spItm);\n")
        f.write("}\n")
        newline(f)

        f2.write("Add" + tableStyle.get("name") + "(this, m_spStyVec);\n")

    f.write("\n")
    f.close()

    output_dbg_info()
except:
    print 'something happened.'

