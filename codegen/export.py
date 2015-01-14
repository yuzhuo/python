from etdef import *


# for debug
themedict = { }
tintdict = { }
fontsubtagdict = { }
fillsubtagdict = { }
bordersubtagdict = { }
colorattrdict = { }

def output_dbg_info():
    print "\ntint set:"
    for i in tintdict:
        print i

    print "\ntheme set:"
    for i in themedict:
        print i

    print "\nfont subtag set:"
    for i in fontsubtagdict:
        print i

    print "\nfill subtag set:"
    for i in fillsubtagdict:
        print i

    print "\nborder subtag set:"
    for i in bordersubtagdict:
        print i

    print "\ncolor attribute set:"
    for i in colorattrdict:
        print i


def newline(f):
    f.write("\n")


def export_color(color, f):
    # if color.attrib.has_key("theme") and color.attrib.has_key("tint"):
    #     f.write("clr.setTheme((ETTHEMETYPE)" + color.attrib["theme"] +\
    #         ", " + color.attrib["tint"] + ");")
    # elif color.attrib.has_key("theme"):
    #     f.write("clr.setTheme((ETTHEMETYPE)" + color.attrib["theme"] + ");")
    # newline(f)

    for i in color.attrib:
        colorattrdict[i] = "whatever"

    f.write("clr.setNONE();\n")
    if color.attrib.has_key("theme") and color.attrib.has_key("tint"):
        tint = color.attrib["tint"]
        if ETTINT.has_key(tint):
            tint = ETTINT[tint]
        f.write("clr.setTheme(" + ETTHEMETYPE[color.attrib["theme"]] +
            ", " + tint + ");")

        tintdict[color.attrib["tint"]] = "whatever"
        themedict[color.attrib["theme"]] = "whatever"

    elif color.attrib.has_key("theme"):
        f.write("clr.setTheme(" + ETTHEMETYPE[color.attrib["theme"]] + ");")
    newline(f)


def export_dxfs(dxfs, f):
    count = 0
    for dxf in dxfs:
        count += 1
        print "dxf: ", count
        export_dxf(dxf, f, "TEST")


def export_dxf(dxf, f, t):
    f.write("// " + t + "XF\n")
    f.write("_xf.reset();\n")
    for attr in dxf:
        if attr.tag == "fill":
            export_fill(attr, f)
        elif attr.tag == "font":
            export_font(attr, f)
        elif attr.tag == "border":
            export_border(attr, f)
    f.write("spItm->SetFormat(TSF_" + t + "XF, &_xf);\n")
    newline(f)

def export_fill(fill, f):
    # print "export fill"
    # print fill.getchildren()

    for i in fill.getchildren():
        fillsubtagdict[i.tag] = "whatever"

    for elem in fill.getchildren():
        if elem.tag == "patternFill":
            export_patternfill(elem, f)
        elif elem.tag == "gradientFill":
            export_gradientfill(elem, f)


def export_gradientfill(gradientfill, f):
    print "export gradientfill"


def export_patternfill(patternfill, f):
    # print "export patternfill"
    # print patternfill

    if patternfill.attrib.has_key("patternType"):
        f.write("_xf.pFill->setType(" + ETFILLTYPE[patternfill.attrib["patternType"]] + ")")
        newline(f)
    if patternfill.find("fgColor") is not None:
        export_color(patternfill.find("fgColor"), f)
        f.write("_xf.pFill->setFore(clr);")
        newline(f)
    if patternfill.find("bgColor") is not None:
        export_color(patternfill.find("bgColor"), f)
        f.write("_xf.pFill->setBack(clr);")
        newline(f)


def export_font(font, f):
    # print "export font"
    children = font.getchildren()

    for i in children:
        fontsubtagdict[i.tag] = "whatever"

    for child in children:
        if child.tag == "b":
            f.write("_xf.pFont->bls = 1;")
            newline(f)
        elif child.tag == "color":
            export_color(child, f)
            f.write("_xf.pFont->clr = clr;")
            newline(f)



def export_border(border, f):
    # print "export border"
    children = border.getchildren()

    for i in children:
        bordersubtagdict[i.tag] = "whatever"

    # print children
    for child in children:
        if child.tag == "left":
            if child.get("style") is not None:
                f.write("_xf.dgLeft = " + BORDERLINESTYLE[child.attrib["style"]] + ";")
                newline(f)
            if child.find("color") is not None:
                export_color(child.find("color"), f)
                f.write("_xf.clrLeft = clr;\n")
        elif child.tag == "right":
            if child.get("style") is not None:
                f.write("_xf.dgRight = " + BORDERLINESTYLE[child.attrib["style"]] + ";")
                newline(f)
            if child.find("color") is not None:
                export_color(child.find("color"), f)
                f.write("_xf.clrRight = clr;\n")
        elif child.tag == "top":
            if child.get("style") is not None:
                f.write("_xf.dgTop = " + BORDERLINESTYLE[child.attrib["style"]] + ";")
                newline(f)
            if child.find("color") is not None:
                export_color(child.find("color"), f)
                f.write("_xf.clrTop = clr;\n")
        elif child.tag == "bottom":
            if child.get("style") is not None:
                f.write("_xf.dgBottom = " + BORDERLINESTYLE[child.attrib["style"]] + ";")
                newline(f)
            if child.find("color") is not None:
                export_color(child.find("color"), f)
                f.write("_xf.clrBottom = clr;\n")

