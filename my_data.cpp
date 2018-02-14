
#include "my_data.h"

/**
    CLASS      : IF 40 INT
    NAME       : Muhammad Rich-q Ramadhan
    STUDENT ID : 1301160456
**/

mytype create_data() {
    /**
     TODO:  receive input from user
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    cout<<" Enter your name : ";cin>>d.name;
    cout<<" Enter your ID : ";cin>>d.ID;
    cout<<" Enter your Class : ";cin>>d.Class;
    cout<<" Enter Your Score : ";cin>>d.score;
    // ===========================
    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
    */

    // ===========================
    // YOUR CODE HERE
    cout<<" Your name : "<<cin<<d.name;
    cout<<" your ID   : "<<cin<<d.ID;
    cout<<" your class: "<<cin<<d.Class;
    cout<<" your score: "<<cin<<d.score;
    // ===========================
}


void edit_data(mytype &d) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

    // ===========================
    // YOUR CODE HERE
        cout<<" Enter your name : ";cin>>d.name;
        cout<<" Enter your class: ";cin>>d.Class;
        cout<<" Enter your score: ";cin>>d.score;




    // ===========================
}

