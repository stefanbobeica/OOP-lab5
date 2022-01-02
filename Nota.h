//
// Created by stefa on 11/22/2021.
//

#ifndef LAB5_NOTA_H
#define LAB5_NOTA_H

#include <iostream>

using namespace  std;

class Nota {
protected:
    int *note;
    int nr_note;
public:
  Nota();
  Nota(const int, int* );
  ~Nota();
  float getMedie();
  friend  istream& operator >> (istream& ,Nota&);
  friend  ostream& operator <<(ostream&, Nota&);
  Nota& operator=(Nota&obj);
};


#endif //LAB5_NOTA_H
