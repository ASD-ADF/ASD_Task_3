
#include "my_data.h"

/**
    CLASS      : IF39INT
    NAME       : Hafiz
    STUDENT ID : 1301153624
**/

mytype create_data() {
    /**
     TODO:  receive input from user
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    cout<<"your code here"<<endl;

    cout<<" id = ";
    cin>>d.id;
    cout<<"Name = ";
    cin>>d.name;
    cout<<"Nim = ";
    cin>>d.nim;
    cout<<"Score = ";
    cin>>d.score;







    // ===========================
    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
    */

    // ===========================
    // YOUR CODE HERE
    cout<<"your code here"<<endl;
    cout<<"id = "<<d.id<<endl;
    cout<<"Name = "<<d.name<<endl;
    cout<<"Nim = "<<d.nim<<endl;
    cout<<"Score = "<<d.score<<endl;




    // ===========================
}


void edit_data(mytype &d) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

    // ===========================
    // YOUR CODE HERE
        cout<<"your code here"<<endl;
        cout<<"Name = ";
        cin>>d.name;
        cout<<"Nim = ";
        cin>>d.nim;
        cout<<"Score = ";
        cin>>d.score;




    // ===========================
}

