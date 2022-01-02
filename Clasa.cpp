//
// Created by stefa on 11/22/2021.
//

#include "Clasa.h"

Clasa::Clasa():nr_elevi(0) {

}

Clasa::Clasa(int nr_elevi):nr_elevi(nr_elevi) {

}

istream &operator>>(istream & in, Clasa& obj) {
    cout<<"--Citire Clasa--"<<endl;
    cout<<"Dati numarul de elevi:";
    in>>obj.nr_elevi;
    return in;
}

ostream &operator<<(ostream & out, Clasa& obj) {
    out<<"--Afisare Clasa--"<<endl;
    out<<"Numarul de elevi: "<<obj.nr_elevi<<endl;
    return out;
}

Clasa &Clasa::operator=(Clasa & obj) {
    this->nr_elevi=obj.nr_elevi;
    return *this;
}
void Clasa::setNrElevi(int nr) {
    this->nr_elevi=nr;
}
int Clasa::getNrElevi() {
    return this->nr_elevi;
}
Clasa::~Clasa(){
    ;
}
