/***************************************************************
 * Name:      ukladankaMain.h
 * Purpose:   Defines Application Frame
 * Author:    PM ()
 * Created:   2023-12-13
 * Copyright: PM ()
 * License:
 **************************************************************/

#ifndef UKLADANKAMAIN_H
#define UKLADANKAMAIN_H

//(*Headers(ukladankaDialog)
#include <wx/bmpbuttn.h>
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/timer.h>
//*)

#include <map>

using namespace std;

class ukladankaDialog: public wxDialog
{
    public:

        ukladankaDialog(wxWindow* parent,wxWindowID id = -1);
        virtual ~ukladankaDialog();


        //void RoundTimer (wxTimerEvent& event);
        //void StartRound();

    private:

        //(*Handlers(ukladankaDialog)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnBitmapButton1Click(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnButton4Click(wxCommandEvent& event);
        void OnButton4Click1(wxCommandEvent& event);
        void OnButton2Click(wxCommandEvent& event);
        void OnButton5Click(wxCommandEvent& event);
        void OnButton5Click1(wxCommandEvent& event);
        void OnTimer1Trigger(wxTimerEvent& event);
        void OnButton3Click(wxCommandEvent& event);
        void OnTimer2Trigger(wxTimerEvent& event);
        //*)

        //(*Identifiers(ukladankaDialog)
        static const long ID_STATICTEXT1;
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_BUTTON3;
        static const long ID_STATICTEXT4;
        static const long ID_BUTTON5;
        static const long ID_BITMAPBUTTON1;
        static const long ID_STATICTEXT2;
        static const long ID_BUTTON4;
        static const long ID_STATICTEXT3;
        static const long ID_STATICTEXT5;
        static const long ID_TIMER1;
        static const long ID_TIMER2;
        //*)

        //(*Declarations(ukladankaDialog)
        wxBitmapButton* BitmapButton1;
        wxButton* Button1;
        wxButton* Button2;
        wxButton* Button3;
        wxButton* Button4;
        wxButton* Button5;
        wxStaticText* StaticText1;
        wxStaticText* StaticText2;
        wxStaticText* StaticText3;
        wxStaticText* StaticText4;
        wxStaticText* StaticText5;
        wxTimer Timer1;
        wxTimer Timer2;
        //*)

        DECLARE_EVENT_TABLE()

        wxBitmapButton* pola[16];

        wxBitmap rysunki[16];

        int permutacja[16];
        int poz_0;

        map<int, int> id2nr;

        void pomieszaj();

        bool CzyUlozona();

        int liczbaKrokow;
        bool zabronione=false;

        int liczbaPodpowiedzi;

        int licznik=0;




};

#endif // UKLADANKAMAIN_H
