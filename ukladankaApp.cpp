/***************************************************************
 * Name:      ukladankaApp.cpp
 * Purpose:   Code for Application Class
 * Author:    PM ()
 * Created:   2023-12-13
 * Copyright: PM ()
 * License:
 **************************************************************/

#include "ukladankaApp.h"

//(*AppHeaders
#include "ukladankaMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(ukladankaApp);

bool ukladankaApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	ukladankaDialog Dlg(0);
    	SetTopWindow(&Dlg);
    	Dlg.ShowModal();
    	wxsOK = false;
    }
    //*)
    return wxsOK;

}
