/***************************************************************
 * Name:      ukladankaMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    PM ()
 * Created:   2023-12-13
 * Copyright: PM ()
 * License:
 **************************************************************/

#include "ukladankaMain.h"
#include <wx/msgdlg.h>

#include <cstdlib>

//(*InternalHeaders(ukladankaDialog)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)

#undef _
#define _(s) wxString::FromUTF8(s)

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

//(*IdInit(ukladankaDialog)
const long ukladankaDialog::ID_STATICTEXT1 = wxNewId();
const long ukladankaDialog::ID_BUTTON1 = wxNewId();
const long ukladankaDialog::ID_BUTTON2 = wxNewId();
const long ukladankaDialog::ID_BUTTON3 = wxNewId();
const long ukladankaDialog::ID_STATICTEXT4 = wxNewId();
const long ukladankaDialog::ID_BUTTON5 = wxNewId();
const long ukladankaDialog::ID_BITMAPBUTTON1 = wxNewId();
const long ukladankaDialog::ID_STATICTEXT2 = wxNewId();
const long ukladankaDialog::ID_BUTTON4 = wxNewId();
const long ukladankaDialog::ID_STATICTEXT3 = wxNewId();
const long ukladankaDialog::ID_STATICTEXT5 = wxNewId();
const long ukladankaDialog::ID_TIMER1 = wxNewId();
const long ukladankaDialog::ID_TIMER2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(ukladankaDialog,wxDialog)
    //(*EventTable(ukladankaDialog)
    //*)
END_EVENT_TABLE()

