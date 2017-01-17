/***************************************************************
 * Name:      RLE_BYTERUN_wxwidgetsMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Michał Kostecki (kostek888888@gmail.com)
 * Created:   2017-01-05
 * Copyright: Michał Kostecki (m.me/michal.kostecki.1)
 * License:
 **************************************************************/

#include "RLE_BYTERUN_wxwidgetsMain.h"
#include <wx/msgdlg.h>
#include <wx/filedlg.h>

#include "background_code.h"

//(*InternalHeaders(RLE_BYTERUN_wxwidgetsFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(RLE_BYTERUN_wxwidgetsFrame)
const long RLE_BYTERUN_wxwidgetsFrame::ID_STATICTEXT1 = wxNewId();
const long RLE_BYTERUN_wxwidgetsFrame::ID_BUTTON1 = wxNewId();
const long RLE_BYTERUN_wxwidgetsFrame::ID_STATICTEXT9 = wxNewId();
const long RLE_BYTERUN_wxwidgetsFrame::ID_TEXTCTRL1 = wxNewId();
const long RLE_BYTERUN_wxwidgetsFrame::ID_STATICTEXT5 = wxNewId();
const long RLE_BYTERUN_wxwidgetsFrame::ID_BUTTON2 = wxNewId();
const long RLE_BYTERUN_wxwidgetsFrame::ID_BUTTON3 = wxNewId();
const long RLE_BYTERUN_wxwidgetsFrame::ID_STATICTEXT2 = wxNewId();
const long RLE_BYTERUN_wxwidgetsFrame::ID_BUTTON6 = wxNewId();
const long RLE_BYTERUN_wxwidgetsFrame::ID_BUTTON7 = wxNewId();
const long RLE_BYTERUN_wxwidgetsFrame::ID_STATICTEXT8 = wxNewId();
const long RLE_BYTERUN_wxwidgetsFrame::ID_BUTTON5 = wxNewId();
const long RLE_BYTERUN_wxwidgetsFrame::ID_BUTTON4 = wxNewId();
const long RLE_BYTERUN_wxwidgetsFrame::ID_STATICTEXT3 = wxNewId();
const long RLE_BYTERUN_wxwidgetsFrame::ID_TEXTCTRL2 = wxNewId();
const long RLE_BYTERUN_wxwidgetsFrame::ID_STATICTEXT6 = wxNewId();
const long RLE_BYTERUN_wxwidgetsFrame::ID_STATICTEXT7 = wxNewId();
const long RLE_BYTERUN_wxwidgetsFrame::ID_STATICTEXT4 = wxNewId();
//*)

BEGIN_EVENT_TABLE(RLE_BYTERUN_wxwidgetsFrame,wxFrame)
    //(*EventTable(RLE_BYTERUN_wxwidgetsFrame)
    //*)
END_EVENT_TABLE()

