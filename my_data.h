#ifndef MY_DATA_H_INCLUDED
#define MY_DATA_H_INCLUDED

#include <iostream>
#include <stdio.h>
using namespace std;

/**
    CLASS      : IF-41-08
    NAME       : Muchtarom Yahya
    STUDENT ID : 1301174052
**/

struct mytype {
    /**
     TODO:  create a new Data type with specification:
            - an integer variable acted as an ID
            - two other variables
            - a float variable
    */
    int id;
    char name[40], classroom[9];
    float score;
};


mytype create_data();
void view_data(mytype d);
void edit_data(mytype &d);

#endif // MY_DATA_H_INCLUDED
