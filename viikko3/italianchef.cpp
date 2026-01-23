#include "italianchef.h"
#include "chef.h"
#include <iostream>

ItalianChef::ItalianChef()
{
    //cout << "Olen italia default constructorissa." << endl;
}

ItalianChef::ItalianChef(string cN)
{
    //cout << "Olen italia input constructorissa." << endl;
    chefName = cN;
}

ItalianChef::~ItalianChef()
{
    //cout << "Olen italia default destructorissa." << endl;
}

bool ItalianChef::askSecret(string pw, int amountOfWater, int amountOfFlour)
{
    int numberOfPizzas;
    if (pw == password) {
        makePizza();
        water = amountOfWater;
        flour = amountOfFlour;
        numberOfPizzas = makePizza();
        cout << "jauhoja on " << flour << " ja vetta on " << water << endl;
        cout << "saatiin tehtya: " << numberOfPizzas << " pizzaa" << endl;
        return true;
    } else
    return false;
}

int ItalianChef::makePizza()
{
    //cout << "jauhoja on " << flour << " ja vetta on " << water << endl;
    while (flour / 5 > water / 5) {
        flour--;
    }
    while (flour / 5 < water / 5) {
        water--;
    }
    int lasku = ((flour / 5) + (water / 5)) / 2;
    //cout << "tehdaampa pizzaa!" << endl;
    //cout << "jauhoja on " << flour << " ja vetta on " << water << endl;
    return lasku;
}
