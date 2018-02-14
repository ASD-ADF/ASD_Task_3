
#include "my_data.h"

/**
    CLASS      : IF 40 INT
    NAME       : MUHAMAD FAJAR RIVALDY
    STUDENT ID : 1301164476
**/

mytype create_data() {
    /**
     TODO:  receive input from user
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    cout<<"================"<<endl;
    cout<<"input id    : ";cin>>d.id;
    cout<<"input name  : ";cin>>d.name;
    cout<<"input class : ";cin>>d.clas;
    cout<<"input score : ";cin>>d.score;




    // ===========================
    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
    */

    // ===========================
    // YOUR CODE HERE
    cout<<"====================="<<endl;
    cout<<"Id   : "<<d.id<<endl;
    cout<<"Name : "<<d.name<<endl;
    cout<<"Class: "<<d.clas<<endl;
    cout<<"Mark : "<<d.score<<endl;




    // ===========================
}


void edit_data(mytype &d) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

    // ===========================
    // YOUR CODE HERE
        string beforeUpdateName = d.name;
        cout<<"====================="<<endl;
        cout<<"Input new name : ";
        cin>>d.name;
        cout<<"Input new Class : ";
        cin>>d.clas;
        cout<<"Input new Mark : ";
        cin>>d.score;
        cout<<beforeUpdateName<<" Updated become "<<d.name<<endl;
        cout<<endl;




    // ===========================
}

