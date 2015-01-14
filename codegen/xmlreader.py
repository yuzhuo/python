import xml.etree.cElementTree as ET
import sys
from export import *

try:
    tree = ET.ElementTree(file='presetTableStyles.xml')
    root = tree.getroot()

    f = open("test.cpp", "wb")

    for i in root:
        dxfs = i.find("dxfs")
        tableStyles = i.find("tableStyles")
        tableStyle = tableStyles.find("tableStyle")

        f.write("///////////////////" + tableStyle.get("name") +
                "///////////////////" "\n")
        f.write("spItm.attach(RTS_NEW(KCoreTableStyle, m_spStyVec));\n")
        f.write("spItem->Init(BSI_" + tableStyle.get("name") + ")\n")
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

