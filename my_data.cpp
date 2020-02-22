
#include "my_data.h"

/**
    CLASS      : IF-43-05
    NAME       : NAUFAL REZKY ANANDA
    STUDENT ID : 1301190478
**/

mytype create_data() {
    /**
     TODO:  receive input FROM USER
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    cout<<"ID member: ";
    cin>>d.ID;

    cout<<"Nama: ";
    cin>>d.name;

    cout<<"Rank: ";
    cin>>d.rank;

    cout<<"Score: ";
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
    cout<<"ID member: "<<d.ID<<endl;
    cout<<"Nama: "<<d.name<<endl;
    cout<<"Rank: "<<d.rank<<endl;
    cout<<"Score: "<<d.score<<endl;
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
    cout<<"Nama baru: ";
    cin>>d.name;
    cout<<endl;
    cout<<"Rank baru: ";
    cin>>d.rank;
    cout<<endl;
    cout<<"Score baru: ";
    cin>>d.score;
    cout<<endl;
    // ===========================
}

