//
// Created by Luis on 2/2/2020.
//

#ifndef CMPE152_PROJECT1_LEXER_H
#define CMPE152_PROJECT1_LEXER_H

#include <iostream>
#include <string>
#include <unordered_map>
#include "Word.h"
#include "Token.h"
#include "Tag.h"

using namespace std;

class Lexer{
public:
    Lexer();
    Tag tag;
    int line = 1;
    char peek = ' ';
    unordered_map<string, Word> words; //need to change
    void reserve(Word w);


};

#endif //CMPE152_PROJECT1_LEXER_H
