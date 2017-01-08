/***************************************************************
 * Name:      RLE_BYTERUN_wxwidgetsApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Michał Kostecki (kostek888888@gmail.com)
 * Created:   2017-01-05
 * Copyright: Michał Kostecki (m.me/michal.kostecki.1)
 * License:
 **************************************************************/

#include "RLE_BYTERUN_wxwidgetsApp.h"

//(*AppHeaders
#include "RLE_BYTERUN_wxwidgetsMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(RLE_BYTERUN_wxwidgetsApp);

bool RLE_BYTERUN_wxwidgetsApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	RLE_BYTERUN_wxwidgetsFrame* Frame = new RLE_BYTERUN_wxwidgetsFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
