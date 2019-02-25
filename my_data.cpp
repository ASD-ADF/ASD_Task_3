
#include "my_data.h"

/**
    CLASS      : IF-42-04
    NAME       : DJAFAR SHIDDIEQ RITONGA
    STUDENT ID : 1301184367
**/

mytype create_data() {
    /**
     TODO:  receive input FROM USER
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE

    cout<<"[INPUT DATA]"<<endl;
    cout<<"ID       : ";
    cin>>d.ID;
    cout<<"Name     : ";
    cin>>d.Name;
    cout<<"Rank     : ";
    cin>>d.Rank;
    cout<<"Score    : ";
    cin>>d.score;

    // ===========================
    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
     it will be called when print_info function is invoked
    */

    // ===========================
    // YOUR CODE HERE

    cout<<"[DATA FOUND!]"<<endl;
    cout<<"ID       : "<<d.ID<<endl;
    cout<<"Name     : "<<d.Name<<endl;
    cout<<"Rank     : "<<d.Rank<<endl;
    cout<<"Score    : "<<d.score<<endl;

    // ===========================
}


void edit_data(mytype &d) {
    /**
     * TODO:  edit the value of data d,
     *       receive input FROM USER
     *       the ID must NOT be modified
    */

    // ===========================
    // YOUR CODE HERE

    cout<<"[EDIT DATA]"<<endl;
    cout<<"ID       : "<<d.ID<<endl;
    cout<<"Name     : "<<d.Name<<" (Before changes)"<<endl;
    cout<<"Rank     : "<<d.Rank<<" (Before changes)"<<endl;
    cout<<"Score    : "<<d.score<<" (Before changes)"<<endl;

    cout<<"[INSERT NEW CHANGES]"<<endl;
    cout<<"Name     : ";
    cin>>d.Name;
    cout<<"Rank     : ";
    cin>>d.Rank;
    cout<<"Score    : ";
    cin>>d.score;

    // ===========================
}

