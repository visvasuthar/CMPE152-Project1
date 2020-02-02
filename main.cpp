//
// Created by Luis on 2/2/2020.
//

#include <iostream>
#include "Lexer.h"
#include "Token.h"

#include "Lexer.cpp"
#include "Token.cpp"

using namespace std;

int main() {

    Lexer lex;
    Token t;

    //    iterating over all value of umap
    unordered_map<string, Word>:: iterator itr;
    cout << "\nAll Elements : \n";
    for (itr = lex.words.begin(); itr != lex.words.end(); itr++)
    {
        cout << itr->first << " " << itr->second.toString() << endl;
    }

    return 0;
}