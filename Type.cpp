//
// Created by Luis on 2/7/2020.
//

#include <iostream>
#include "string.h"
#include "Type.h"
#include "Tag.h"

using namespace std;

Type::Type(){
    Tag tag;
    *Int   = Type("int",   tag.BASIC, 4);
    *Float = Type("float", tag.BASIC, 8);
    *Char  = Type("char",  tag.BASIC, 1);
    *Bool  = Type("bool",  tag.BASIC, 1);
    *null  = Type("null",  tag.BASIC, 0);
}

bool Type::numeric(Type p){
    Type type;
    if (p == *type.Char || p == *type.Int || p == *type.Float) return true;
    else return false;
}

Type Type::max(Type p1, Type p2){
    Type type;
    if ( ! numeric(p1) || ! numeric(p2) ) return *type.null;
    else if ( p1 == *type.Float || p2 == *type.Float ) return *type.Float;
    else if ( p1 == *type.Int   || p2 == *type.Int   ) return *type.Int;
    else return *type.Char;
}

//Not sure if this is correct     v
bool Type::operator==(const Type &rhs) {
    if(this->lexeme == rhs.lexeme){
        return true;
    }
    else return false;
}
