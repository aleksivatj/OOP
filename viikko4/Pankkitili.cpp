#include "Pankkitili.h"
#include <iostream>
using namespace std;

Pankkitili::Pankkitili()
{
    //cout << "Olen Pankkitili default constructorissa!" << endl;
}

Pankkitili::~Pankkitili()
{

}

Pankkitili::Pankkitili(string om)
{
    //cout << "Olen Pankkitili parametriconstructorissa!" << endl;
    cout << "Pankkitili luotu nimella: " << om << endl;
    omistaja = om;
}

double Pankkitili::getBalance()
{
    //cout << "Olen saldokyselyssä!" << endl;
    return saldo;
}

bool Pankkitili::deposit(double sum)
{
    //cout << "Olen Pankkitili talletuksessa!" << endl;
    if (sum < 0) return false;
    saldo += sum;
    return true;
}

bool Pankkitili::withdraw(double sum)
{
    //cout << "Olen Pankkitili nostossa!" << endl;
    if ((sum < 0) || (sum > saldo)) return false;
    saldo -= sum;
    return true;
}