#include "Notifikaattori.h"

Notifikaattori::Notifikaattori()
{
    //cout << "Olen defaultti konstruktori" << endl;
}

Notifikaattori::~Notifikaattori()
{
    //cout << "Olen defaultti destruktori" << endl;
}

void Notifikaattori::lisaa(Seuraaja *uusiSeur)
{
    uusiSeur->next = seuraajat;
    seuraajat = uusiSeur;
}

void Notifikaattori::poista(Seuraaja *poistSeur)
{
    cout << "Notifikaattori poistaa seuraajan " << poistSeur->getNimi() << endl;
    Seuraaja *alku = seuraajat;
    if(seuraajat == poistSeur) {
        seuraajat = seuraajat->next;
        return;
    }
    while (alku != nullptr)
    {
            if (alku->next == poistSeur)
            {
                alku->next = alku->next->next;
                return;
            }
        alku = alku->next;
    }
}

void Notifikaattori::tulosta()
{
    cout << "Notifikaattorin seuraajat:" << endl;
    Seuraaja *alku = seuraajat;
    while (alku != nullptr)
    {
        cout << "Seuraaja: " << alku->getNimi() << endl;
        alku = alku->next;
    }
}

void Notifikaattori::postita(string viesti) 
{
    cout << "Notifikaattori postaa viestin: " << viesti << endl;
    Seuraaja *alku = seuraajat;
    while (alku != nullptr)
    {
        alku->paivitys(viesti);
        alku = alku->next;
    }
}
