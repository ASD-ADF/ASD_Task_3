
#include "my_data.h"

/**
    CLASS      : IF-39-INT
    NAME       : HAQITA ANJAR ALAM
    STUDENT ID : 1301153681
**/

mytype create_data() {
    /**
     TODO:  receive input from user
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    cout<<"input your name: ";
    cin>>d.name;
    cout<<"input your ID: ";
    cin>>d.id;
    cout<<"input your class: ";
    cin>>d.clas;
    cout<<"input your grade: ";
    cin>>d.grade;
    // ===========================
    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
    */

    // ===========================
    // YOUR CODE HERE
    cout<<"NAME: "<<d.name<<endl;
    cout<<"ID: "<<d.id<<endl;
    cout<<"CLASS: "<<d.clas<<endl;
    cout<<"GRADE: "<<d.grade<<endl;

    // ===========================
}


void edit_data(mytype &d) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

    // ===========================
    // YOUR CODE HERE
    cout<<"input your name: ";
    cin>>d.name;
    cout<<"input your class: ";
    cin>>d.clas;
    cout<<"input your grade: ";
    cin>>d.grade;
    // ===========================
}

