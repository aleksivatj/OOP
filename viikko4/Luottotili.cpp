#include "Luottotili.h"
#include <iostream>
using namespace std;

Luottotili::Luottotili()
{
    //cout << "Olen Luottotili default constructorissa!" <<  endl;
}

Luottotili::~Luottotili()
{

}

Luottotili::Luottotili(string om, double lr) : Pankkitili(om)
{
    //cout << "Olen Luottotili parametriconstructorissa!" << endl;
    cout << "Luottotili luotu nimella: " << om << " ja luottorajalla: " << lr << endl;
    luottoRaja = lr;
    saldo = 0;
}

bool Luottotili::deposit(double sum)
{
    //cout << "Olen Luottotili velanmaksussa!" << endl;
    cout << "Saldo ennen talletusta: " << saldo << endl;
    cout << "Saldo talletuksen jalkeen: " << saldo + sum << endl;
    if ((sum < 0) || ((sum + saldo) > 0)) return false;
    saldo += sum;
    return true;
}

bool Luottotili::withdraw(double sum)
{
    //cout << "Olen Luottotili velannostossa!" << endl;
    cout << "Luottoraja: " << luottoRaja << endl;
    cout << "Luoton saldo ennen nostoa: " << saldo << endl;
    cout << "Luoton saldo noston jalkeen: " << saldo - sum << endl;
    if ((sum < 0) || ((std::abs(saldo) + sum) > luottoRaja)) return false;
    saldo -= sum;
    return true;
}