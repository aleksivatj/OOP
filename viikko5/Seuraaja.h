#ifndef SEURAAJA_H
#define SEURAAJA_H
#include <iostream>
using namespace std;

class Seuraaja
{
public:
    Seuraaja(string n);
    ~Seuraaja();
    Seuraaja *next = nullptr;
    void paivitys(string viesti);
    string getNimi();

private:
    string nimi;
};

#endif