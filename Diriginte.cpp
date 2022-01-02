//
// Created by stefa on 11/22/2021.
//

#include "Diriginte.h"

Diriginte::Diriginte():nume(nullptr) {
 strcpy(this->grupa," ");

}

Diriginte::Diriginte(char *nume, char *grupa) {
   this->nume=strdup(nume);
   strcpy(this->grupa,grupa);
}

Diriginte::~Diriginte() {
 delete [] nume;
}

istream &operator>>(istream &in, Diriginte &obj) {
    cout<<"--Citire Diriginte--"<<endl;
    cout<<"Numele dirigintelui: ";
    fflush(stdin);
    char *aux= new char[30];
    in.getline(aux,30);
    obj.nume=strdup(aux);
    fflush(stdin);
    cout<<"Numele grupei: ";
    in.getline(aux,30);
    strcpy(obj.grupa,aux);
    delete[] aux;
    return in;
}

ostream &operator<<(ostream & out, Diriginte &obj) {
    out<<"--Afisare Diriginte--"<<endl;
    out<<"Numele dirigintelui:"<<obj.nume<<endl;
    out<<"Grupa:"<<obj.grupa<<endl;
    return out;
}

Diriginte &Diriginte::operator=(Diriginte &obj) {
    if (nume != NULL)
        delete [] nume;

    this->nume = strdup(obj.nume);
    strcpy(this->grupa,obj.grupa);
    return *this;
}
void Diriginte::setNume(char * nume) {
    delete [] this->nume;
    this->nume = strdup(nume);
}