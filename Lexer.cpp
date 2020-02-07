//
// Created by Luis on 2/2/2020.
//

#include <iostream>
#include "Type.h"
#include "Lexer.h"
#include "Tag.h"
#include "Word.h"
using namespace std;

void Lexer::reserve(Word w){
    words.insert(make_pair(w.lexeme, w));
}

Lexer::Lexer(){
    Tag tag;
    Word word;
    Type type;
    reserve( Word("if",    tag.IF) );
    reserve( Word("else",  tag.ELSE) );
    reserve( Word("while", tag.WHILE) );
    reserve( Word("do",    tag.DO) );
    reserve( Word("break", tag.BREAK) );

    reserve( *word.AND ); reserve( *word.False );

    reserve( *type.Int );  reserve( *type.Char );
    reserve( *type.Bool ); reserve( *type.Float );
}

void Lexer::readch(){
   peek = getchar();
}

bool Lexer::readch(char c){
    readch();
    if( peek != c ) return false;
    peek = ' ';
    return true;
}

Token Lexer::scan(){
    Word word;
    Token token;
    while(true){
        if( peek == ' ' || peek == '\t') continue;
        else if( peek == '\n' ) line = line + 1;
        else break;
    }

    switch( peek ){
        case '&':
            if( readch('&') ) return *word.AND; else return Token('&');
        case '|':
            if( readch('|') ) return *word.OR; else return Token('|');
        case '=':
            if( readch('=') ) return *word.eq; else return Token('=');
        case '!':
            if( readch('=') ) return *word.ne; else return Token('!');
        case '<':
            if( readch('=') ) return *word.le; else return Token('<');
        case '>':
            if( readch('=') ) return *word.ge; else return Token('>');

    }

    if( isdigit( peek ) ){
        int v = 0;
        do{
            v = 10*v + (peek - '0'); //Not sure if equivalent
            readch();
        } while( isdigit(peek) );

        if( peek != '.') ; // need to add num.
    }
}