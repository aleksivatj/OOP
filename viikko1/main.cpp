#include <iostream>
#include <ctime> //tämä että voidaan käyttää srand

using namespace std;
int game(int maxnum);

int main()
{
    int lkm = game(40);
    cout << "Arvausten lukumaara on " << lkm << endl;

    return 0;
}

int game(int maxnum) {

    //Arvotaan satunnainen luku
    srand(time(NULL));
    int randomi = (rand() % maxnum) + 1;
    int arvaus = 0;
    int arvausten_lkm = 0;


    //Jos pelaajan vastaus ei ollut oikein, niin palataan kohtaan 2.
    while (arvaus != randomi) {

        //Kysytään pelaajalta arvaus
        cout << "Anna arvaus: ";
        cin >> arvaus;

        //lisätään arvausten lukumäärää
        arvausten_lkm++;

        //Tarkistetaan onko arvaus pienempi, suurempi tai yhtäsuuri kuin luku
        //Kerrotaan tarkistuksen tulos tyyliin ”luku on pienempi/suurempi” tai ”oikea vastaus”
        if (arvaus == randomi) {
            cout << "Arvasit oikein! Peli loppui." << endl;
        } else if (arvaus < randomi) {
            cout << "Kokeile isompaa!" << endl;
        } else if (arvaus > randomi) {
            cout << "Kokeile pienempaa!" << endl;
        }
    }

    return arvausten_lkm;
}
