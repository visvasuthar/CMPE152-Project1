//
// Created by Luis on 2/2/2020.
//

#include <iostream>
#include "Token.h"
using namespace std;


Token::Token(int t){
    tag = t;
}

string Token::toString(){
    return "" + (char)tag;
}

Token::Token() {
    tag = 0;
}
