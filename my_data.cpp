
#include "my_data.h"

/**
    CLASS      : IF 39 INT
    NAME       : M. IHSAN AMIEN I.
    STUDENT ID : 1301153628
**/

mytype create_data() {
    /**
     TODO:  receive input from user
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    cout<<"ID: ";
    cin>>d.id;
    cout<<"Name: ";
    cin>>d.name;
    cout<<"NIM: ";
    cin>>d.nim;
    cout<<"Score: ";
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
    cout<<"ID: "<<d.id<<endl;
    cout<<"Name: "<<d.name<<endl;
    cout<<"NIM: "<<d.nim<<endl;
    cout<<"Score: "<<d.score<<endl;
    // ===========================
}


void edit_data(mytype &d) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

    // ===========================
    // YOUR CODE HERE
    mytype temp;
        string new_name;
        string new_nim;
        float new_score;
        temp.id = d.id;
        cout<<"Old Name: "<<d.name<<endl;
        cout<<"New Name: ";
        cin>>new_name;
        temp.name = new_name;
        cout<<endl;
        cout<<"Old NIM: "<<d.nim<<endl;
        cout<<"New NIM: ";
        cin>>new_nim;
        temp.nim = new_nim;
        cout<<endl;
        cout<<"Old Score: "<<d.score<<endl;
        cout<<"New Score: ";
        cin>>new_score;
        temp.score = new_score;
        cout<<endl;

        d = temp;
    // ===========================
}

