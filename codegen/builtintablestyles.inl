

///////////////////TableStyleMedium28///////////////////
void AddTableStyleMedium28(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_MEDIUM_FROM + 27, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 28);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent20);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent6, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent6, dblAccentPercent60);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent6, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent6, dblAccentPercent60);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrVert, ettThemeAccent6, dblAccentPercent60);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent6, dblAccentPercent60);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent6);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium27///////////////////
void AddTableStyleMedium27(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_MEDIUM_FROM + 26, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 27);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent20);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent5, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent5, dblAccentPercent60);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent5, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent5, dblAccentPercent60);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrVert, ettThemeAccent5, dblAccentPercent60);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent5, dblAccentPercent60);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent5);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium26///////////////////
void AddTableStyleMedium26(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_MEDIUM_FROM + 25, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 26);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent20);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent4, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent4, dblAccentPercent60);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent4, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent4, dblAccentPercent60);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrVert, ettThemeAccent4, dblAccentPercent60);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent4, dblAccentPercent60);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent4);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium25///////////////////
void AddTableStyleMedium25(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_MEDIUM_FROM + 24, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 25);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent20);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent3, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent3, dblAccentPercent60);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent3, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent3, dblAccentPercent60);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrVert, ettThemeAccent3, dblAccentPercent60);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent3, dblAccentPercent60);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent3);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium24///////////////////
void AddTableStyleMedium24(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_MEDIUM_FROM + 23, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 24);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent20);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent2, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent2, dblAccentPercent60);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent2, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent2, dblAccentPercent60);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrVert, ettThemeAccent2, dblAccentPercent60);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent2, dblAccentPercent60);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent2);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium23///////////////////
void AddTableStyleMedium23(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_MEDIUM_FROM + 22, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 23);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent20);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent1, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent1, dblAccentPercent60);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent1, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent1, dblAccentPercent60);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrVert, ettThemeAccent1, dblAccentPercent60);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent1, dblAccentPercent60);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent1);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium22///////////////////
void AddTableStyleMedium22(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_MEDIUM_FROM + 21, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 22);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeLight1);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEME(clrRight, ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEME(clrVert, ettThemeLight1);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEME(clrHorz, ettThemeLight1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent65);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent65);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent65);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent65);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium21///////////////////
void AddTableStyleMedium21(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_MEDIUM_FROM + 20, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 21);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent6);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent6);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent6);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent6);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent6);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent6);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium20///////////////////
void AddTableStyleMedium20(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_MEDIUM_FROM + 19, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 20);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent5);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent5);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent5);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent5);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent5);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent5);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium19///////////////////
void AddTableStyleMedium19(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_MEDIUM_FROM + 18, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 19);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent4);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent4);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent4);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent4);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent4);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent4);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium18///////////////////
void AddTableStyleMedium18(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_MEDIUM_FROM + 17, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 18);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent3);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent3);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent3);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent3);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent3);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent3);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium17///////////////////
void AddTableStyleMedium17(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_MEDIUM_FROM + 16, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 17);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent2);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent2);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent2);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent2);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent2);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent2);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium16///////////////////
void AddTableStyleMedium16(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_MEDIUM_FROM + 15, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 16);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium15///////////////////
void AddTableStyleMedium15(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_MEDIUM_FROM + 14, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 15);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeLight1);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEME(clrRight, ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEME(clrVert, ettThemeLight1);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEME(clrHorz, ettThemeLight1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium14///////////////////
void AddTableStyleMedium14(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_MEDIUM_FROM + 13, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 14);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent20);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEME(clrVert, ettThemeDark1);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEME(clrHorz, ettThemeDark1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent6);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent6);
SET_BORDER_TYPE(dgBottom, blsThick);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent6);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent6);
SET_BORDER_TYPE(dgTop, blsThick);
SET_BORDER_CLR_THEME(clrTop, ettThemeDark1);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent6);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent6);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent6);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent6);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium13///////////////////
void AddTableStyleMedium13(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_MEDIUM_FROM + 12, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 13);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent20);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEME(clrVert, ettThemeDark1);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEME(clrHorz, ettThemeDark1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent5);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent5);
SET_BORDER_TYPE(dgBottom, blsThick);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent5);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent5);
SET_BORDER_TYPE(dgTop, blsThick);
SET_BORDER_CLR_THEME(clrTop, ettThemeDark1);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent5);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent5);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent5);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent5);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium12///////////////////
void AddTableStyleMedium12(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_MEDIUM_FROM + 11, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 12);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent20);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEME(clrVert, ettThemeDark1);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEME(clrHorz, ettThemeDark1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent4);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent4);
SET_BORDER_TYPE(dgBottom, blsThick);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent4);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent4);
SET_BORDER_TYPE(dgTop, blsThick);
SET_BORDER_CLR_THEME(clrTop, ettThemeDark1);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent4);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent4);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent4);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent4);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium11///////////////////
void AddTableStyleMedium11(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_MEDIUM_FROM + 10, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 11);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent20);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEME(clrVert, ettThemeDark1);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEME(clrHorz, ettThemeDark1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent3);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent3);
SET_BORDER_TYPE(dgBottom, blsThick);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent3);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent3);
SET_BORDER_TYPE(dgTop, blsThick);
SET_BORDER_CLR_THEME(clrTop, ettThemeDark1);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent3);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent3);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent3);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent3);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium10///////////////////
void AddTableStyleMedium10(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_MEDIUM_FROM + 9, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 10);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent20);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEME(clrVert, ettThemeDark1);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEME(clrHorz, ettThemeDark1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent2);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent2);
SET_BORDER_TYPE(dgBottom, blsThick);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent2);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent2);
SET_BORDER_TYPE(dgTop, blsThick);
SET_BORDER_CLR_THEME(clrTop, ettThemeDark1);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent2);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent2);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent2);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent2);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium9///////////////////
void AddTableStyleMedium9(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_MEDIUM_FROM + 8, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 9);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent20);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEME(clrVert, ettThemeDark1);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEME(clrHorz, ettThemeDark1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent1);
SET_BORDER_TYPE(dgBottom, blsThick);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent1);
SET_BORDER_TYPE(dgTop, blsThick);
SET_BORDER_CLR_THEME(clrTop, ettThemeDark1);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium8///////////////////
void AddTableStyleMedium8(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_MEDIUM_FROM + 7, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 8);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEME(clrVert, ettThemeDark1);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEME(clrHorz, ettThemeDark1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThick);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsThick);
SET_BORDER_CLR_THEME(clrTop, ettThemeDark1);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent65);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent65);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent65);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent65);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium7///////////////////
void AddTableStyleMedium7(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_MEDIUM_FROM + 6, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 7);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent6, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent6, dblAccentPercent60);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent6, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent6, dblAccentPercent60);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent6, dblAccentPercent60);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent6);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent6);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent6);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium6///////////////////
void AddTableStyleMedium6(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_MEDIUM_FROM + 5, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 6);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent5, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent5, dblAccentPercent60);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent5, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent5, dblAccentPercent60);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent5, dblAccentPercent60);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent5);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent5);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent5);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium5///////////////////
void AddTableStyleMedium5(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_MEDIUM_FROM + 4, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 5);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent4, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent4, dblAccentPercent60);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent4, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent4, dblAccentPercent60);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent4, dblAccentPercent60);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent4);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent4);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent4);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium4///////////////////
void AddTableStyleMedium4(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_MEDIUM_FROM + 3, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 4);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent3, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent3, dblAccentPercent60);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent3, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent3, dblAccentPercent60);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent3, dblAccentPercent60);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent3);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent3);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent3);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium3///////////////////
void AddTableStyleMedium3(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_MEDIUM_FROM + 2, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 3);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent2, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent2, dblAccentPercent60);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent2, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent2, dblAccentPercent60);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent2, dblAccentPercent60);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent2);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent2);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent2);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium2///////////////////
void AddTableStyleMedium2(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_MEDIUM_FROM + 1, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 2);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent1, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent1, dblAccentPercent60);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent1, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent1, dblAccentPercent60);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent1, dblAccentPercent60);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent1);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium1///////////////////
void AddTableStyleMedium1(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_MEDIUM_FROM + 0, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 1);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeLight1);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEME(clrRight, ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEME(clrHorz, ettThemeLight1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight21///////////////////
void AddTableStyleLight21(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_LIGHT_FROM + 20, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 21);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent6);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent6);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent6);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent6);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEME(clrVert, ettThemeAccent6);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEME(clrHorz, ettThemeAccent6);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent6);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent6);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight20///////////////////
void AddTableStyleLight20(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_LIGHT_FROM + 19, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 20);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent5);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent5);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent5);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent5);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEME(clrVert, ettThemeAccent5);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEME(clrHorz, ettThemeAccent5);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent5);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent5);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight19///////////////////
void AddTableStyleLight19(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_LIGHT_FROM + 18, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 19);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent4);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent4);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent4);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent4);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEME(clrVert, ettThemeAccent4);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEME(clrHorz, ettThemeAccent4);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent4);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent4);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight18///////////////////
void AddTableStyleLight18(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_LIGHT_FROM + 17, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 18);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent3);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent3);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent3);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent3);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEME(clrVert, ettThemeAccent3);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEME(clrHorz, ettThemeAccent3);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent3);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent3);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight17///////////////////
void AddTableStyleLight17(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_LIGHT_FROM + 16, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 17);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent2);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent2);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent2);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent2);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEME(clrVert, ettThemeAccent2);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEME(clrHorz, ettThemeAccent2);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent2);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent2);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight16///////////////////
void AddTableStyleLight16(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_LIGHT_FROM + 15, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 16);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent1);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent1);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEME(clrVert, ettThemeAccent1);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEME(clrHorz, ettThemeAccent1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent1);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight15///////////////////
void AddTableStyleLight15(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_LIGHT_FROM + 14, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 15);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeLight1);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEME(clrRight, ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEME(clrVert, ettThemeLight1);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEME(clrHorz, ettThemeLight1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight14 ///////////////////
void AddTableStyleLight14 (KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_LIGHT_FROM + 13, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 14);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent6);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent6);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent6);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent6);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent6);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent6);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent6);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent6);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent6);
spItm->SetFormatInner(TSF_SecondRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent6);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent6);
spItm->SetFormatInner(TSF_SecondColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight13///////////////////
void AddTableStyleLight13(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_LIGHT_FROM + 12, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 13);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent5);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent5);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent5);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent5);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent5);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent5);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent5);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent5);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent5);
spItm->SetFormatInner(TSF_SecondRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent5);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent5);
spItm->SetFormatInner(TSF_SecondColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight12///////////////////
void AddTableStyleLight12(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_LIGHT_FROM + 11, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 12);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent4);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent4);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent4);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent4);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent4);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent4);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent4);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent4);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent4);
spItm->SetFormatInner(TSF_SecondRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent4);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent4);
spItm->SetFormatInner(TSF_SecondColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight11///////////////////
void AddTableStyleLight11(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_LIGHT_FROM + 10, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 11);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent3);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent3);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent3);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent3);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent3);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent3);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent3);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent3);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent3);
spItm->SetFormatInner(TSF_SecondRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent3);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent3);
spItm->SetFormatInner(TSF_SecondColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight10///////////////////
void AddTableStyleLight10(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_LIGHT_FROM + 9, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 10);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent2);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent2);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent2);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent2);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent2);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent2);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent2);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent2);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent2);
spItm->SetFormatInner(TSF_SecondRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent2);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent2);
spItm->SetFormatInner(TSF_SecondColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight9///////////////////
void AddTableStyleLight9(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_LIGHT_FROM + 8, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 9);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent1);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent1);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent1);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent1);
spItm->SetFormatInner(TSF_SecondRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent1);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent1);
spItm->SetFormatInner(TSF_SecondColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight8///////////////////
void AddTableStyleLight8(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_LIGHT_FROM + 7, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 8);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeLight1);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEME(clrRight, ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
spItm->SetFormatInner(TSF_SecondRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeLight1);
spItm->SetFormatInner(TSF_SecondColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight7///////////////////
void AddTableStyleLight7(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_LIGHT_FROM + 6, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 7);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent6, -dblAccentPercent75);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent6);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent6);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent6, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent6);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent6, -dblAccentPercent75);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent6);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent6, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent6, -dblAccentPercent75);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight6///////////////////
void AddTableStyleLight6(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_LIGHT_FROM + 5, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 6);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent5, -dblAccentPercent75);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent5);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent5);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent5, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent5);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent5, -dblAccentPercent75);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent5);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent5, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent5, -dblAccentPercent75);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight5///////////////////
void AddTableStyleLight5(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_LIGHT_FROM + 4, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 5);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent4, -dblAccentPercent75);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent4);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent4);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent4, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent4);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent4, -dblAccentPercent75);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent4);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent4, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent4, -dblAccentPercent75);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight4///////////////////
void AddTableStyleLight4(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_LIGHT_FROM + 3, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 4);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent3, -dblAccentPercent75);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent3);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent3);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent3, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent3);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent3, -dblAccentPercent75);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent3);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent3, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent3, -dblAccentPercent75);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight3///////////////////
void AddTableStyleLight3(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_LIGHT_FROM + 2, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 3);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent2, -dblAccentPercent75);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent2);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent2);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent2, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent2);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent2, -dblAccentPercent75);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent2);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent2, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent2, -dblAccentPercent75);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight2///////////////////
void AddTableStyleLight2(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_LIGHT_FROM + 1, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 2);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent1, -dblAccentPercent75);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent1, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent1, -dblAccentPercent75);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent1);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight1///////////////////
void AddTableStyleLight1(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_LIGHT_FROM + 0, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 1);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleDark11///////////////////
void AddTableStyleDark11(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_DARK_FROM + 10, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 11);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent20);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent6);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent6);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleDark10///////////////////
void AddTableStyleDark10(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_DARK_FROM + 9, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 10);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent20);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent4);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent4);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleDark9 2///////////////////
void AddTableStyleDark9 2(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_DARK_FROM + 8, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 9);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent20);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent2);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent2);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleDark8///////////////////
void AddTableStyleDark8(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_DARK_FROM + 7, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 8);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent65);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent65);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent65);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent65);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleDark7///////////////////
void AddTableStyleDark7(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_DARK_FROM + 6, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 7);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent6);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent6);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, -dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, -dblAccentPercent50);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeDark1);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, -dblAccentPercent75);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEME(clrRight, ettThemeDark1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, -dblAccentPercent75);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEME(clrLeft, ettThemeDark1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleDark6///////////////////
void AddTableStyleDark6(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_DARK_FROM + 5, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 6);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent5);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent5);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, -dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, -dblAccentPercent50);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeDark1);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, -dblAccentPercent75);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEME(clrRight, ettThemeDark1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, -dblAccentPercent75);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEME(clrLeft, ettThemeDark1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleDark5///////////////////
void AddTableStyleDark5(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_DARK_FROM + 4, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 5);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent4);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent4);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, -dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, -dblAccentPercent50);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeDark1);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, -dblAccentPercent75);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEME(clrRight, ettThemeDark1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, -dblAccentPercent75);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEME(clrLeft, ettThemeDark1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleDark4///////////////////
void AddTableStyleDark4(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_DARK_FROM + 3, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 4);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent3);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent3);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, -dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, -dblAccentPercent50);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeDark1);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, -dblAccentPercent75);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEME(clrRight, ettThemeDark1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, -dblAccentPercent75);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEME(clrLeft, ettThemeDark1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleDark3///////////////////
void AddTableStyleDark3(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_DARK_FROM + 2, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 3);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent2);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent2);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, -dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, -dblAccentPercent50);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeDark1);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, -dblAccentPercent75);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEME(clrRight, ettThemeDark1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, -dblAccentPercent75);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEME(clrLeft, ettThemeDark1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleDark2///////////////////
void AddTableStyleDark2(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_DARK_FROM + 1, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 2);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, -dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, -dblAccentPercent50);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeDark1);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, -dblAccentPercent75);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEME(clrRight, ettThemeDark1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, -dblAccentPercent75);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEME(clrLeft, ettThemeDark1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleDark1///////////////////
void AddTableStyleDark1(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_TABLE_DARK_FROM + 0, TST_TABLE_STYLE);
ks_wstring wstrName(_STR_TAB_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 1);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeLight1, dblAccentPercent55);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeLight1, dblAccentPercent55);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeLight1, dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeLight1, dblAccentPercent85);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeDark1);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeLight1, dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeLight1, dblAccentPercent75);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEME(clrRight, ettThemeDark1);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeLight1, dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeLight1, dblAccentPercent75);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEME(clrLeft, ettThemeDark1);
spItm->SetFormatInner(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeLight1, dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeLight1, dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeLight1, dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeLight1, dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleMedium28///////////////////
void AddPivotStyleMedium28(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_MEDIUM_FROM +27, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 28);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent6, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent6, -dblAccentPercent75);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent6, -dblAccentPercent75);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent40);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent40);
spItm->SetFormatInner(TSF_SecondRowStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_SecondColStripeXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent6, -dblAccentPercent75);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent6, -dblAccentPercent75);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent20);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEME(clrVert, ettThemeDark1);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleMedium27///////////////////
void AddPivotStyleMedium27(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_MEDIUM_FROM +26, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 27);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent5, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent5, -dblAccentPercent75);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent5, -dblAccentPercent75);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent40);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent40);
spItm->SetFormatInner(TSF_SecondRowStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_SecondColStripeXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent5, -dblAccentPercent75);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent5, -dblAccentPercent75);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent20);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEME(clrVert, ettThemeDark1);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleMedium26///////////////////
void AddPivotStyleMedium26(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_MEDIUM_FROM +25, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 26);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent4, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent4, -dblAccentPercent75);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent4, -dblAccentPercent75);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent40);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent40);
spItm->SetFormatInner(TSF_SecondRowStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_SecondColStripeXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent4, -dblAccentPercent75);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent4, -dblAccentPercent75);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent20);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEME(clrVert, ettThemeDark1);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleMedium25///////////////////
void AddPivotStyleMedium25(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_MEDIUM_FROM +24, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 25);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent3, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent3, -dblAccentPercent75);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent3, -dblAccentPercent75);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent40);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent40);
spItm->SetFormatInner(TSF_SecondRowStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_SecondColStripeXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent3, -dblAccentPercent75);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent3, -dblAccentPercent75);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent20);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEME(clrVert, ettThemeDark1);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleMedium24///////////////////
void AddPivotStyleMedium24(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_MEDIUM_FROM +23, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 24);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent2, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent2, -dblAccentPercent75);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent2, -dblAccentPercent75);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent40);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent40);
spItm->SetFormatInner(TSF_SecondRowStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_SecondColStripeXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent2, -dblAccentPercent75);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent2, -dblAccentPercent75);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent20);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEME(clrVert, ettThemeDark1);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleMedium23///////////////////
void AddPivotStyleMedium23(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_MEDIUM_FROM +22, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 23);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent1, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent1, -dblAccentPercent75);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent40);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent40);
spItm->SetFormatInner(TSF_SecondRowStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_SecondColStripeXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent1, -dblAccentPercent75);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent1, -dblAccentPercent75);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent20);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEME(clrVert, ettThemeDark1);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleMedium22///////////////////
void AddPivotStyleMedium22(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_MEDIUM_FROM +21, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 22);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeLight1, dblAccentPercent50);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_SecondRowStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_SecondColStripeXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeLight1, dblAccentPercent50);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeLight1, dblAccentPercent50);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEME(clrVert, ettThemeDark1);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleMedium21///////////////////
void AddPivotStyleMedium21(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_MEDIUM_FROM +20, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 21);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent20);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent6, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent6, dblAccentPercent40);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent20);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent6, dblAccentPercent40);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent6, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent40);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent6, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent6, dblAccentPercent60);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent6, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent6, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstSubtotalColumnXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// thirdRowSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormatInner(TSF_ThirdRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent20);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent6, dblAccentPercent40);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent6, dblAccentPercent40);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrVert, ettThemeAccent6, dblAccentPercent40);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleMedium20///////////////////
void AddPivotStyleMedium20(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_MEDIUM_FROM +19, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 20);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent20);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent5, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent5, dblAccentPercent40);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent20);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent5, dblAccentPercent40);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent5, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent40);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent5, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent5, dblAccentPercent60);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent5, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent5, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstSubtotalColumnXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// thirdRowSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormatInner(TSF_ThirdRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent20);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent5, dblAccentPercent40);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent5, dblAccentPercent40);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrVert, ettThemeAccent5, dblAccentPercent40);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleMedium19///////////////////
void AddPivotStyleMedium19(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_MEDIUM_FROM +18, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 19);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent20);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent4, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent4, dblAccentPercent40);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent20);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent4, dblAccentPercent40);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent4, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent40);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent4, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent4, dblAccentPercent60);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent4, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent4, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstSubtotalColumnXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// thirdRowSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormatInner(TSF_ThirdRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent20);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent4, dblAccentPercent40);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent4, dblAccentPercent40);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrVert, ettThemeAccent4, dblAccentPercent40);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleMedium18///////////////////
void AddPivotStyleMedium18(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_MEDIUM_FROM +17, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 18);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent20);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent3, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent3, dblAccentPercent40);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent20);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent3, dblAccentPercent40);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent3, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent40);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent3, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent3, dblAccentPercent60);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent3, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent3, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstSubtotalColumnXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// thirdRowSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormatInner(TSF_ThirdRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent20);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent3, dblAccentPercent40);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent3, dblAccentPercent40);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrVert, ettThemeAccent3, dblAccentPercent40);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleMedium17///////////////////
void AddPivotStyleMedium17(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_MEDIUM_FROM +16, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 17);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent20);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent2, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent2, dblAccentPercent40);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent20);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent2, dblAccentPercent40);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent2, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent40);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent2, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent2, dblAccentPercent60);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent2, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent2, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstSubtotalColumnXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// thirdRowSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormatInner(TSF_ThirdRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent20);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent2, dblAccentPercent40);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent2, dblAccentPercent40);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrVert, ettThemeAccent2, dblAccentPercent40);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleMedium16///////////////////
void AddPivotStyleMedium16(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_MEDIUM_FROM +15, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 16);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent20);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent1, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent1, dblAccentPercent40);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent20);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent1, dblAccentPercent40);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent1, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent40);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent1, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent1, dblAccentPercent60);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent1, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent1, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstSubtotalColumnXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// thirdRowSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormatInner(TSF_ThirdRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent20);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent1, dblAccentPercent40);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent1, dblAccentPercent40);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrVert, ettThemeAccent1, dblAccentPercent40);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleMedium15///////////////////
void AddPivotStyleMedium15(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_MEDIUM_FROM +14, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 15);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeDark1, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeDark1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeDark1, -dblAccentPercent75);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeDark1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent75);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeDark1, -dblAccentPercent65);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeDark1, -dblAccentPercent65);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeDark1, -dblAccentPercent65);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeDark1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstSubtotalColumnXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// thirdRowSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormatInner(TSF_ThirdRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent05);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent05);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeDark1, -dblAccentPercent85);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeDark1, -dblAccentPercent85);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrVert, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleMedium14///////////////////
void AddPivotStyleMedium14(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_MEDIUM_FROM +13, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 14);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent6);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent6);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent6, -dblAccentPercent75);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent6, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent6, -dblAccentPercent75);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent6, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent6, dblAccentPercent60);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent6, dblAccentPercent60);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent6, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent6, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent6, dblAccentPercent40);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent6, dblAccentPercent40);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent6, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent6, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstSubtotalColumnXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent20);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleMedium13///////////////////
void AddPivotStyleMedium13(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_MEDIUM_FROM +12, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 13);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent5);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent5);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent5, -dblAccentPercent75);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent5, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent5, -dblAccentPercent75);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent5, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent5, dblAccentPercent60);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent5, dblAccentPercent60);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent5, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent5, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent5, dblAccentPercent40);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent5, dblAccentPercent40);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent5, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent5, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstSubtotalColumnXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent20);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleMedium12///////////////////
void AddPivotStyleMedium12(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_MEDIUM_FROM +11, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 12);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent4);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent4);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent4, -dblAccentPercent75);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent4, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent4, -dblAccentPercent75);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent4, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent4, dblAccentPercent60);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent4, dblAccentPercent60);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent4, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent4, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent4, dblAccentPercent40);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent4, dblAccentPercent40);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent4, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent4, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstSubtotalColumnXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent20);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleMedium11///////////////////
void AddPivotStyleMedium11(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_MEDIUM_FROM +10, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 11);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent3);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent3);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent3, -dblAccentPercent75);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent3, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent3, -dblAccentPercent75);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent3, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent3, dblAccentPercent60);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent3, dblAccentPercent60);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent3, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent3, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent3, dblAccentPercent40);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent3, dblAccentPercent40);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent3, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent3, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstSubtotalColumnXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent20);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleMedium10///////////////////
void AddPivotStyleMedium10(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_MEDIUM_FROM +9, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 10);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent2);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent2);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent2, -dblAccentPercent75);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent2, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent2, -dblAccentPercent75);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent2, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent2, dblAccentPercent60);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent2, dblAccentPercent60);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent2, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent2, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent2, dblAccentPercent40);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent2, dblAccentPercent40);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent2, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent2, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstSubtotalColumnXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent20);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleMedium9///////////////////
void AddPivotStyleMedium9(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_MEDIUM_FROM +8, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 9);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent1);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent1, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent1, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent1, dblAccentPercent60);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent1, dblAccentPercent60);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent1, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent1, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent1, dblAccentPercent40);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent1, dblAccentPercent40);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent1, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent1, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstSubtotalColumnXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent20);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleMedium8///////////////////
void AddPivotStyleMedium8(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_MEDIUM_FROM +7, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 8);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeLight1, dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeDark1, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeDark1, -dblAccentPercent75);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeDark1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeDark1, -dblAccentPercent85);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeDark1, -dblAccentPercent75);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeDark1, -dblAccentPercent75);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeDark1, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeDark1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstSubtotalColumnXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleMedium7///////////////////
void AddPivotStyleMedium7(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_MEDIUM_FROM +6, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 7);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, -dblAccentPercent75);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent6, -dblAccentPercent75);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent6, -dblAccentPercent75);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent6, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent6, -dblAccentPercent75);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent6, -dblAccentPercent75);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent6, -dblAccentPercent75);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent6, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstHeaderCellXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent60);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstHdrCellXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent6, dblAccentPercent40);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstColumnSubheadingXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent60);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent6, dblAccentPercent20);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent6, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstColumnSubheadingXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent6);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent6, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent6, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent6, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent6, dblAccentPercent20);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent6, dblAccentPercent20);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleMedium6///////////////////
void AddPivotStyleMedium6(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_MEDIUM_FROM +5, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 6);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, -dblAccentPercent75);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent5, -dblAccentPercent75);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent5, -dblAccentPercent75);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent5, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent5, -dblAccentPercent75);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent5, -dblAccentPercent75);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent5, -dblAccentPercent75);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent5, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstHeaderCellXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent60);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstHdrCellXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent5, dblAccentPercent40);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstColumnSubheadingXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent60);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent5, dblAccentPercent20);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent5, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstColumnSubheadingXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent5);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent5, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent5, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent5, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent5, dblAccentPercent20);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent5, dblAccentPercent20);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleMedium5///////////////////
void AddPivotStyleMedium5(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_MEDIUM_FROM +4, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 5);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, -dblAccentPercent75);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent4, -dblAccentPercent75);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent4, -dblAccentPercent75);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent4, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent4, -dblAccentPercent75);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent4, -dblAccentPercent75);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent4, -dblAccentPercent75);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent4, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstHeaderCellXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent60);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstHdrCellXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent4, dblAccentPercent40);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstColumnSubheadingXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent60);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent4, dblAccentPercent20);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent4, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstColumnSubheadingXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent4);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent4, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent4, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent4, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent4, dblAccentPercent20);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent4, dblAccentPercent20);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleMedium4///////////////////
void AddPivotStyleMedium4(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_MEDIUM_FROM +3, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 4);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, -dblAccentPercent75);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent3, -dblAccentPercent75);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent3, -dblAccentPercent75);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent3, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent3, -dblAccentPercent75);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent3, -dblAccentPercent75);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent3, -dblAccentPercent75);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent3, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstHeaderCellXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent60);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstHdrCellXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent3, dblAccentPercent40);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstColumnSubheadingXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent60);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent3, dblAccentPercent20);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent3, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstColumnSubheadingXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent3);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent3, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent3, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent3, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent3, dblAccentPercent20);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent3, dblAccentPercent20);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleMedium3///////////////////
void AddPivotStyleMedium3(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_MEDIUM_FROM +2, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 3);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, -dblAccentPercent75);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent2, -dblAccentPercent75);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent2, -dblAccentPercent75);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent2, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent2, -dblAccentPercent75);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent2, -dblAccentPercent75);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent2, -dblAccentPercent75);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent2, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstHeaderCellXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent60);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstHdrCellXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent2, dblAccentPercent40);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstColumnSubheadingXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent60);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent2, dblAccentPercent20);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent2, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstColumnSubheadingXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent2);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent2, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent2, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent2, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent2, dblAccentPercent20);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent2, dblAccentPercent20);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleMedium2///////////////////
void AddPivotStyleMedium2(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_MEDIUM_FROM +1, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 2);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, -dblAccentPercent75);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent1, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent1, -dblAccentPercent75);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent1, -dblAccentPercent75);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstHeaderCellXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent60);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstHdrCellXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent1, dblAccentPercent40);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstColumnSubheadingXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent60);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent1, dblAccentPercent20);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent1, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstColumnSubheadingXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent1, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent1, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent1, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent1, dblAccentPercent20);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent1, dblAccentPercent20);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleMedium1///////////////////
void AddPivotStyleMedium1(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_MEDIUM_FROM +0, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 1);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeLight1, dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeLight1, dblAccentPercent50);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstHeaderCellXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent65);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent65);
spItm->SetFormatInner(TSF_FirstHdrCellXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstColumnSubheadingXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent65);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent65);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeDark1, -dblAccentPercent85);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstColumnSubheadingXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeDark1, -dblAccentPercent85);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeDark1, -dblAccentPercent85);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleLight28///////////////////
void AddPivotStyleLight28(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_LIGHT_FROM +27, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 28);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent6, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent6);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent6, -dblAccentPercent75);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent6);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent6, -dblAccentPercent75);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent20);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent6, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalColumnXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent6, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstSubtotalColumnXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent6, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent6, -dblAccentPercent75);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent6, -dblAccentPercent75);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent6);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent6);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent6);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent6);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEME(clrVert, ettThemeAccent6);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleLight27///////////////////
void AddPivotStyleLight27(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_LIGHT_FROM +26, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 27);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent5, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent5);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent5, -dblAccentPercent75);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent5);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent5, -dblAccentPercent75);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent20);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent5, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalColumnXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent5, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstSubtotalColumnXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent5, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent5, -dblAccentPercent75);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent5, -dblAccentPercent75);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent5);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent5);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent5);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent5);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEME(clrVert, ettThemeAccent5);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleLight26///////////////////
void AddPivotStyleLight26(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_LIGHT_FROM +25, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 26);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent4, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent4);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent4, -dblAccentPercent75);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent4);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent4, -dblAccentPercent75);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent20);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent4, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalColumnXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent4, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstSubtotalColumnXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent4, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent4, -dblAccentPercent75);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent4, -dblAccentPercent75);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent4);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent4);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent4);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent4);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEME(clrVert, ettThemeAccent4);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleLight25///////////////////
void AddPivotStyleLight25(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_LIGHT_FROM +24, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 25);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent3, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent3);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent3, -dblAccentPercent75);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent3);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent3, -dblAccentPercent75);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent20);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent3, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalColumnXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent3, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstSubtotalColumnXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent3, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent3, -dblAccentPercent75);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent3, -dblAccentPercent75);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent3);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent3);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent3);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent3);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEME(clrVert, ettThemeAccent3);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleLight24///////////////////
void AddPivotStyleLight24(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_LIGHT_FROM +23, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 24);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent2, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent2);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent2, -dblAccentPercent75);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent2);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent2, -dblAccentPercent75);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent20);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent2, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalColumnXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent2, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstSubtotalColumnXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent2, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent2, -dblAccentPercent75);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent2, -dblAccentPercent75);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent2);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent2);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent2);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent2);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEME(clrVert, ettThemeAccent2);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleLight23///////////////////
void AddPivotStyleLight23(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_LIGHT_FROM +22, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 23);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent1, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent1, -dblAccentPercent75);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent20);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalColumnXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstSubtotalColumnXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent1, -dblAccentPercent75);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent1);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent1);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEME(clrVert, ettThemeAccent1);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleLight22///////////////////
void AddPivotStyleLight22(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_LIGHT_FROM +21, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 22);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeDark1, -dblAccentPercent65);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeDark1, -dblAccentPercent65);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstSubtotalColumnXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrVert, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleLight21///////////////////
void AddPivotStyleLight21(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_LIGHT_FROM +20, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 21);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent20);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent6, dblAccentPercent60);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeDark1, -dblAccentPercent75);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeDark1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent6);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent6);
spItm->SetFormatInner(TSF_FirstSubtotalColumnXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent6, dblAccentPercent60);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent6, dblAccentPercent60);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent6, dblAccentPercent60);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent6, dblAccentPercent60);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleLight20///////////////////
void AddPivotStyleLight20(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_LIGHT_FROM +19, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 20);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent20);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent5, dblAccentPercent60);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeDark1, -dblAccentPercent75);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeDark1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent5);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent5);
spItm->SetFormatInner(TSF_FirstSubtotalColumnXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent5, dblAccentPercent60);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent5, dblAccentPercent60);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent5, dblAccentPercent60);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent5, dblAccentPercent60);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleLight19///////////////////
void AddPivotStyleLight19(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_LIGHT_FROM +18, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 19);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent20);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent4, dblAccentPercent60);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeDark1, -dblAccentPercent75);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeDark1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent4);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent4);
spItm->SetFormatInner(TSF_FirstSubtotalColumnXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent4, dblAccentPercent60);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent4, dblAccentPercent60);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent4, dblAccentPercent60);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent4, dblAccentPercent60);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleLight18///////////////////
void AddPivotStyleLight18(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_LIGHT_FROM +17, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 18);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent20);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent3, dblAccentPercent60);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeDark1, -dblAccentPercent75);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeDark1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent3);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent3);
spItm->SetFormatInner(TSF_FirstSubtotalColumnXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent3, dblAccentPercent60);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent3, dblAccentPercent60);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent3, dblAccentPercent60);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent3, dblAccentPercent60);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleLight17///////////////////
void AddPivotStyleLight17(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_LIGHT_FROM +16, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 17);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent20);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent2, dblAccentPercent60);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeDark1, -dblAccentPercent75);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeDark1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent2);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent2);
spItm->SetFormatInner(TSF_FirstSubtotalColumnXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent2, dblAccentPercent60);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent2, dblAccentPercent60);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent2, dblAccentPercent60);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent2, dblAccentPercent60);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleLight16///////////////////
void AddPivotStyleLight16(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_LIGHT_FROM +15, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 16);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent20);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent1, dblAccentPercent60);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeDark1, -dblAccentPercent75);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeDark1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent1);
spItm->SetFormatInner(TSF_FirstSubtotalColumnXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent1, dblAccentPercent60);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent1, dblAccentPercent60);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent1, dblAccentPercent60);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent1, dblAccentPercent60);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleLight15///////////////////
void AddPivotStyleLight15(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_LIGHT_FROM +14, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 15);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeDark1, -dblAccentPercent65);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeDark1, -dblAccentPercent75);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeDark1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_FirstSubtotalColumnXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeDark1, -dblAccentPercent65);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeDark1, -dblAccentPercent65);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeDark1, -dblAccentPercent65);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeDark1, -dblAccentPercent65);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleLight14///////////////////
void AddPivotStyleLight14(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_LIGHT_FROM +13, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 14);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent6);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent6);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent6);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent6);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEME(clrHorz, ettThemeDark1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent6);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent6);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent6);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent6);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent6);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent6, dblAccentPercent40);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent6, dblAccentPercent40);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent6, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent6, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent6);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent6);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent6);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent6);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent20);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent6, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent6, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent6, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// secondColumnSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent6, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondColumnSubheadingXF, &_xf);

// thirdColumnSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormatInner(TSF_ThirdColumnSubheadingXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent6, -dblAccentPercent75);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent6, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleLight13///////////////////
void AddPivotStyleLight13(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_LIGHT_FROM +12, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 13);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent5);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent5);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent5);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent5);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEME(clrHorz, ettThemeDark1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent5);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent5);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent5);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent5);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent5);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent5, dblAccentPercent40);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent5, dblAccentPercent40);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent5, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent5, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent5);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent5);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent5);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent5);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent20);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent5, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent5, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent5, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// secondColumnSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent5, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondColumnSubheadingXF, &_xf);

// thirdColumnSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormatInner(TSF_ThirdColumnSubheadingXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent5, -dblAccentPercent75);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent5, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleLight12///////////////////
void AddPivotStyleLight12(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_LIGHT_FROM +11, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 12);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent4);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent4);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent4);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent4);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEME(clrHorz, ettThemeDark1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent4);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent4);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent4);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent4);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent4);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent4, dblAccentPercent40);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent4, dblAccentPercent40);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent4, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent4, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent4);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent4);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent4);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent4);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent20);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent4, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent4, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent4, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// secondColumnSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent4, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondColumnSubheadingXF, &_xf);

// thirdColumnSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormatInner(TSF_ThirdColumnSubheadingXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent4, -dblAccentPercent75);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent4, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleLight11///////////////////
void AddPivotStyleLight11(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_LIGHT_FROM +10, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 11);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent3);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent3);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent3);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent3);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEME(clrHorz, ettThemeDark1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent3);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent3);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent3);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent3);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent3);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent3, dblAccentPercent40);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent3, dblAccentPercent40);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent3, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent3, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent3);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent3);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent3);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent3);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent20);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent3, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent3, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent3, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// secondColumnSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent3, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondColumnSubheadingXF, &_xf);

// thirdColumnSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormatInner(TSF_ThirdColumnSubheadingXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent3, -dblAccentPercent75);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent3, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleLight10///////////////////
void AddPivotStyleLight10(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_LIGHT_FROM +9, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 10);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent2);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent2);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent2);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent2);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEME(clrHorz, ettThemeDark1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent2);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent2);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent2);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent2);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent2);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent2, dblAccentPercent40);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent2, dblAccentPercent40);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent2, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent2, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent2);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent2);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent2);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent2);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent20);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent2, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent2, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent2, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// secondColumnSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent2, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondColumnSubheadingXF, &_xf);

// thirdColumnSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormatInner(TSF_ThirdColumnSubheadingXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent2, -dblAccentPercent75);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent2, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleLight9///////////////////
void AddPivotStyleLight9(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_LIGHT_FROM +8, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 9);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent1);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent1);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent1);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEME(clrHorz, ettThemeDark1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent1);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent1);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent1);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent1, dblAccentPercent40);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent1, dblAccentPercent40);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent1, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent1, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent1);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEME(clrRight, ettThemeAccent1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent1);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent20);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent1, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent1, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent1, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// secondColumnSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent1, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondColumnSubheadingXF, &_xf);

// thirdColumnSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent20);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormatInner(TSF_ThirdColumnSubheadingXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent1, -dblAccentPercent75);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent1, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleLight8///////////////////
void AddPivotStyleLight8(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_LIGHT_FROM +7, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 8);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEME(clrHorz, ettThemeDark1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeDark1, -dblAccentPercent65);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeDark1, -dblAccentPercent65);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeDark1, -dblAccentPercent65);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeDark1, -dblAccentPercent65);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeDark1, -dblAccentPercent55);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeDark1, -dblAccentPercent55);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeDark1, -dblAccentPercent55);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeDark1, -dblAccentPercent55);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeDark1, -dblAccentPercent65);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeDark1, -dblAccentPercent65);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeDark1, -dblAccentPercent65);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// secondColumnSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormatInner(TSF_SecondColumnSubheadingXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleLight7///////////////////
void AddPivotStyleLight7(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_LIGHT_FROM +6, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 7);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent6);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent6);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeDark1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeDark1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent6);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent6);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent20);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent6, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent6, dblAccentPercent40);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent20);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent6, dblAccentPercent40);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent6, dblAccentPercent40);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent6, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent6, dblAccentPercent40);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrVert, ettThemeAccent6, dblAccentPercent40);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent6, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeAccent6);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeAccent6);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent6);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent6);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent6);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent6);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent6, dblAccentPercent20);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleLight6///////////////////
void AddPivotStyleLight6(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_LIGHT_FROM +5, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 6);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent5);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent5);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeDark1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeDark1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent5);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent5);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent20);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent5, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent5, dblAccentPercent40);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent20);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent5, dblAccentPercent40);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent5, dblAccentPercent40);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent5, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent5, dblAccentPercent40);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrVert, ettThemeAccent5, dblAccentPercent40);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent5, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeAccent5);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeAccent5);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent5);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent5);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent5);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent5);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent5, dblAccentPercent20);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleLight5///////////////////
void AddPivotStyleLight5(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_LIGHT_FROM +4, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 5);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent4);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent4);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeDark1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeDark1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent4);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent4);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent20);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent4, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent4, dblAccentPercent40);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent20);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent4, dblAccentPercent40);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent4, dblAccentPercent40);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent4, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent4, dblAccentPercent40);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrVert, ettThemeAccent4, dblAccentPercent40);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent4, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeAccent4);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeAccent4);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent4);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent4);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent4);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent4);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent4, dblAccentPercent20);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleLight4///////////////////
void AddPivotStyleLight4(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_LIGHT_FROM +3, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 4);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent3);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent3);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeDark1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeDark1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent3);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent3);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent20);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent3, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent3, dblAccentPercent40);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent20);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent3, dblAccentPercent40);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent3, dblAccentPercent40);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent3, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent3, dblAccentPercent40);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrVert, ettThemeAccent3, dblAccentPercent40);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent3, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeAccent3);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeAccent3);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent3);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent3);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent3);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent3);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent3, dblAccentPercent20);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleLight3///////////////////
void AddPivotStyleLight3(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_LIGHT_FROM +2, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 3);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent2);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent2);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeDark1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeDark1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent2);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent2);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent20);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent2, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent2, dblAccentPercent40);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent20);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent2, dblAccentPercent40);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent2, dblAccentPercent40);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent2, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent2, dblAccentPercent40);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrVert, ettThemeAccent2, dblAccentPercent40);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent2, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeAccent2);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeAccent2);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent2);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent2);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent2);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent2);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent2, dblAccentPercent20);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleLight2///////////////////
void AddPivotStyleLight2(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_LIGHT_FROM +1, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 2);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeDark1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeDark1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent20);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent1, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent1, dblAccentPercent40);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent20);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent1, dblAccentPercent40);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent1, dblAccentPercent40);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent1, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent1, dblAccentPercent40);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrVert, ettThemeAccent1, dblAccentPercent40);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent1, dblAccentPercent40);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeAccent1);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeAccent1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent1);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent1);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent1, dblAccentPercent20);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleLight1///////////////////
void AddPivotStyleLight1(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_LIGHT_FROM +0, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 1);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeDark1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeDark1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeDark1, -dblAccentPercent65);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeDark1, -dblAccentPercent65);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeDark1, -dblAccentPercent65);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeDark1, -dblAccentPercent65);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeDark1, -dblAccentPercent65);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeDark1, -dblAccentPercent65);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrVert, ettThemeDark1, -dblAccentPercent65);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeDark1, -dblAccentPercent65);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleDark28///////////////////
void AddPivotStyleDark28(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_DARK_FROM + 27, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 28);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeDark1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, -dblAccentPercent75);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent60);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent60);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent60);
spItm->SetFormatInner(TSF_SecondRowStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_SecondColStripeXF, &_xf);

// firstHeaderCellXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent6, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstHdrCellXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, -dblAccentPercent75);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent6, dblAccentPercent20);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent6);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent6);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEME(clrVert, ettThemeDark1);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleDark27///////////////////
void AddPivotStyleDark27(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_DARK_FROM + 26, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 27);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeDark1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, -dblAccentPercent75);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent60);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent60);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent60);
spItm->SetFormatInner(TSF_SecondRowStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_SecondColStripeXF, &_xf);

// firstHeaderCellXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent5, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstHdrCellXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, -dblAccentPercent75);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent5, dblAccentPercent20);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent5);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent5);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEME(clrVert, ettThemeDark1);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleDark26///////////////////
void AddPivotStyleDark26(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_DARK_FROM + 25, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 26);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeDark1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, -dblAccentPercent75);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent60);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent60);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent60);
spItm->SetFormatInner(TSF_SecondRowStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_SecondColStripeXF, &_xf);

// firstHeaderCellXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent4, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstHdrCellXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, -dblAccentPercent75);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent4, dblAccentPercent20);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent4);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent4);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEME(clrVert, ettThemeDark1);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleDark25///////////////////
void AddPivotStyleDark25(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_DARK_FROM + 24, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 25);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeDark1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, -dblAccentPercent75);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent60);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent60);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent60);
spItm->SetFormatInner(TSF_SecondRowStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_SecondColStripeXF, &_xf);

// firstHeaderCellXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent3, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstHdrCellXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, -dblAccentPercent75);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent3, dblAccentPercent20);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent3);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent3);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEME(clrVert, ettThemeDark1);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleDark24///////////////////
void AddPivotStyleDark24(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_DARK_FROM + 23, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 24);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeDark1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, -dblAccentPercent75);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent60);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent60);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent60);
spItm->SetFormatInner(TSF_SecondRowStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_SecondColStripeXF, &_xf);

// firstHeaderCellXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent2, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstHdrCellXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, -dblAccentPercent75);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent2, dblAccentPercent20);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent2);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent2);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEME(clrVert, ettThemeDark1);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleDark23///////////////////
void AddPivotStyleDark23(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_DARK_FROM + 22, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 23);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeDark1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent60);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent60);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent60);
spItm->SetFormatInner(TSF_SecondRowStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_SecondColStripeXF, &_xf);

// firstHeaderCellXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent1, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstHdrCellXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent1, dblAccentPercent20);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent1);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEME(clrVert, ettThemeDark1);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleDark22///////////////////
void AddPivotStyleDark22(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_DARK_FROM + 21, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 22);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeLight1, dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeDark1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeLight1, dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent55);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent55);
spItm->SetFormatInner(TSF_FirstColXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent55);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent55);
spItm->SetFormatInner(TSF_SecondRowStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_SecondColStripeXF, &_xf);

// firstHeaderCellXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_FirstHdrCellXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_SecondSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeLight1, dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeDark1, -dblAccentPercent85);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent50);
SET_INNERBORDER_TYPE(dgVert, blsThin);
SET_INNERBORDER_CLR_THEME(clrVert, ettThemeDark1);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleDark21///////////////////
void AddPivotStyleDark21(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_DARK_FROM + 20, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 21);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent6, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent6, dblAccentPercent60);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent6, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent6, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, -dblAccentPercent75);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent6, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent6, dblAccentPercent60);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent6, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent6, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_FirstSubtotalColumnXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent6, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// firstColumnSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstColumnSubheadingXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent6, dblAccentPercent20);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent6);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent6);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleDark20///////////////////
void AddPivotStyleDark20(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_DARK_FROM + 19, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 20);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent5, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent5, dblAccentPercent60);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent5, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent5, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, -dblAccentPercent75);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent5, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent5, dblAccentPercent60);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent5, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent5, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_FirstSubtotalColumnXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent5, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// firstColumnSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstColumnSubheadingXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent5, dblAccentPercent20);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent5);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent5);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleDark19///////////////////
void AddPivotStyleDark19(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_DARK_FROM + 18, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 19);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent4, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent4, dblAccentPercent60);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent4, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent4, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, -dblAccentPercent75);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent4, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent4, dblAccentPercent60);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent4, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent4, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_FirstSubtotalColumnXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent4, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// firstColumnSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstColumnSubheadingXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent4, dblAccentPercent20);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent4);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent4);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleDark18///////////////////
void AddPivotStyleDark18(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_DARK_FROM + 17, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 18);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent3, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent3, dblAccentPercent60);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent3, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent3, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, -dblAccentPercent75);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent3, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent3, dblAccentPercent60);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent3, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent3, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_FirstSubtotalColumnXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent3, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// firstColumnSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstColumnSubheadingXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent3, dblAccentPercent20);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent3);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent3);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleDark17///////////////////
void AddPivotStyleDark17(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_DARK_FROM + 16, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 17);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent2, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent2, dblAccentPercent60);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent2, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent2, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, -dblAccentPercent75);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent2, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent2, dblAccentPercent60);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent2, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent2, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_FirstSubtotalColumnXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent2, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// firstColumnSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstColumnSubheadingXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent2, dblAccentPercent20);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent2);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent2);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleDark16///////////////////
void AddPivotStyleDark16(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_DARK_FROM + 15, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 16);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent1, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent1, dblAccentPercent60);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent1, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent1, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, -dblAccentPercent75);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent1, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent1, dblAccentPercent60);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent1, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent1, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_FirstSubtotalColumnXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent1, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// firstColumnSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstColumnSubheadingXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent1, dblAccentPercent20);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent1);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleDark15///////////////////
void AddPivotStyleDark15(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_DARK_FROM + 14, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 15);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeDark1, -dblAccentPercent65);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeDark1, -dblAccentPercent65);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeDark1, -dblAccentPercent75);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeDark1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeLight1, dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeDark1, -dblAccentPercent65);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeDark1, -dblAccentPercent65);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeDark1, -dblAccentPercent65);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeDark1, -dblAccentPercent65);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// firstSubtotalColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_FirstSubtotalColumnXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeDark1, -dblAccentPercent65);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// firstColumnSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeLight1, dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent1, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstColumnSubheadingXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeDark1, -dblAccentPercent85);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent55);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent55);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleDark14///////////////////
void AddPivotStyleDark14(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_DARK_FROM + 13, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 14);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeLight1, dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeLight1, dblAccentPercent75);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeLight1, dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeLight1, dblAccentPercent75);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent6, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent6, dblAccentPercent40);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent6, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent6, dblAccentPercent60);
spItm->SetFormatInner(TSF_SecondRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent6, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent6, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent40);
spItm->SetFormatInner(TSF_SecondColStripeXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent6, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondColumnSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent6, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondColumnSubheadingXF, &_xf);

// thirdColumnSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent6, dblAccentPercent20);
spItm->SetFormatInner(TSF_ThirdColumnSubheadingXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent20);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleDark13///////////////////
void AddPivotStyleDark13(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_DARK_FROM + 12, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 13);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeLight1, dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeLight1, dblAccentPercent75);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeLight1, dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeLight1, dblAccentPercent75);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent5, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent5, dblAccentPercent40);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent5, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent5, dblAccentPercent60);
spItm->SetFormatInner(TSF_SecondRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent5, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent5, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent40);
spItm->SetFormatInner(TSF_SecondColStripeXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent5, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondColumnSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent5, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondColumnSubheadingXF, &_xf);

// thirdColumnSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent5, dblAccentPercent20);
spItm->SetFormatInner(TSF_ThirdColumnSubheadingXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent20);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleDark12///////////////////
void AddPivotStyleDark12(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_DARK_FROM + 11, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 12);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeLight1, dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeLight1, dblAccentPercent75);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeLight1, dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeLight1, dblAccentPercent75);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent4, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent4, dblAccentPercent40);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent4, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent4, dblAccentPercent60);
spItm->SetFormatInner(TSF_SecondRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent4, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent4, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent40);
spItm->SetFormatInner(TSF_SecondColStripeXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent4, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondColumnSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent4, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondColumnSubheadingXF, &_xf);

// thirdColumnSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent4, dblAccentPercent20);
spItm->SetFormatInner(TSF_ThirdColumnSubheadingXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent20);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleDark11///////////////////
void AddPivotStyleDark11(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_DARK_FROM + 10, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 11);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeLight1, dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeLight1, dblAccentPercent75);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeLight1, dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeLight1, dblAccentPercent75);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent3, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent3, dblAccentPercent40);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent3, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent3, dblAccentPercent60);
spItm->SetFormatInner(TSF_SecondRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent3, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent3, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent40);
spItm->SetFormatInner(TSF_SecondColStripeXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent3, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondColumnSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent3, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondColumnSubheadingXF, &_xf);

// thirdColumnSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent3, dblAccentPercent20);
spItm->SetFormatInner(TSF_ThirdColumnSubheadingXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent20);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleDark10///////////////////
void AddPivotStyleDark10(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_DARK_FROM + 9, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 10);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeLight1, dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeLight1, dblAccentPercent75);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeLight1, dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeLight1, dblAccentPercent75);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent2, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent2, dblAccentPercent40);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent2, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent2, dblAccentPercent60);
spItm->SetFormatInner(TSF_SecondRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent2, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent2, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent40);
spItm->SetFormatInner(TSF_SecondColStripeXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent2, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondColumnSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent2, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondColumnSubheadingXF, &_xf);

// thirdColumnSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent2, dblAccentPercent20);
spItm->SetFormatInner(TSF_ThirdColumnSubheadingXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent20);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleDark9///////////////////
void AddPivotStyleDark9(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_DARK_FROM + 8, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 9);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeLight1, dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeLight1, dblAccentPercent75);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeLight1, dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeLight1, dblAccentPercent75);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent1, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent1, dblAccentPercent40);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent1, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent1, dblAccentPercent60);
spItm->SetFormatInner(TSF_SecondRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent1, dblAccentPercent60);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent1, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent40);
spItm->SetFormatInner(TSF_SecondColStripeXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent1, dblAccentPercent20);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondColumnSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent1, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondColumnSubheadingXF, &_xf);

// thirdColumnSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent40);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent1, dblAccentPercent20);
spItm->SetFormatInner(TSF_ThirdColumnSubheadingXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent20);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleDark8///////////////////
void AddPivotStyleDark8(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_DARK_FROM + 7, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 8);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeLight1, dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeLight1, dblAccentPercent75);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeLight1, dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeLight1, dblAccentPercent75);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeDark1, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeDark1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeDark1, -dblAccentPercent55);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeDark1, -dblAccentPercent55);
spItm->SetFormatInner(TSF_SecondRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeDark1, -dblAccentPercent55);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeDark1, -dblAccentPercent55);
spItm->SetFormatInner(TSF_FirstColStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_SecondColStripeXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeDark1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// secondColumnSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeDark1, -dblAccentPercent75);
spItm->SetFormatInner(TSF_SecondColumnSubheadingXF, &_xf);

// thirdColumnSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_ThirdColumnSubheadingXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleDark7///////////////////
void AddPivotStyleDark7(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_DARK_FROM + 6, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 7);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, -dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, -dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent6);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent6, -dblAccentPercent50);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, -dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, -dblAccentPercent50);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent60);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent60);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent6, dblAccentPercent20);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent6, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondRowStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent6, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondColStripeXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent20);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent6, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent6, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, -dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, -dblAccentPercent50);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent6, -dblAccentPercent50);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, -dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, -dblAccentPercent50);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent6, -dblAccentPercent50);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent40);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent6, dblAccentPercent20);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleDark6///////////////////
void AddPivotStyleDark6(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_DARK_FROM + 5, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 6);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, -dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, -dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent5);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent5, -dblAccentPercent50);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, -dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, -dblAccentPercent50);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent60);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent60);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent5, dblAccentPercent20);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent5, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondRowStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent5, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondColStripeXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent20);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent5, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent5, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, -dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, -dblAccentPercent50);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent5, -dblAccentPercent50);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, -dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, -dblAccentPercent50);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent5, -dblAccentPercent50);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent40);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent5, dblAccentPercent20);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleDark5///////////////////
void AddPivotStyleDark5(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_DARK_FROM + 4, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 5);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, -dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, -dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent4);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent4, -dblAccentPercent50);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, -dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, -dblAccentPercent50);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent60);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent60);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent4, dblAccentPercent20);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent4, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondRowStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent4, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondColStripeXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent20);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent4, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent4, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, -dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, -dblAccentPercent50);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent4, -dblAccentPercent50);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, -dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, -dblAccentPercent50);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent4, -dblAccentPercent50);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent40);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent4, dblAccentPercent20);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleDark4///////////////////
void AddPivotStyleDark4(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_DARK_FROM + 3, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 4);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, -dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, -dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent3);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent3, -dblAccentPercent50);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, -dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, -dblAccentPercent50);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent60);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent60);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent3, dblAccentPercent20);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent3, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondRowStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent3, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondColStripeXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent20);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent3, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent3, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, -dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, -dblAccentPercent50);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent3, -dblAccentPercent50);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, -dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, -dblAccentPercent50);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent3, -dblAccentPercent50);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent40);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent3, dblAccentPercent20);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleDark3///////////////////
void AddPivotStyleDark3(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_DARK_FROM + 2, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 3);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, -dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, -dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent2);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent2, -dblAccentPercent50);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, -dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, -dblAccentPercent50);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent60);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent60);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent2, dblAccentPercent20);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent2, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondRowStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent2, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondColStripeXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent20);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent2, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent2, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, -dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, -dblAccentPercent50);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent2, -dblAccentPercent50);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, -dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, -dblAccentPercent50);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent2, -dblAccentPercent50);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent40);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent2, dblAccentPercent20);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleDark2///////////////////
void AddPivotStyleDark2(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_DARK_FROM + 1, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 2);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, -dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, -dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent1);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent1, -dblAccentPercent50);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, -dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, -dblAccentPercent50);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent60);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent60);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeAccent1, dblAccentPercent20);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeAccent1, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondRowStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent1, dblAccentPercent20);
spItm->SetFormatInner(TSF_SecondColStripeXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent20);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeAccent1, dblAccentPercent60);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeAccent1, dblAccentPercent60);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, -dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, -dblAccentPercent50);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent1, -dblAccentPercent50);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, -dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, -dblAccentPercent50);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent1, -dblAccentPercent50);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent40);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeAccent1, dblAccentPercent20);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////PivotStyleDark1///////////////////
void AddPivotStyleDark1(KCoreTableStyles* pHolder, STYLE_VEC *pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(pHolder, BTSI_PIVOT_DARK_FROM + 0, TST_PIVOT_STYLE);
ks_wstring wstrName(_STR_PIVOT_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 1);
spItm->SetNameInner(wstrName.c_str());

KTableXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeLight1, dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeLight1, dblAccentPercent50);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeLight1, dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent65);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent65);
spItm->SetFormatInner(TSF_TotalRowXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrLeft, ettThemeDark1, -dblAccentPercent85);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrRight, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_SecondRowStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeDark1, -dblAccentPercent65);
spItm->SetFormatInner(TSF_SecondColStripeXF, &_xf);

// firstSubtotalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent85);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent85);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrTop, ettThemeDark1, -dblAccentPercent65);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEMEANDTINT(clrBottom, ettThemeDark1, -dblAccentPercent65);
spItm->SetFormatInner(TSF_FirstSubtotalRowXF, &_xf);

// firstRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormatInner(TSF_FirstRowSubheadingXF, &_xf);

// secondRowSubheadingXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeLight1, dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeLight1, dblAccentPercent50);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_SecondRowSubheadingXF, &_xf);

// pageFieldLabelsXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeLight1, dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeLight1, dblAccentPercent50);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeLight1, dblAccentPercent50);
spItm->SetFormatInner(TSF_PageFieldLabelsXF, &_xf);

// pageFieldValuesXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent75);
SET_INNERBORDER_TYPE(dgHorz, blsThin);
SET_INNERBORDER_CLR_THEMEANDTINT(clrHorz, ettThemeDark1, -dblAccentPercent85);
spItm->SetFormatInner(TSF_PageFieldValuesXF, &_xf);

pStyVec->push_back(spItm);
}


