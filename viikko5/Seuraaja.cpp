#include "Seuraaja.h"

Seuraaja::Seuraaja(string n)
{
    nimi = n;
    cout << "Luodaan seuraaja " << nimi << endl;
}

Seuraaja::~Seuraaja()
{

}

void Seuraaja::paivitys(string viesti)
{
    cout << "Seuraaja " << nimi << " sai viestin: " << viesti << endl;
}

string Seuraaja::getNimi()
{
    return nimi;
}