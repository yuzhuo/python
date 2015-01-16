

///////////////////TableStyleMedium28///////////////////
void AddTableStyleMedium28(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_MEDIUM_FROM + 27);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 28);
spItm->SetName(wstrName.c_str());

KXF _xf;
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
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent6);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent40);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent40);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium27///////////////////
void AddTableStyleMedium27(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_MEDIUM_FROM + 26);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 27);
spItm->SetName(wstrName.c_str());

KXF _xf;
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
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent5);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent40);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent40);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium26///////////////////
void AddTableStyleMedium26(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_MEDIUM_FROM + 25);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 26);
spItm->SetName(wstrName.c_str());

KXF _xf;
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
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent4);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent40);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent40);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium25///////////////////
void AddTableStyleMedium25(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_MEDIUM_FROM + 24);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 25);
spItm->SetName(wstrName.c_str());

KXF _xf;
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
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent3);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent40);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent40);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium24///////////////////
void AddTableStyleMedium24(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_MEDIUM_FROM + 23);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 24);
spItm->SetName(wstrName.c_str());

KXF _xf;
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
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent2);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent40);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent40);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium23///////////////////
void AddTableStyleMedium23(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_MEDIUM_FROM + 22);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 23);
spItm->SetName(wstrName.c_str());

KXF _xf;
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
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent1);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent40);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent40);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium22///////////////////
void AddTableStyleMedium22(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_MEDIUM_FROM + 21);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 22);
spItm->SetName(wstrName.c_str());

KXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -0.14999847407452621);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -0.14999847407452621);
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeLight1);
SET_BORDER_TYPE(dgRight, blsThin);
SET_BORDER_CLR_THEME(clrRight, ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent65);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent65);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent65);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent65);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium21///////////////////
void AddTableStyleMedium21(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_MEDIUM_FROM + 20);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 21);
spItm->SetName(wstrName.c_str());

KXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent6);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent6);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent6);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent6);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent6);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent6);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -0.14999847407452621);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -0.14999847407452621);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -0.14999847407452621);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -0.14999847407452621);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium20///////////////////
void AddTableStyleMedium20(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_MEDIUM_FROM + 19);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 20);
spItm->SetName(wstrName.c_str());

KXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent5);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent5);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent5);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent5);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent5);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent5);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -0.14999847407452621);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -0.14999847407452621);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -0.14999847407452621);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -0.14999847407452621);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium19///////////////////
void AddTableStyleMedium19(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_MEDIUM_FROM + 18);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 19);
spItm->SetName(wstrName.c_str());

KXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent4);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent4);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent4);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent4);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent4);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent4);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -0.14999847407452621);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -0.14999847407452621);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -0.14999847407452621);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -0.14999847407452621);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium18///////////////////
void AddTableStyleMedium18(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_MEDIUM_FROM + 17);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 18);
spItm->SetName(wstrName.c_str());

KXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent3);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent3);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent3);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent3);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent3);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent3);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -0.14999847407452621);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -0.14999847407452621);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -0.14999847407452621);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -0.14999847407452621);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium17///////////////////
void AddTableStyleMedium17(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_MEDIUM_FROM + 16);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 17);
spItm->SetName(wstrName.c_str());

KXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent2);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent2);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent2);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent2);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent2);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent2);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -0.14999847407452621);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -0.14999847407452621);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -0.14999847407452621);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -0.14999847407452621);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium16///////////////////
void AddTableStyleMedium16(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_MEDIUM_FROM + 15);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 16);
spItm->SetName(wstrName.c_str());

KXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -0.14999847407452621);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -0.14999847407452621);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -0.14999847407452621);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -0.14999847407452621);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium15///////////////////
void AddTableStyleMedium15(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_MEDIUM_FROM + 14);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 15);
spItm->SetName(wstrName.c_str());

KXF _xf;
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
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -0.14999847407452621);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -0.14999847407452621);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -0.14999847407452621);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -0.14999847407452621);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium14///////////////////
void AddTableStyleMedium14(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_MEDIUM_FROM + 13);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 14);
spItm->SetName(wstrName.c_str());

KXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent20);
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent6);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent6);
SET_BORDER_TYPE(dgBottom, blsThick);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent6);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent6);
SET_BORDER_TYPE(dgTop, blsThick);
SET_BORDER_CLR_THEME(clrTop, ettThemeDark1);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent6);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent6);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent6);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent6);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent40);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent40);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium13///////////////////
void AddTableStyleMedium13(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_MEDIUM_FROM + 12);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 13);
spItm->SetName(wstrName.c_str());

KXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent20);
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent5);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent5);
SET_BORDER_TYPE(dgBottom, blsThick);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent5);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent5);
SET_BORDER_TYPE(dgTop, blsThick);
SET_BORDER_CLR_THEME(clrTop, ettThemeDark1);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent5);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent5);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent5);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent5);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent40);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent40);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium12///////////////////
void AddTableStyleMedium12(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_MEDIUM_FROM + 11);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 12);
spItm->SetName(wstrName.c_str());

KXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent20);
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent4);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent4);
SET_BORDER_TYPE(dgBottom, blsThick);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent4);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent4);
SET_BORDER_TYPE(dgTop, blsThick);
SET_BORDER_CLR_THEME(clrTop, ettThemeDark1);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent4);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent4);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent4);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent4);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent40);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent40);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium11///////////////////
void AddTableStyleMedium11(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_MEDIUM_FROM + 10);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 11);
spItm->SetName(wstrName.c_str());

KXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent20);
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent3);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent3);
SET_BORDER_TYPE(dgBottom, blsThick);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent3);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent3);
SET_BORDER_TYPE(dgTop, blsThick);
SET_BORDER_CLR_THEME(clrTop, ettThemeDark1);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent3);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent3);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent3);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent3);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent40);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent40);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium10///////////////////
void AddTableStyleMedium10(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_MEDIUM_FROM + 9);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 10);
spItm->SetName(wstrName.c_str());

KXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent20);
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent2);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent2);
SET_BORDER_TYPE(dgBottom, blsThick);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent2);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent2);
SET_BORDER_TYPE(dgTop, blsThick);
SET_BORDER_CLR_THEME(clrTop, ettThemeDark1);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent2);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent2);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent2);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent2);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent40);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent40);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium9///////////////////
void AddTableStyleMedium9(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_MEDIUM_FROM + 8);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 9);
spItm->SetName(wstrName.c_str());

KXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent20);
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent1);
SET_BORDER_TYPE(dgBottom, blsThick);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent1);
SET_BORDER_TYPE(dgTop, blsThick);
SET_BORDER_CLR_THEME(clrTop, ettThemeDark1);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent40);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent40);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium8///////////////////
void AddTableStyleMedium8(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_MEDIUM_FROM + 7);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 8);
spItm->SetName(wstrName.c_str());

KXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -0.14999847407452621);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -0.14999847407452621);
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThick);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsThick);
SET_BORDER_CLR_THEME(clrTop, ettThemeDark1);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent65);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent65);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent65);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent65);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium7///////////////////
void AddTableStyleMedium7(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_MEDIUM_FROM + 6);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 7);
spItm->SetName(wstrName.c_str());

KXF _xf;
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
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent6);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent6);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent6);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent20);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent20);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium6///////////////////
void AddTableStyleMedium6(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_MEDIUM_FROM + 5);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 6);
spItm->SetName(wstrName.c_str());

KXF _xf;
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
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent5);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent5);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent5);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent20);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent20);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium5///////////////////
void AddTableStyleMedium5(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_MEDIUM_FROM + 4);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 5);
spItm->SetName(wstrName.c_str());

KXF _xf;
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
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent4);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent4);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent4);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent20);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent20);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium4///////////////////
void AddTableStyleMedium4(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_MEDIUM_FROM + 3);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 4);
spItm->SetName(wstrName.c_str());

KXF _xf;
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
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent3);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent3);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent3);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent20);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent20);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium3///////////////////
void AddTableStyleMedium3(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_MEDIUM_FROM + 2);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 3);
spItm->SetName(wstrName.c_str());

KXF _xf;
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
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent2);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent2);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent2);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent20);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent20);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium2///////////////////
void AddTableStyleMedium2(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_MEDIUM_FROM + 1);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 2);
spItm->SetName(wstrName.c_str());

KXF _xf;
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
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent1);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent1);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent20);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent20);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleMedium1///////////////////
void AddTableStyleMedium1(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_MEDIUM_FROM + 0);
ks_wstring wstrName(_STR_TAB_STYLE_MEDIUM);
wstrName.AppendFormat(__X("%d"), 1);
spItm->SetName(wstrName.c_str());

KXF _xf;
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
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -0.14999847407452621);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -0.14999847407452621);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -0.14999847407452621);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -0.14999847407452621);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight21///////////////////
void AddTableStyleLight21(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_LIGHT_FROM + 20);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 21);
spItm->SetName(wstrName.c_str());

KXF _xf;
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
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent6);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent6);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent20);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent20);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight20///////////////////
void AddTableStyleLight20(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_LIGHT_FROM + 19);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 20);
spItm->SetName(wstrName.c_str());

