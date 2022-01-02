//
// Created by stefa on 11/22/2021.
//

#include "Nota.h"

Nota::Nota():nr_note(0),note(nullptr) {

}

Nota::Nota(const int nr, int * note):nr_note(nr) {

    this->note=new int[nr];
    for(int i=0; i<nr; i++){
         this->note[i]=note[i];
    }
}

Nota::~Nota() {
delete[] note;
}

float Nota::getMedie() {
    float medie=0;
    for(int i=0;i<nr_note;i++){
        medie=medie+note[i];
    }
    medie=medie/nr_note;
    return medie;
}

istream &operator>>(istream &in, Nota &obj) {
    cout<<"--Citire Nota--"<<endl;
    cout<<"Numarul de note: ";
    in>>obj.nr_note;
    obj.note =new int[obj.nr_note];
    for(int i=0;i<obj.nr_note;i++){
        cout<<"Nota "<<i+1<<" este:";
        in>>obj.note[i];
    }

    return in;
}

ostream &operator<<(ostream &out, Nota &obj) {
    out<<"---Afisare Nota--"<<endl;
    out<<"Numarul de note:"<<obj.nr_note<<endl;
    for(int i=0; i<obj.nr_note;i++){
        out<<obj.note[i]<<" ";
    }
    cout<<endl;
    return  out;
}

Nota &Nota::operator=(Nota &obj) {
    if(this->note!=NULL)
        delete[] this->note;
        this->nr_note=obj.nr_note;
        this->note=new int[obj.nr_note];
        for(int i=0;i<obj.nr_note;i++)
            this->note[i]=obj.note[i];

      return  *this;
}
