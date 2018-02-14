
#include "my_data.h"

/**
    CLASS      : IF-40-INT
    NAME       : Aditya Ramadhan Moesya
    STUDENT ID : 1301160471
**/

mytype create_data() {
    /**
     TODO:  receive input from user
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    cout<<"NAME         : ";cin>>d.name;
    cout<<"STUDENT ID   : ";cin>>d.ID;
    cout<<"CLASS        : ";cin>>d.clas;
    cout<<"SCORE        : ";cin>>d.score;
    // ===========================
    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
    */

    // ===========================
    // YOUR CODE HERE
    cout<<"NAME         : "<<cin<<d.name;
    cout<<endl;
    cout<<"STUDENT ID   : "<<cin<<d.ID;
    cout<<endl;
    cout<<"CLASS        : "<<cin<<d.clas;
    cout<<endl;
    cout<<"SCORE        : "<<cin<<d.score;
    cout<<endl;
    // ===========================
}


void edit_data(mytype &d) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

    // ===========================
    // YOUR CODE HERE
    cout<<"NAME         : ";cin>>d.name;
    cout<<"CLASS        : ";cin>>d.clas;
    cout<<"SCORE        : ";cin>>d.score;
    // ===========================
}

