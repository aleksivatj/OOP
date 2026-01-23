#ifndef CHEF_H
#define CHEF_H
using namespace std;
#include <string>

class Chef
{
public:
    Chef();
    ~Chef();
    Chef(string);
    string getName();
    int makeSalad(int);
    int makeSoup(int);
    void setName(string);

protected:
    string chefName;
};

#endif // CHEF_H
