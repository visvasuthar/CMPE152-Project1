//
// Created by Luis on 2/7/2020.
//

#include <iostream>
#include "Word.h"
#include "Tag.h"
#include "Token.h"
using namespace std;

Word::Word(){
    *AND = Word("&&", tag.AND);
    *OR  = Word("||", tag.OR);
    *eq  = Word("==", tag.EQ);
    *ne  = Word("!=", tag.NE);
    *le  = Word("<=", tag.LE);
    *ge  = Word(">=", tag.GE);

    *minus = Word("minus", tag.MINUS);
    *True  = Word("true",  tag.TRUE);
    *False = Word("false", tag.FALSE);
    *temp  = Word("t",     tag.TEMP);
}