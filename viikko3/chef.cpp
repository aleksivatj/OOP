#include "chef.h"
#include <iostream>

Chef::Chef()
{
    //cout << "Olen default constructorissa." << endl;
}

Chef::Chef(string cN)
{
    //cout << "Olen input constructorissa." << endl;
    chefName = cN;
}


Chef::~Chef()
{
    //cout << "Olen default destructorissa." << endl;
}

int Chef::makeSalad(int numberOfItems)
{
    //cout << "Olen salaattifunktiossa." << endl;
    cout << "Annoit: " << numberOfItems <<  " ainesta" << endl;
    cout << "Siita saadaan " << numberOfItems / 5 << " salaattiannosta." << endl;
    return numberOfItems / 5;
}

int Chef::makeSoup(int numberOfItems)
{
    //cout << "Olen soppafunktiossa." << endl;
    cout << "Annoit: " << numberOfItems <<  " ainesta" << endl;
    cout << "Siita saadaan " << numberOfItems / 3 << " soppa-annosta." << endl;
    return numberOfItems / 3;
}

string Chef::getName()
{
    //cout << "Olen getterissa" << endl;
    cout << "Kokin nimi on: " << chefName << endl;
    return chefName;
}

void Chef::setName(string cN)
{
    //cout << "Olen setterissa." << endl;
    chefName = cN;
}
