#include <iostream>

using namespace std;

double keskiarvo(double taulukko[4]);

int main()
{
    /*float pi = 3.14;
    string hello = "Hello Pi: ";
    cout << hello << pi << endl;

    double luvut[4];

    cout << "hellon pituus on " << hello.length() << endl;*/

    double luvut [4] = {1.23, 5.25, 4.14, 1.84};
    double ka = keskiarvo(luvut);
    keskiarvo(luvut);
    cout << "keskiarvo on " << ka << endl;

    return 0;
}

double keskiarvo(double taulukko[4]) {

    double tulos = 0.0;

    for (int i=0; i < 4; i++) {
        tulos += taulukko[i];
    }
    tulos = tulos / 4.0;
    return tulos;
}
