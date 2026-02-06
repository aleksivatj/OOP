#include <iostream>
#include <memory>
#include "Seuraaja.h"
#include "Notifikaattori.h"

using namespace std;

int main() 
{
    Seuraaja *A = new Seuraaja("A");
    Seuraaja *B = new Seuraaja("B");
    Seuraaja *C = new Seuraaja("C");

    Notifikaattori N;
    cout << endl;

    N.lisaa(A);
    N.lisaa(B);
    N.lisaa(C);
    cout << endl;

    N.tulosta();
    N.postita("Tama on viesti 1");
    N.poista(B); cout << endl;
    N.postita("Tama on viesti 2");

    return 0;
}