//
// Created by Luis on 2/7/2020.
//

#ifndef CMPE152_PROJECT1_TYPE_H
#define CMPE152_PROJECT1_TYPE_H

#include <iostream>
#include "string.h"
#include "Word.h"
#include "Tag.h"
using namespace std;

class Type : public Word{
public:
    int width = 0;
    Type();
    Type(string s, int tag, int w){Word(s, tag); width = w;}
    bool numeric(Type p);
    Type max(Type p1, Type p2);

    bool operator==(const Type &rhs);

    Type *Int, *Float, *Char, *Bool, *null;
};

#endif //CMPE152_PROJECT1_TYPE_H
