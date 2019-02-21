#ifndef MY_DATA_H_INCLUDED
#define MY_DATA_H_INCLUDED

#include <iostream>
using namespace std;

/**
    CLASS      : IF 42-04
    NAME       : Cornelius Stephanus Alfredo
    STUDENT ID : 1301180287
**/

struct mytype {
    /**
     TODO:  create a new Data type with specification:
            - an integer variable acted as an ID
            - string name
            - integer rank
            - float score
    */
    int id;
    string nama;
    int rank;
    float score;
};


mytype create_data();
void view_data(mytype d);
void edit_data(mytype &d);

#endif // MY_DATA_H_INCLUDED
