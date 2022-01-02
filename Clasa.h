//
// Created by stefa on 11/22/2021.
//

#ifndef LAB5_CLASA_H
#define LAB5_CLASA_H
#include <iostream>
using namespace  std;


class Clasa {
protected:
    int nr_elevi;
public:
    Clasa();
    Clasa(int);
    ~Clasa();
    friend istream& operator >>(istream&,Clasa&);
    friend ostream& operator <<(ostream&,Clasa&);
    Clasa& operator=(Clasa&);
    void setNrElevi(int );
    int getNrElevi();

};


#endif //LAB5_CLASA_H
