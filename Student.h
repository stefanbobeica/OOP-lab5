//
// Created by stefa on 11/22/2021.
//

#ifndef LAB5_STUDENT_H
#define LAB5_STUDENT_H
#include "Nota.h"
#include "Diriginte.h"
#include "Clasa.h"

class Student:public Nota, public Diriginte, public Clasa {
private:
    char *nume;
public:
    Student();
    ~Student();
    Student(int* note, int nr_note, char* numeDiriginte, char grupa[],int nrelevi, char* nume);
    Student& operator=( Student& obj);
    friend istream& operator >>(istream&,Student&);
    friend ostream& operator <<(ostream&,Student&);
    friend void  interschimbare(Student &, Student &);
};


#endif //LAB5_STUDENT_H