ukladankaDialog::ukladankaDialog(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(ukladankaDialog)
    wxBoxSizer* BoxSizer1;
    wxBoxSizer* BoxSizer2;
    wxBoxSizer* BoxSizer3;
    wxFlexGridSizer* FlexGridSizer1;
    wxFlexGridSizer* FlexGridSizer2;
    wxGridSizer* GridSizer1;

    Create(parent, wxID_ANY, _("Piętnastka"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
    FlexGridSizer1 = new wxFlexGridSizer(0, 1, 0, 0);
    FlexGridSizer1->AddGrowableCol(0);
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("15!"), wxDefaultPosition, wxSize(85,120), wxALIGN_CENTRE, _T("ID_STATICTEXT1"));
    wxFont StaticText1Font(72,wxFONTFAMILY_ROMAN,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Cooper Black"),wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    FlexGridSizer1->Add(StaticText1, 1, wxALL|wxEXPAND, 5);
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    Button1 = new wxButton(this, ID_BUTTON1, _("Klasyczny"), wxDefaultPosition, wxSize(134,58), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    Button1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOWTEXT));
    Button1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_HIGHLIGHTTEXT));
    wxFont Button1Font(10,wxFONTFAMILY_ROMAN,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Century"),wxFONTENCODING_DEFAULT);
    Button1->SetFont(Button1Font);
    BoxSizer1->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button2 = new wxButton(this, ID_BUTTON2, _("Losowy"), wxDefaultPosition, wxSize(134,58), 0, wxDefaultValidator, _T("ID_BUTTON2"));
    Button2->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNTEXT));
    Button2->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_HIGHLIGHTTEXT));
    wxFont Button2Font(10,wxFONTFAMILY_ROMAN,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Century"),wxFONTENCODING_DEFAULT);
    Button2->SetFont(Button2Font);
    BoxSizer1->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button3 = new wxButton(this, ID_BUTTON3, _("Matematyczny"), wxDefaultPosition, wxSize(134,58), 0, wxDefaultValidator, _T("ID_BUTTON3"));
    Button3->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOWTEXT));
    Button3->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_HIGHLIGHTTEXT));
    wxFont Button3Font(10,wxFONTFAMILY_ROMAN,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Century"),wxFONTENCODING_DEFAULT);
    Button3->SetFont(Button3Font);
    BoxSizer1->Add(Button3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(BoxSizer1, 1, wxALL|wxEXPAND, 5);
    BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("Liczba podpowiedzi: 0"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    BoxSizer3->Add(StaticText4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button5 = new wxButton(this, ID_BUTTON5, _("Podpowiedź"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON5"));
    Button5->SetBackgroundColour(wxColour(255,255,242));
    wxFont Button5Font(10,wxFONTFAMILY_ROMAN,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Century"),wxFONTENCODING_DEFAULT);
    Button5->SetFont(Button5Font);
    BoxSizer3->Add(Button5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(BoxSizer3, 1, wxALL|wxEXPAND, 5);
    GridSizer1 = new wxGridSizer(4, 4, 0, 0);
    BitmapButton1 = new wxBitmapButton(this, ID_BITMAPBUTTON1, wxBitmap(wxImage(_T("pudrowyroz.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
    GridSizer1->Add(BitmapButton1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    FlexGridSizer1->Add(GridSizer1, 1, wxALL|wxEXPAND, 5);
    BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
    StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("  Liczba kroków: 0"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    BoxSizer2->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button4 = new wxButton(this, ID_BUTTON4, _("Od nowa"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
    wxFont Button4Font(10,wxFONTFAMILY_ROMAN,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Century"),wxFONTENCODING_DEFAULT);
    Button4->SetFont(Button4Font);
    BoxSizer2->Add(Button4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer2 = new wxFlexGridSizer(0, 2, 0, 0);
    FlexGridSizer2->AddGrowableCol(0);
    FlexGridSizer2->AddGrowableRow(0);
    StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("0.00"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    FlexGridSizer2->Add(StaticText3, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    StaticText5 = new wxStaticText(this, ID_STATICTEXT5, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
    FlexGridSizer2->Add(StaticText5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer2->Add(FlexGridSizer2, 1, wxALL|wxEXPAND, 5);
    FlexGridSizer1->Add(BoxSizer2, 1, wxALL|wxEXPAND, 5);
    SetSizer(FlexGridSizer1);
    Timer1.SetOwner(this, ID_TIMER1);
    Timer2.SetOwner(this, ID_TIMER2);
    Timer2.Start(17, false);
    FlexGridSizer1->Fit(this);
    FlexGridSizer1->SetSizeHints(this);

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ukladankaDialog::OnButton1Click);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ukladankaDialog::OnButton2Click);
    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ukladankaDialog::OnButton3Click);
    Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ukladankaDialog::OnButton5Click1);
    Connect(ID_BITMAPBUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ukladankaDialog::OnBitmapButton1Click);
    Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ukladankaDialog::OnButton4Click1);
    Connect(ID_TIMER1,wxEVT_TIMER,(wxObjectEventFunction)&ukladankaDialog::OnTimer1Trigger);
    Connect(ID_TIMER2,wxEVT_TIMER,(wxObjectEventFunction)&ukladankaDialog::OnTimer2Trigger);
    //*)

    SetIcon(wxICON(aaaa));//ikonka

    srand(time(0));

    for (int i=0; i<16; i++) {
        wxString nazwa = "pudrowyroz";
        if (i>0) {
            nazwa << i;
        }
        nazwa = nazwa + ".jpg";
        rysunki[i] = wxBitmap(wxImage(nazwa));
    }


     for (int i=1; i<16; i++){
        pola[i] = new wxBitmapButton(this, wxNewId(), rysunki[0], wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
        Connect( pola[i]->GetId() ,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ukladankaDialog::OnBitmapButton1Click);
        GridSizer1->Add(pola[i], 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    }

    pola[0] = BitmapButton1;

    for (int i =0; i<16; i++) {
            id2nr [ pola[i]->GetId() ] = i;
    }



    pomieszaj();

    liczbaKrokow = 0;

    liczbaPodpowiedzi =0;


}

void ukladankaDialog::pomieszaj() {
    for (int i=1; i<16; i++)
        permutacja[i-1] = i;
    permutacja[15]=0;
    poz_0=15;
    for (int i = 0; i<5000; i++) {
            int w0 = poz_0 / 4;
            int k0 = poz_0 % 4;
            int k,w;
            do {
                if (rand() % 2 == 0) {
                    k = k0 + (rand()%2)*2-1;
                    w = w0;
                } else {
                    w = w0 + (rand()%2)*2-1;
                    k = k0;
                }
            } while ((k<0) || (k>3) || (w<0)|| (w>3));



            int poz = w*4+k;
            swap(permutacja[poz],permutacja[poz_0]);
            poz_0 = poz;

    }



    for (int i =0; i<16; i++) {
            pola[i]->SetBitmap(rysunki[ permutacja[i]]);
    }

}

ukladankaDialog::~ukladankaDialog()
{
    //(*Destroy(ukladankaDialog)
    //*)
}

void ukladankaDialog::OnQuit(wxCommandEvent& event)
{
    Close();
}

void ukladankaDialog::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

bool ukladankaDialog::CzyUlozona() {
    for (int i = 0; i < 15; ++i) {
        if (permutacja[i] != i + 1) {
            return false; // Jeśli znaleziono liczbę nie na swoim miejscu, zwraca false
        }
    }
    // Sprawdzenie, czy ostatni element (puste pole) jest na właściwej pozycji
    return permutacja[15] == 0; // Zwraca true, jeśli puste pole jest na ostatniej pozycji (15)
}



void ukladankaDialog::OnBitmapButton1Click(wxCommandEvent& event)
{
    if (zabronione)
        return;
    int nr = id2nr [event.GetId()];
    int w = nr / 4;
    int k = nr % 4;
    int w0 = poz_0 / 4;
    int k0 = poz_0 % 4;

    if((abs(w-w0)==1)&&(k==k0)||(w==w0)&&((abs(k-k0)==1))){
        wxString kom = _("obsługa: ");
    kom << nr;

    // Zamiana obrazków i aktualizacja permutacji oraz poz_0
        int temp = permutacja[poz_0];
        permutacja[poz_0] = permutacja[nr];
        permutacja[nr] = temp;

        pola[poz_0]->SetBitmap(rysunki[permutacja[poz_0]]);
        pola[nr]->SetBitmap(rysunki[permutacja[nr]]);

        poz_0 = nr; // Aktualizacja pozycji pustego pola


         liczbaKrokow++;

        wxString krokiString;
        krokiString.Printf(_("  Liczba kroków: %d"), liczbaKrokow);
        StaticText2->SetLabel(krokiString);

        // Sprawdzenie czy układanka jest ułożona po zamianie
        if (CzyUlozona()) {

            wxString gratulacje;
            gratulacje.Printf(_("GRATULACJE!!!\n\n\nUdało Ci się ułożyć układankę w %d krokach!\n\n\nUżyłeś %d podpowiedzi."),
                liczbaKrokow, liczbaPodpowiedzi);


            wxMessageDialog dialog(this, gratulacje, _("Sukces!"), wxOK | wxICON_NONE);

            dialog.ShowModal();


            pomieszaj();


    licznik = 0;
    Timer2.Start(Timer2.GetInterval());

    liczbaKrokow = 0;
    wxString krokiString;
    krokiString.Printf(_("  Liczba kroków: %d"), liczbaKrokow);
    StaticText2->SetLabel(krokiString);

    liczbaPodpowiedzi=0;
    wxString podpString;
    podpString.Printf(_("  Liczba podpowiedzi: %d"), liczbaPodpowiedzi);
    StaticText4->SetLabel(podpString);

    }


    }



}




void ukladankaDialog::OnButton1Click(wxCommandEvent& event)
{

     for (int i=0; i<16; i++) {
        wxString nazwa = "pudrowyroz";
        if (i>0) {
            nazwa << i;
        }
        nazwa = nazwa + ".jpg";
        rysunki[i] = wxBitmap(wxImage(nazwa));
    }

    pomieszaj();

    liczbaKrokow = 0;
    wxString krokiString;
    krokiString.Printf(_("  Liczba kroków: %d"), liczbaKrokow);
    StaticText2->SetLabel(krokiString);

    licznik = 0;
    Timer2.Start(Timer2.GetInterval());

     liczbaPodpowiedzi=0;
    wxString podpString;
    podpString.Printf(_("  Liczba podpowiedzi: %d"), liczbaPodpowiedzi);
    StaticText4->SetLabel(podpString);


}

void ukladankaDialog::OnButton4Click(wxCommandEvent& event)
{
    pomieszaj();

    liczbaKrokow = 0;
    wxString krokiString;
    krokiString.Printf(_("  Liczba kroków: %d"), liczbaKrokow);
    StaticText2->SetLabel(krokiString);


}


void ukladankaDialog::OnButton4Click1(wxCommandEvent& event)
{
        pomieszaj();

    liczbaKrokow = 0;
    wxString krokiString;
    krokiString.Printf(_("  Liczba kroków: %d"), liczbaKrokow);
    StaticText2->SetLabel(krokiString);

  licznik = 0;
    Timer2.Start(Timer2.GetInterval());

    liczbaPodpowiedzi=0;
    wxString podpString;
    podpString.Printf(_("  Liczba podpowiedzi: %d"), liczbaPodpowiedzi);
    StaticText4->SetLabel(podpString);


}

void ukladankaDialog::OnButton2Click(wxCommandEvent& event)
{
   wxString kategorie[] = { "gory_", "kwiaty_", "lovec_", "miod_", "rozniebo_", "motroz", "agama_","figa", "happy_" };


    wxString wybranaKategoria = kategorie[rand() % 9];


    for (int i=0; i<16; i++) {
        wxString nazwa = wybranaKategoria;
        if (i>0) {
            nazwa << i;
        }
        nazwa = nazwa + ".jpg";
        rysunki[i] = wxBitmap(wxImage(nazwa));


    pomieszaj();

    liczbaKrokow = 0;
    wxString krokiString;
    krokiString.Printf(_("  Liczba kroków: %d"), liczbaKrokow);
    StaticText2->SetLabel(krokiString);

    licznik = 0;
    Timer2.Start(Timer2.GetInterval());

    liczbaPodpowiedzi=0;
    wxString podpString;
    podpString.Printf(_("  Liczba podpowiedzi: %d"), liczbaPodpowiedzi);
    StaticText4->SetLabel(podpString);


}
}



void ukladankaDialog::OnButton5Click1(wxCommandEvent& event)
{
    for (int i =0; i<16; i++) {
            pola[i]->SetBitmap(rysunki[(i+1)%16]);
    }

    zabronione=true;

    Timer1.Start(3000,true);


    liczbaPodpowiedzi++;

    wxString podpString;
        podpString.Printf(_("  Liczba podpowiedzi: %d"), liczbaPodpowiedzi);
        StaticText4->SetLabel(podpString);

}






void ukladankaDialog::OnTimer1Trigger(wxTimerEvent& event)
{
    for (int i =0; i<16; i++) {
            pola[i]->SetBitmap(rysunki[permutacja[i]]);
    }
    zabronione=false;
}

void ukladankaDialog::OnButton3Click(wxCommandEvent& event)
{
    wxString kategorie[] = { "mat" };


    wxString wybranaKategoria = kategorie[rand() % 1];


    for (int i=0; i<16; i++) {
        wxString nazwa = wybranaKategoria;
        if (i>0) {
            nazwa << i;
        }
        nazwa = nazwa + ".jpg";
        rysunki[i] = wxBitmap(wxImage(nazwa));

        pomieszaj();



    licznik = 0;
    Timer2.Start(Timer2.GetInterval());

    liczbaKrokow = 0;
    wxString krokiString;
    krokiString.Printf(_("  Liczba kroków: %d"), liczbaKrokow);
    StaticText2->SetLabel(krokiString);

    liczbaPodpowiedzi=0;
    wxString podpString;
    podpString.Printf(_("  Liczba podpowiedzi: %d"), liczbaPodpowiedzi);
    StaticText4->SetLabel(podpString);

}



}

void ukladankaDialog::OnTimer2Trigger(wxTimerEvent& event)
    {
        licznik++;
        auto czas = (Timer2.GetInterval()*licznik)/544.0;
        wxString w = wxString::Format(wxT("%.1f"), czas);
        StaticText3->SetLabel(w);
    }


