#include <iostream>
#include "Nota.h"
#include "Diriginte.h"
#include "Clasa.h"
#include "Student.h"
using namespace std;
int main() {
Student *v;
v=new Student[10];
    int nota1[5] = {10, 9, 8, 7,4};
    int nota2[5] = {4, 2, 6, 8,6};
    int nota3[5] = {10, 9, 8, 5,3};
    int nota4[5] = {10, 9, 8, 7,10};
    int nota5[5] = {10, 9, 7, 2,6};
    int nota6[5] = {6, 3, 5, 9,7};
    int nota7[5] = {2, 9, 3, 7, 9};
    int nota8[5] = {8, 7, 10, 9,9};
    int nota9[5] = {10, 8, 7,10,4};
    int nota10[5] = {7, 4, 6,9,10};
    int nota11[5] = {10,10,10,10,10};

    Student a(nota1,5,"Gigel","321AB",10,"Andrei");
    Student b(nota2,5,"Gigel","321AB",10,"Ion");
    Student c(nota3,5,"Gigel","321AB",10,"Vasile");
    Student d(nota4,5,"Gigel","321AB",10,"Marcel");
    Student e(nota5,5,"Gigel","321AB",10,"VictorBoss");
    Student f(nota6,5,"Gigel","321AB",10,"Gheorghe");
    Student g(nota7,5,"Gigel","321AB",10,"Buldi");
    Student h(nota8,5,"Gigel","321AB",10,"Ionel");
    Student i(nota9,5,"Gigel","321AB",10,"Ceaun");
    Student j(nota10,5,"Gigel","321AB",10,"Cratita");
    v[0]=a;
    v[1]=b;
    v[2]=c;
    v[3]=d;
    v[4]=e;
    v[5]=f;
    v[6]=g;
    v[7]=h;
    v[8]=i;
    v[9]=j;
    for(int i=0; i<10; i++){
        for(int j=i+1; j<10; j++){
            if(v[i].getMedie()>v[j].getMedie() )
                interschimbare(v[i],v[j]);
        }

    }
for(int i=0;i<10;i++){
    v[i].setNume("Ninel");
}

Student *aux=new Student[11];

Student k(nota11,5,"Ninel","321AB",11,"Tigaie Tefal");
for(int i=0; i<10;i++){
    aux[i]=v[i];
    aux[i].setNrElevi(11);
}
aux[10]=k;
    v=new Student[11];
    for(int i=0;i<aux[i].getNrElevi();i++){
        v[i]=aux[i];
    }
delete [] aux;

    for(int i=0; i<v[0].getNrElevi();i++) {
        cout<<"Medie:"<<v[i].getMedie()<<endl;
        cout << v[i];
    }
    return 0;
}
