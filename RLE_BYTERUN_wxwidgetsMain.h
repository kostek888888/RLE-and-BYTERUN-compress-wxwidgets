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
#include <wx/menu.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
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
        //*)

        //(*Identifiers(RLE_BYTERUN_wxwidgetsFrame)
        static const long ID_STATICTEXT1;
        static const long ID_BUTTON1;
        static const long ID_TEXTCTRL1;
        static const long ID_BUTTON2;
        static const long ID_BUTTON3;
        static const long ID_STATICTEXT2;
        static const long ID_STATICTEXT3;
        static const long ID_TEXTCTRL2;
        static const long ID_BUTTON4;
        static const long ID_BUTTON5;
        static const long ID_STATICTEXT4;
        static const long ID_MENUITEM1;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(RLE_BYTERUN_wxwidgetsFrame)
        wxButton* Button4;
        wxStaticText* StaticText2;
        wxButton* Button1;
        wxStaticText* StaticText1;
        wxStaticText* StaticText3;
        wxButton* Button2;
        wxButton* Button5;
        wxButton* Button3;
        wxStatusBar* StatusBar1;
        wxTextCtrl* TextCtrl2;
        wxTextCtrl* TextCtrl1;
        wxStaticText* StaticText4;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // RLE_BYTERUN_WXWIDGETSMAIN_H
