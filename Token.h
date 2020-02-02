//
// Created by Luis on 2/2/2020.
//

#ifndef CMPE152_PROJECT1_TOKEN_H
#define CMPE152_PROJECT1_TOKEN_H

#include <iostream>
#include <string>

using namespace std;

class Token{
    public:
        int tag;
        Token();
        Token(int t);
        string toString();
};


#endif //CMPE152_PROJECT1_TOKEN_H