KXF _xf;
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
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent5);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent5);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent20);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent20);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight19///////////////////
void AddTableStyleLight19(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_LIGHT_FROM + 18);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 19);
spItm->SetName(wstrName.c_str());

KXF _xf;
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
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent4);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent4);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent20);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent20);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight18///////////////////
void AddTableStyleLight18(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_LIGHT_FROM + 17);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 18);
spItm->SetName(wstrName.c_str());

KXF _xf;
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
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent3);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent3);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent20);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent20);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight17///////////////////
void AddTableStyleLight17(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_LIGHT_FROM + 16);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 17);
spItm->SetName(wstrName.c_str());

KXF _xf;
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
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent2);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent2);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent20);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent20);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight16///////////////////
void AddTableStyleLight16(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_LIGHT_FROM + 15);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 16);
spItm->SetName(wstrName.c_str());

KXF _xf;
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
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent1);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent1);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent20);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent20);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight15///////////////////
void AddTableStyleLight15(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_LIGHT_FROM + 14);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 15);
spItm->SetName(wstrName.c_str());

KXF _xf;
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
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -0.14999847407452621);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -0.14999847407452621);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -0.14999847407452621);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -0.14999847407452621);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight14 ///////////////////
void AddTableStyleLight14 (STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_LIGHT_FROM + 13);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 14);
spItm->SetName(wstrName.c_str());

KXF _xf;
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
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent6);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent6);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent6);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent6);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent6);
spItm->SetFormat(TSF_SecondRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent6);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent6);
spItm->SetFormat(TSF_SecondColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight13///////////////////
void AddTableStyleLight13(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_LIGHT_FROM + 12);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 13);
spItm->SetName(wstrName.c_str());

KXF _xf;
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
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent5);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent5);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent5);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent5);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent5);
spItm->SetFormat(TSF_SecondRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent5);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent5);
spItm->SetFormat(TSF_SecondColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight12///////////////////
void AddTableStyleLight12(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_LIGHT_FROM + 11);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 12);
spItm->SetName(wstrName.c_str());

KXF _xf;
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
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent4);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent4);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent4);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent4);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent4);
spItm->SetFormat(TSF_SecondRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent4);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent4);
spItm->SetFormat(TSF_SecondColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight11///////////////////
void AddTableStyleLight11(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_LIGHT_FROM + 10);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 11);
spItm->SetName(wstrName.c_str());

KXF _xf;
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
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent3);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent3);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent3);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent3);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent3);
spItm->SetFormat(TSF_SecondRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent3);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent3);
spItm->SetFormat(TSF_SecondColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight10///////////////////
void AddTableStyleLight10(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_LIGHT_FROM + 9);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 10);
spItm->SetName(wstrName.c_str());

KXF _xf;
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
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent2);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent2);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent2);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent2);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent2);
spItm->SetFormat(TSF_SecondRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent2);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent2);
spItm->SetFormat(TSF_SecondColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight9///////////////////
void AddTableStyleLight9(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_LIGHT_FROM + 8);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 9);
spItm->SetName(wstrName.c_str());

KXF _xf;
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
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent1);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent1);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent1);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent1);
spItm->SetFormat(TSF_SecondRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent1);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeAccent1);
spItm->SetFormat(TSF_SecondColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight8///////////////////
void AddTableStyleLight8(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_LIGHT_FROM + 7);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 8);
spItm->SetName(wstrName.c_str());

KXF _xf;
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
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// secondRowStripeXF
_xf.reset();
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
spItm->SetFormat(TSF_SecondRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeLight1);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

// secondColumnStripeXF
_xf.reset();
SET_BORDER_TYPE(dgLeft, blsThin);
SET_BORDER_CLR_THEME(clrLeft, ettThemeLight1);
spItm->SetFormat(TSF_SecondColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight7///////////////////
void AddTableStyleLight7(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_LIGHT_FROM + 6);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 7);
spItm->SetName(wstrName.c_str());

KXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent6, -dblAccentPercent75);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent6);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent6);
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent6, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent6);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent6, -dblAccentPercent75);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent6);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent6, -dblAccentPercent75);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent6, -dblAccentPercent75);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent20);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, dblAccentPercent20);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight6///////////////////
void AddTableStyleLight6(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_LIGHT_FROM + 5);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 6);
spItm->SetName(wstrName.c_str());

KXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent5, -dblAccentPercent75);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent5);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent5);
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent5, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent5);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent5, -dblAccentPercent75);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent5);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent5, -dblAccentPercent75);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent5, -dblAccentPercent75);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent20);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent20);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight5///////////////////
void AddTableStyleLight5(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_LIGHT_FROM + 4);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 5);
spItm->SetName(wstrName.c_str());

KXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent4, -dblAccentPercent75);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent4);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent4);
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent4, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent4);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent4, -dblAccentPercent75);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent4);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent4, -dblAccentPercent75);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent4, -dblAccentPercent75);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent20);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, dblAccentPercent20);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight4///////////////////
void AddTableStyleLight4(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_LIGHT_FROM + 3);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 4);
spItm->SetName(wstrName.c_str());

KXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent3, -dblAccentPercent75);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent3);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent3);
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent3, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent3);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent3, -dblAccentPercent75);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent3);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent3, -dblAccentPercent75);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent3, -dblAccentPercent75);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent20);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent20);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight3///////////////////
void AddTableStyleLight3(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_LIGHT_FROM + 2);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 3);
spItm->SetName(wstrName.c_str());

KXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent2, -dblAccentPercent75);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent2);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent2);
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent2, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent2);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent2, -dblAccentPercent75);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent2);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent2, -dblAccentPercent75);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent2, -dblAccentPercent75);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent20);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, dblAccentPercent20);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight2///////////////////
void AddTableStyleLight2(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_LIGHT_FROM + 1);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 2);
spItm->SetName(wstrName.c_str());

KXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent1, -dblAccentPercent75);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent1);
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent1, -dblAccentPercent75);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeAccent1);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent1, -dblAccentPercent75);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeAccent1);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent1, -dblAccentPercent75);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEMEANDTINT(ettThemeAccent1, -dblAccentPercent75);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent20);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent20);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleLight1///////////////////
void AddTableStyleLight1(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_LIGHT_FROM + 0);
ks_wstring wstrName(_STR_TAB_STYLE_LIGHT);
wstrName.AppendFormat(__X("%d"), 1);
spItm->SetName(wstrName.c_str());

KXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsThin);
SET_BORDER_CLR_THEME(clrBottom, ettThemeLight1);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsThin);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -0.14999847407452621);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -0.14999847407452621);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -0.14999847407452621);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -0.14999847407452621);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleDark11///////////////////
void AddTableStyleDark11(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_DARK_FROM + 10);
ks_wstring wstrName(_STR_TAB_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 11);
spItm->SetName(wstrName.c_str());

KXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent20);
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent6);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent6);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent40);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, dblAccentPercent40);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleDark10///////////////////
void AddTableStyleDark10(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_DARK_FROM + 9);
ks_wstring wstrName(_STR_TAB_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 10);
spItm->SetName(wstrName.c_str());

KXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent20);
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent4);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent4);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent40);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, dblAccentPercent40);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleDark9///////////////////
void AddTableStyleDark9(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_DARK_FROM + 8);
ks_wstring wstrName(_STR_TAB_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 9);
spItm->SetName(wstrName.c_str());

KXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent20);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent20);
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent2);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent2);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent40);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, dblAccentPercent40);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, dblAccentPercent40);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleDark8///////////////////
void AddTableStyleDark8(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_DARK_FROM + 7);
ks_wstring wstrName(_STR_TAB_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 8);
spItm->SetName(wstrName.c_str());

KXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -0.14999847407452621);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -0.14999847407452621);
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
SET_BORDER_TYPE(dgTop, blsDouble);
SET_BORDER_CLR_THEME(clrTop, ettThemeLight1);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeLight1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent65);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent65);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeDark1, -dblAccentPercent65);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeDark1, -dblAccentPercent65);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleDark7///////////////////
void AddTableStyleDark7(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_DARK_FROM + 6);
ks_wstring wstrName(_STR_TAB_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 7);
spItm->SetName(wstrName.c_str());

KXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent6);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent6);
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, -dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, -dblAccentPercent50);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeDark1);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, -dblAccentPercent75);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEME(clrRight, ettThemeDark1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, -dblAccentPercent75);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEME(clrLeft, ettThemeDark1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, -dblAccentPercent75);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent6, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent6, -dblAccentPercent75);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleDark6///////////////////
void AddTableStyleDark6(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_DARK_FROM + 5);
ks_wstring wstrName(_STR_TAB_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 6);
spItm->SetName(wstrName.c_str());

KXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent5);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent5);
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, -dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, -dblAccentPercent50);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeDark1);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, -dblAccentPercent75);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEME(clrRight, ettThemeDark1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, -dblAccentPercent75);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEME(clrLeft, ettThemeDark1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, -dblAccentPercent75);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent5, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent5, -dblAccentPercent75);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleDark5///////////////////
void AddTableStyleDark5(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_DARK_FROM + 4);
ks_wstring wstrName(_STR_TAB_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 5);
spItm->SetName(wstrName.c_str());

KXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent4);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent4);
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, -dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, -dblAccentPercent50);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeDark1);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, -dblAccentPercent75);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEME(clrRight, ettThemeDark1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, -dblAccentPercent75);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEME(clrLeft, ettThemeDark1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, -dblAccentPercent75);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent4, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent4, -dblAccentPercent75);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleDark4///////////////////
void AddTableStyleDark4(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_DARK_FROM + 3);
ks_wstring wstrName(_STR_TAB_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 4);
spItm->SetName(wstrName.c_str());

KXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent3);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent3);
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, -dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, -dblAccentPercent50);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeDark1);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, -dblAccentPercent75);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEME(clrRight, ettThemeDark1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, -dblAccentPercent75);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEME(clrLeft, ettThemeDark1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, -dblAccentPercent75);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent3, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent3, -dblAccentPercent75);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleDark3///////////////////
void AddTableStyleDark3(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_DARK_FROM + 2);
ks_wstring wstrName(_STR_TAB_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 3);
spItm->SetName(wstrName.c_str());

KXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent2);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent2);
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, -dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, -dblAccentPercent50);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeDark1);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, -dblAccentPercent75);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEME(clrRight, ettThemeDark1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, -dblAccentPercent75);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEME(clrLeft, ettThemeDark1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, -dblAccentPercent75);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent2, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent2, -dblAccentPercent75);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleDark2///////////////////
void AddTableStyleDark2(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_DARK_FROM + 1);
ks_wstring wstrName(_STR_TAB_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 2);
spItm->SetName(wstrName.c_str());

KXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeAccent1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeAccent1);
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, -dblAccentPercent50);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, -dblAccentPercent50);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeDark1);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, -dblAccentPercent75);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEME(clrRight, ettThemeDark1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, -dblAccentPercent75);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEME(clrLeft, ettThemeDark1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, -dblAccentPercent75);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeAccent1, -dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeAccent1, -dblAccentPercent75);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}

///////////////////TableStyleDark1///////////////////
void AddTableStyleDark1(STYLE_VEC* pStyVec)
{
ks_stdptr<KCoreTableStyle> spItm;
spItm.attach(RTS_NEW(KCoreTableStyle, pStyVec));
spItm->Init(BSI_DARK_FROM + 0);
ks_wstring wstrName(_STR_TAB_STYLE_DARK);
wstrName.AppendFormat(__X("%d"), 1);
spItm->SetName(wstrName.c_str());

KXF _xf;
EtColor clr;

// wholeTableXF
_xf.reset();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeLight1, dblAccentPercent55);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeLight1, dblAccentPercent55);
spItm->SetFormat(TSF_WholeTableXF, &_xf);

// headerRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEME(Fore, ettThemeLight1);
SET_PATTERNFILL_CLR_THEME(Back, ettThemeLight1);
SET_BORDER_TYPE(dgBottom, blsMedium);
SET_BORDER_CLR_THEME(clrBottom, ettThemeDark1);
spItm->SetFormat(TSF_HeaderRowXF, &_xf);

// totalRowXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeLight1, 0.14999847407452621);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeLight1, 0.14999847407452621);
SET_BORDER_TYPE(dgTop, blsMedium);
SET_BORDER_CLR_THEME(clrTop, ettThemeDark1);
spItm->SetFormat(TSF_TotalRowXF, &_xf);

// firstColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeLight1, dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeLight1, dblAccentPercent75);
SET_BORDER_TYPE(dgRight, blsMedium);
SET_BORDER_CLR_THEME(clrRight, ettThemeDark1);
spItm->SetFormat(TSF_FirstColXF, &_xf);

// lastColumnXF
_xf.reset();
SET_FONT_BOLD();
SET_FONT_CLR_THEME(ettThemeDark1);
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeLight1, dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeLight1, dblAccentPercent75);
SET_BORDER_TYPE(dgLeft, blsMedium);
SET_BORDER_CLR_THEME(clrLeft, ettThemeDark1);
spItm->SetFormat(TSF_LastColXF, &_xf);

// firstRowStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeLight1, dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeLight1, dblAccentPercent75);
spItm->SetFormat(TSF_FirstRowStripeXF, &_xf);

// firstColumnStripeXF
_xf.reset();
SET_FILL_TYPE(eftPatternSolid);
SET_PATTERNFILL_CLR_THEMEANDTINT(Fore, ettThemeLight1, dblAccentPercent75);
SET_PATTERNFILL_CLR_THEMEANDTINT(Back, ettThemeLight1, dblAccentPercent75);
spItm->SetFormat(TSF_FirstColStripeXF, &_xf);

pStyVec->push_back(spItm);
}


