#include <string>
#include "my_data.h"

/**
    CLASS      :
    NAME       :
    STUDENT ID :
**/

mytype create_data() {
    /**
     TODO:  receive input from user
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    cout<<"Insert ID   : ";
     cin>>d.ID;
     cout<<"Insert Name : ";
     cin>>d.name;
     cout<<"Insert Class: ";
     cin>>d.clas;
     cout<<"Insert Score: ";
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
     cout<<"ID    : "<<d.ID<<endl;
     cout<<"Name  : "<<d.name<<endl;
     cout<<"Class : "<<d.clas<<endl;
     cout<<"Score : "<<d.score<<endl;
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
       cout<<"Insert Name  : ";
       cin>>d.name;
       cout<<"Insert Class : ";
       cin>>d.clas;
       cout<<"Insert Score : ";
       cin>>d.score;



    // ===========================
}