RLE_BYTERUN_wxwidgetsFrame::RLE_BYTERUN_wxwidgetsFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(RLE_BYTERUN_wxwidgetsFrame)
    wxFlexGridSizer* FlexGridSizer4;
    wxFlexGridSizer* FlexGridSizer10;
    wxFlexGridSizer* FlexGridSizer3;
    wxFlexGridSizer* FlexGridSizer5;
    wxFlexGridSizer* FlexGridSizer9;
    wxFlexGridSizer* FlexGridSizer2;
    wxFlexGridSizer* FlexGridSizer7;
    wxFlexGridSizer* FlexGridSizer8;
    wxFlexGridSizer* FlexGridSizer13;
    wxFlexGridSizer* FlexGridSizer12;
    wxFlexGridSizer* FlexGridSizer6;
    wxFlexGridSizer* FlexGridSizer1;
    wxFlexGridSizer* FlexGridSizer11;

    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    SetBackgroundColour(wxColour(255,255,255));
    FlexGridSizer1 = new wxFlexGridSizer(10, 0, 0, 0);
    FlexGridSizer1->AddGrowableCol(0);
    FlexGridSizer1->AddGrowableRow(1);
    FlexGridSizer1->AddGrowableRow(8);
    FlexGridSizer2 = new wxFlexGridSizer(1, 2, 0, 0);
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Type text below or load from file"), wxDefaultPosition, wxSize(183,13), wxALIGN_CENTRE, _T("ID_STATICTEXT1"));
    FlexGridSizer2->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button1 = new wxButton(this, ID_BUTTON1, _("Load"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    FlexGridSizer2->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(FlexGridSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer5 = new wxFlexGridSizer(2, 0, 0, 0);
    FlexGridSizer5->AddGrowableCol(0);
    FlexGridSizer5->AddGrowableRow(0);
    FlexGridSizer5->AddGrowableRow(1);
    StaticText9 = new wxStaticText(this, ID_STATICTEXT9, _("Input"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT9"));
    FlexGridSizer5->Add(StaticText9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxSize(268,85), wxTE_MULTILINE|wxFULL_REPAINT_ON_RESIZE, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    FlexGridSizer5->Add(TextCtrl1, 1, wxALL|wxEXPAND, 5);
    FlexGridSizer1->Add(FlexGridSizer5, 0, wxALL|wxEXPAND, 5);
    FlexGridSizer10 = new wxFlexGridSizer(0, 1, 0, 0);
    StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("Compress"), wxDefaultPosition, wxSize(57,17), wxALIGN_CENTRE, _T("ID_STATICTEXT5"));
    FlexGridSizer10->Add(StaticText5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(FlexGridSizer10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer3 = new wxFlexGridSizer(0, 2, 0, 0);
    Button2 = new wxButton(this, ID_BUTTON2, _("RLE"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    FlexGridSizer3->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button3 = new wxButton(this, ID_BUTTON3, _("BYTERUN"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
    FlexGridSizer3->Add(Button3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(FlexGridSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer4 = new wxFlexGridSizer(0, 1, 0, 0);
    StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Decompress"), wxDefaultPosition, wxSize(67,18), wxALIGN_CENTRE, _T("ID_STATICTEXT2"));
    FlexGridSizer4->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(FlexGridSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer9 = new wxFlexGridSizer(0, 2, 0, 0);
    Button6 = new wxButton(this, ID_BUTTON6, _("Dec RLE"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON6"));
    FlexGridSizer9->Add(Button6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button7 = new wxButton(this, ID_BUTTON7, _("Dec BYTERUN"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON7"));
    FlexGridSizer9->Add(Button7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(FlexGridSizer9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer7 = new wxFlexGridSizer(0, 1, 0, 0);
    StaticText8 = new wxStaticText(this, ID_STATICTEXT8, _("Swap output with input"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT8"));
    FlexGridSizer7->Add(StaticText8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(FlexGridSizer7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer13 = new wxFlexGridSizer(0, 2, 0, 0);
    Button5 = new wxButton(this, ID_BUTTON5, _("And clean output"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON5"));
    FlexGridSizer13->Add(Button5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button4 = new wxButton(this, ID_BUTTON4, _("Swap only"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
    FlexGridSizer13->Add(Button4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(FlexGridSizer13, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer6 = new wxFlexGridSizer(2, 0, 0, 0);
    FlexGridSizer6->AddGrowableCol(0);
    FlexGridSizer6->AddGrowableRow(0);
    FlexGridSizer6->AddGrowableRow(1);
    StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Output"), wxDefaultPosition, wxSize(60,16), wxALIGN_CENTRE, _T("ID_STATICTEXT3"));
    FlexGridSizer6->Add(StaticText3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl2 = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxDefaultPosition, wxSize(246,89), wxTE_MULTILINE|wxTE_READONLY|wxFULL_REPAINT_ON_RESIZE, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    FlexGridSizer6->Add(TextCtrl2, 1, wxALL|wxEXPAND, 5);
    FlexGridSizer1->Add(FlexGridSizer6, 1, wxALL|wxEXPAND, 5);
    FlexGridSizer8 = new wxFlexGridSizer(1, 3, 0, 0);
    FlexGridSizer8->AddGrowableCol(0);
    FlexGridSizer8->AddGrowableCol(1);
    FlexGridSizer8->AddGrowableCol(2);
    FlexGridSizer8->AddGrowableRow(0);
    FlexGridSizer11 = new wxFlexGridSizer(2, 1, 0, 0);
    FlexGridSizer11->AddGrowableCol(0);
    FlexGridSizer11->AddGrowableRow(0);
    FlexGridSizer11->AddGrowableRow(1);
    StaticText6 = new wxStaticText(this, ID_STATICTEXT6, _("Michal Kostecki"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT6"));
    FlexGridSizer11->Add(StaticText6, 1, wxALL, 5);
    StaticText7 = new wxStaticText(this, ID_STATICTEXT7, _("Wojciech Klusek"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT7"));
    FlexGridSizer11->Add(StaticText7, 1, wxALL, 5);
    FlexGridSizer8->Add(FlexGridSizer11, 1, wxALL|wxEXPAND, 5);
    FlexGridSizer8->Add(99,51,1, wxALL, 5);
    FlexGridSizer12 = new wxFlexGridSizer(2, 1, 0, 0);
    FlexGridSizer12->AddGrowableCol(0);
    FlexGridSizer12->AddGrowableRow(0);
    FlexGridSizer12->AddGrowableRow(1);
    FlexGridSizer12->Add(-1,-1,1, wxALL|wxEXPAND, 5);
    StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("\'Q1 2017"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT, _T("ID_STATICTEXT4"));
    FlexGridSizer12->Add(StaticText4, 1, wxALL|wxEXPAND, 5);
    FlexGridSizer8->Add(FlexGridSizer12, 1, wxALL|wxEXPAND, 5);
    FlexGridSizer1->Add(FlexGridSizer8, 1, wxALL|wxEXPAND, 5);
    SetSizer(FlexGridSizer1);
    FlexGridSizer1->Fit(this);
    FlexGridSizer1->SetSizeHints(this);

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&RLE_BYTERUN_wxwidgetsFrame::OnButton1Click);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&RLE_BYTERUN_wxwidgetsFrame::OnButton2Click);
    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&RLE_BYTERUN_wxwidgetsFrame::OnButton3Click);
    Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&RLE_BYTERUN_wxwidgetsFrame::OnButton6Click);
    Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&RLE_BYTERUN_wxwidgetsFrame::OnButton7Click);
    Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&RLE_BYTERUN_wxwidgetsFrame::OnButton5Click);
    Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&RLE_BYTERUN_wxwidgetsFrame::OnButton4Click);
    //*)
}

RLE_BYTERUN_wxwidgetsFrame::~RLE_BYTERUN_wxwidgetsFrame()
{
    //(*Destroy(RLE_BYTERUN_wxwidgetsFrame)
    //*)
}

void RLE_BYTERUN_wxwidgetsFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void RLE_BYTERUN_wxwidgetsFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void RLE_BYTERUN_wxwidgetsFrame::OnTextCtrl1Text(wxCommandEvent& event)
{
}

void RLE_BYTERUN_wxwidgetsFrame::OnButton2Click(wxCommandEvent& event)
{
    std::string textinput, compressed;
    if(TextCtrl1->GetValue() != wxString(wxT("")))
    {
        textinput = TextCtrl1->GetValue().ToStdString();

        compressed = compressRLE(textinput);

        wxString to_show(compressed);

        TextCtrl2->SetValue(to_show);
    }
}

void RLE_BYTERUN_wxwidgetsFrame::OnButton3Click(wxCommandEvent& event)
{
    std::string textinput, compressed;
    if(TextCtrl1->GetValue() != wxString(wxT("")))
    {
        textinput = TextCtrl1->GetValue().ToStdString();

        compressed = compressBYTERUN(textinput);

        wxString to_show(compressed);

        TextCtrl2->SetValue(to_show);
    }
}

void RLE_BYTERUN_wxwidgetsFrame::OnButton6Click(wxCommandEvent& event)
{
    std::string textinput, compressed;
    if(TextCtrl1->GetValue() != wxString(wxT("")))
    {
        textinput = TextCtrl1->GetValue().ToStdString();

        compressed = decompressRLE(textinput);

        wxString to_show(compressed);

        TextCtrl2->SetValue(to_show);
    }
}

void RLE_BYTERUN_wxwidgetsFrame::OnButton7Click(wxCommandEvent& event)
{
    std::string textinput, compressed;
    if(TextCtrl1->GetValue() != wxString(wxT("")))
    {
        textinput = TextCtrl1->GetValue().ToStdString();

        compressed = decompressBYTERUN(textinput);

        wxString to_show(compressed);

        TextCtrl2->SetValue(to_show);
    }
}

void RLE_BYTERUN_wxwidgetsFrame::OnButton4Click(wxCommandEvent& event)
{
    if(TextCtrl2->GetValue() != wxString(wxT("")))
    {
        wxString buffer = TextCtrl2->GetValue();
        TextCtrl2->SetValue(TextCtrl1->GetValue());
        TextCtrl1->SetValue(buffer);
    }
}

void RLE_BYTERUN_wxwidgetsFrame::OnButton5Click(wxCommandEvent& event)
{
    if(TextCtrl2->GetValue() != wxString(wxT("")))
    {
        TextCtrl1->SetValue(TextCtrl2->GetValue());
        TextCtrl2->SetValue(wxString(wxT("")));
    }
}

void RLE_BYTERUN_wxwidgetsFrame::OnButton1Click(wxCommandEvent& event)
{
    wxString filename = wxFileSelector("Choose file",
        "", "", ".txt",
        "*.txt|*.txt|All files|*.*",
        wxFD_OPEN | wxFD_FILE_MUST_EXIST, this);

    if(filename != wxString(wxT("")))
    {
        TextCtrl1->LoadFile(filename);
    }
}
