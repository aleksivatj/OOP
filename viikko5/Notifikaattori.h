#ifndef NOTIFIKAATTORI_H
#define NOTIFIKAATTORI_H
#include "Seuraaja.h"


class Notifikaattori
{
public:
    Notifikaattori();
    ~Notifikaattori();
    void lisaa(Seuraaja *seur);
    void poista(Seuraaja *seur);
    void tulosta();
    void postita(string viesti);

private:
    Seuraaja *seuraajat = nullptr;
};

#endif