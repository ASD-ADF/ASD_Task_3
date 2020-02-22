#ifndef MY_DATA_H_INCLUDED
#define MY_DATA_H_INCLUDED

#include <iostream>
using namespace std;

/**
    CLASS      : IF 43 05
    NAME       : BAGJA 9102 KURNIAWAN
    STUDENT ID : 1301194020
**/

struct mytype {
    /**
     TODO:  create a new Data type with specification:
            - an integer variable acted as an ID
            - string name
            - integer rank
            - float score
    */
    //=================================================
    // YOUR CODE STARTS HERE
    int ID;
    string Name;
    int Rank;
    float Score;
    // YOUR CODE ENDS HERE
    //=================================================
};


mytype create_data();
void view_data(mytype d);
void edit_data(mytype &d);

#endif // MY_DATA_H_INCLUDED
