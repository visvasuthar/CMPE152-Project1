//
// Created by Luis on 2/2/2020.
//

#ifndef CMPE152_PROJECT1_WORD_H
#define CMPE152_PROJECT1_WORD_H

#include <iostream>
#include <string>
#include "Token.h"
#include "Tag.h"
using namespace std;

class Word : public Token{
public:
    typedef Token super;
    Tag tag;
    string lexeme;
    Word(string s, int tag){super::tag = tag; lexeme = s;}
    string toString() {return lexeme; }
};

#endif //CMPE152_PROJECT1_WORD_H
