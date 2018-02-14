
#include "my_data.h"

/**
    CLASS      : IF-39-INT
    NAME       : Muhammad Novario Ekaputra
    STUDENT ID : 1301153620
**/

mytype create_data() {
    /**
     TODO:  receive input from user
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
        cout<<"ID : ";
        cin>>d.ID;
        cout<<"Name : ";
        cin>>d.name;
        cout<<"Class : ";
        cin>>d.studClass;
        cout<<"GPA : ";
        cin>>d.gpa;
    // ===========================
    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
    */

    // ===========================
    // YOUR CODE HERE
        cout<<"ID : "<<d.ID<<endl;
        cout<<"Name : "<<d.name<<endl;
        cout<<"Class : "<<d.studClass<<endl;
        cout<<"GPA : "<<d.gpa;<<endl;
    // ===========================
}


void edit_data(mytype &d) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

    // ===========================
    // YOUR CODE HERE
        cout<<"ID : ";
        cin>>d.ID;
        cout<<"Name : ";
        cin>>d.name;
        cout<<"Class : ";
        cin>>d.studClass;
        cout<<"GPA : ";
        cin>>d.gpa;
    // ===========================
}

