#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    string kokinNimi;
    Chef kokki_1("Joni");
    kokinNimi = kokki_1.getName();

    //cout << "Main: kokinNimi on " << kokinNimi << endl;
    kokki_1.makeSalad(10);

    kokki_1.makeSoup(9);
    kokki_1.makeSoup(2);
    //ItalianChef it_kokki_1();
    ItalianChef it_kokki_2("Fabio");
    //it_kokki_1.makeSalad(15);
    it_kokki_2.makeSoup(7);
    it_kokki_2.makeSalad(12);

    it_kokki_2.askSecret("pizza", 30, 30);

    return 0;
}
