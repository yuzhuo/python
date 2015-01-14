import xml.etree.cElementTree as ET
import sys
from export import *

try:
    tree = ET.ElementTree(file='presetTableStyles.xml')
    root = tree.getroot()

    f = open("builtintablestyles.inl", "wb")

    f.write("const double dblAccentPercent20 = 0.79998168889431442;\n")
    f.write("double dblAccentPercent40 = 0.59999389629810485;\n")
    f.write("const double dblAccentPercent60 = 0.39997558519241921;\n")
    f.write("ks_stdptr<KCoreTableStyle> spItm;\n")
    f.write("KXF _xf;\n")
    f.write("EtColor clr;\n\n")
    for i in root:
        dxfs = i.find("dxfs")
        tableStyles = i.find("tableStyles")
        tableStyle = tableStyles.find("tableStyle")

        f.write("///////////////////" + tableStyle.get("name") +
                "///////////////////" "\n")
        f.write("spItm.attach(RTS_NEW(KCoreTableStyle, m_spStyVec));\n")
        f.write("spItm->Init(BSI_" + tableStyle.get("name") + ");\n")
        f.write("spItm->SetName(\"" + tableStyle.get("name") + "\");\n\n")
        for tableStyleElement in tableStyle:
            t = tableStyleElement.get("type")
            export_dxf(dxfs[int(tableStyleElement.get("dxfId")) - 1], f, t)
        f.write("m_spStyVec->push_back(spItm);\n")
        newline(f)

    f.close()

    output_dbg_info()
except:
    print 'something happened.'

