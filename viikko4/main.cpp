#include <iostream>
#include "Pankkitili.h"
#include "Luottotili.h"
#include "Asiakas.h"

using namespace std;

int main()
{

    Asiakas Joni("Joni",1000);
    Joni.talletus(500);
    Joni.showSaldo();
    Joni.nosto(200);
    Joni.luotonNosto(900);
    Joni.showSaldo();
    cout << "------------------------" << endl;

    Asiakas Matti("Matti", 1000);
    cout << "------------------------" << endl;

    cout << "Joni siirtaa 100 euroa Matille." << endl;
    Joni.tiliSiirto(100, Matti);
    cout << "Jonin saldot siirron jalkeen: " << endl;
    Joni.showSaldo();
    cout << "Matin saldot siirron jalkeen: " << endl;
    Matti.showSaldo();

    return 0; 
}

