#include "gamenew.h"
#include <iostream>

using namespace std;

int main()
{
    int maxNum(20);
    GameNew peliOlio(maxNum);

    peliOlio.play();
    peliOlio.printGameResult();


    return 0;
}