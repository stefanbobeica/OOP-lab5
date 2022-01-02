//
// Created by stefa on 11/22/2021.
//

#include "Student.h"

Student::Student():Nota(),Diriginte(),Clasa(),nume(nullptr) {

}
Student::~Student() {
    delete [] nume;

}

Student &Student::operator=(Student &obj) {
    Nota::operator=(obj);
    Diriginte::operator=(obj);
    Clasa::operator=(obj);
    this->nume=strdup(obj.nume);
    return *this;
}

istream &operator>>(istream & in, Student & obj) {
    cout<<"--Citire Student--"<<endl;
    in>>(Nota&)obj;
    in>>(Diriginte&)obj;
    in>>(Clasa&)obj;
    char *aux=new char[30];
    fflush(stdin);
    cout<<"Numele studentului:";
    in.getline(aux,30);
    obj.nume=strdup(aux);
    delete[] aux;
    return in;
}

ostream &operator<<(ostream & out, Student & obj) {
   out<<"--Afisare Student--"<<endl;
   out<<(Nota&)obj;
   out<<(Diriginte&)obj;
   out<<(Clasa&)obj;

   out<<"Numele studentului: "<<obj.nume<<endl;

    return out;
}

Student::Student(int *note, int nr_note, char *numeDiriginte, char *grupa,int nrelevi, char *nume):Nota(nr_note,note),Diriginte(numeDiriginte,grupa),Clasa(nrelevi) {
 this->nume=strdup(nume);
}
void interschimbare(Student &a, Student &b)
{ Student aux;
   aux=a;
   a=b;
   b=aux;
}