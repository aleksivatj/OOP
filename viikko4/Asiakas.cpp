#include "Asiakas.h"
#include <iostream>
using namespace std;

Asiakas::Asiakas()
{
    //cout << "Olen Asiakas default constructorissa!" <<  endl;
}

Asiakas::~Asiakas()
{

}

Asiakas::Asiakas(string name, double lr) : kayttotili(name), luottotili(name, lr)
{
    //cout << "Olen Asiakas parametriconstructorissa!" << endl;
    cout << "Asiakkuus luotu kayttajalle: " << name << endl;
    nimi = name;
}

bool Asiakas::talletus(double sum)
{
    cout << "Pankkitili: Talletus " << sum << " tehty" << endl;
    return kayttotili.deposit(sum);
}

bool Asiakas::nosto(double sum)
{
    cout << "Pankkitili: Nosto " << sum << " tehty" << endl;
    return kayttotili.withdraw(sum);
}

bool Asiakas::luotonMaksu(double sum)
{
    cout << "Luottotili: Velanmaksu " << sum << " tehty" << endl;
    return luottotili.deposit(sum);
}

bool Asiakas::luotonNosto(double sum)
{
    cout << "Luottotili: Velannosto " << sum << " tehty" << endl;
    return luottotili.withdraw(sum);
}

void Asiakas::showSaldo()
{
    cout << "Kayttotilin saldo: " << kayttotili.getBalance() << endl;
    cout << "Luottotilin saldo: " << luottotili.getBalance() << endl;
}

string Asiakas::getNimi()
{
    return nimi;
}

bool Asiakas::tiliSiirto(double sum, Asiakas& kohde)
{
    if (kayttotili.withdraw(sum) == true)
    {
        cout << "Nosto " << sum << " onnistui." << endl;
        kohde.talletus(sum);
        cout << "Talletus " << sum << " tehty vastaanottajalle: " << kohde.getNimi() << endl;
        return true;
    }
    else
    {
        cout << "Siirto epaonnistui!" << endl;
        return false;
    }
}