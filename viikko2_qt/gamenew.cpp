#include "gamenew.h"
#include <iostream>
#include <ctime>
using namespace std;


GameNew::GameNew(int mN)
{
    maxNumber = mN;
}

GameNew::~GameNew()
{
    //cout << "Peli tuhottu" << endl;
}

void GameNew::play()
{
    //Arvotaan satunnainen luku
    srand(time(0));
    randomNumber = (rand() % maxNumber) + 1;
    //cout << "maxNumber: " << maxNumber << endl << "randomNumber: " << randomNumber << endl;


    //Jos pelaajan vastaus ei ollut oikein, niin palataan kohtaan 2.
    while (playerGuess != randomNumber) {

        //Kysytään pelaajalta arvaus
        cout << "Anna arvaus: ";
        cin >> playerGuess;

        //lisätään arvausten lukumäärää
        numOfGuesses++;

        //Tarkistetaan onko arvaus pienempi, suurempi tai yhtäsuuri kuin luku
        //Kerrotaan tarkistuksen tulos tyyliin ”luku on pienempi/suurempi” tai ”oikea vastaus”
        if (playerGuess == randomNumber) {
            cout << "Arvasit oikein! Peli loppui." << endl;
        } else if (playerGuess < randomNumber) {
            cout << "Kokeile isompaa!" << endl;
        } else if (playerGuess > randomNumber) {
            cout << "Kokeile pienempaa!" << endl;
        }
    }

}

void GameNew::printGameResult()
{
    cout << "Oikea luku: " << randomNumber << endl << "Arvausten maara: " << numOfGuesses << endl;
}
