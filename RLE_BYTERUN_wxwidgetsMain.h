/***************************************************************
 * Name:      RLE_BYTERUN_wxwidgetsMain.h
 * Purpose:   Defines Application Frame
 * Author:    Michał Kostecki (kostek888888@gmail.com)
 * Created:   2017-01-05
 * Copyright: Michał Kostecki (m.me/michal.kostecki.1)
 * License:
 **************************************************************/

#ifndef RLE_BYTERUN_WXWIDGETSMAIN_H
#define RLE_BYTERUN_WXWIDGETSMAIN_H

//(*Headers(RLE_BYTERUN_wxwidgetsFrame)
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/frame.h>
//*)

class RLE_BYTERUN_wxwidgetsFrame: public wxFrame
{
    public:

        RLE_BYTERUN_wxwidgetsFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~RLE_BYTERUN_wxwidgetsFrame();

    private:

        //(*Handlers(RLE_BYTERUN_wxwidgetsFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnTextCtrl1Text(wxCommandEvent& event);
        void OnButton2Click(wxCommandEvent& event);
        void OnButton3Click(wxCommandEvent& event);
        void OnButton6Click(wxCommandEvent& event);
        void OnButton7Click(wxCommandEvent& event);
        void OnButton4Click(wxCommandEvent& event);
        void OnButton5Click(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnButton8Click(wxCommandEvent& event);
        void OnButton9Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(RLE_BYTERUN_wxwidgetsFrame)
        static const long ID_STATICTEXT1;
        static const long ID_BUTTON1;
        static const long ID_STATICTEXT9;
        static const long ID_TEXTCTRL1;
        static const long ID_STATICTEXT5;
        static const long ID_BUTTON2;
        static const long ID_BUTTON3;
        static const long ID_STATICTEXT2;
        static const long ID_BUTTON6;
        static const long ID_BUTTON7;
        static const long ID_STATICTEXT8;
        static const long ID_BUTTON5;
        static const long ID_BUTTON4;
        static const long ID_STATICTEXT3;
        static const long ID_TEXTCTRL2;
        static const long ID_STATICTEXT10;
        static const long ID_BUTTON8;
        static const long ID_BUTTON9;
        static const long ID_STATICTEXT6;
        static const long ID_STATICTEXT7;
        static const long ID_STATICTEXT4;
        //*)

        //(*Declarations(RLE_BYTERUN_wxwidgetsFrame)
        wxStaticText* StaticText10;
        wxStaticText* StaticText9;
        wxButton* Button4;
        wxStaticText* StaticText2;
        wxButton* Button1;
        wxStaticText* StaticText6;
        wxStaticText* StaticText8;
        wxStaticText* StaticText1;
        wxStaticText* StaticText3;
        wxButton* Button2;
        wxButton* Button6;
        wxButton* Button5;
        wxButton* Button3;
        wxStaticText* StaticText5;
        wxStaticText* StaticText7;
        wxButton* Button7;
        wxButton* Button9;
        wxTextCtrl* TextCtrl2;
        wxTextCtrl* TextCtrl1;
        wxStaticText* StaticText4;
        wxButton* Button8;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // RLE_BYTERUN_WXWIDGETSMAIN_H
