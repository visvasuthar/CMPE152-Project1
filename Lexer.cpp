//
// Created by Luis on 2/2/2020.
//

#include <iostream>
#include "Lexer.h"
#include "Tag.h"
using namespace std;

void Lexer::reserve(Word w){
    words.insert(make_pair(w.lexeme, w));
}

Lexer::Lexer(){
    Tag tag;
    reserve( Word("if",    tag.IF) );
    reserve( Word("else",  tag.ELSE) );
    reserve( Word("while", tag.WHILE) );
    reserve( Word("do",    tag.DO) );
    reserve( Word("break", tag.BREAK) );

}