//
// Created by stefa on 11/22/2021.
//

#ifndef LAB5_DIRIGINTE_H
#define LAB5_DIRIGINTE_H
#include <iostream>
#include <cstring>
using namespace  std;

class Diriginte {
protected:
    char *nume;
    char grupa[7];
public:
    Diriginte();
    Diriginte(char*,char*);
    ~Diriginte();
    friend istream& operator >>(istream&,Diriginte&);
    friend ostream& operator <<(ostream&,Diriginte&);
    Diriginte& operator=(Diriginte&);
    void setNume(char*);

};


#endif //LAB5_DIRIGINTE_H
