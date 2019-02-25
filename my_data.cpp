
#include "my_data.h"

/**
    CLASS      : IF-42-04
    NAME       : Muhamad Farell Ambiar
    STUDENT ID : 1301184262
**/

mytype create_data() {
    /**
     TODO:  receive input from user
            and assign the value of new data
    */
    mytype d;
    // ===========================
    cout<<"Input ID: ";
    cin>>d.ID;
    cout<<"input Nama: ";
    cin>>d.name;
    cout<<"Input Score: ";
    cin>>d.score;
    cout<<"Input Ranking: ";
    cin>>d.Rank;
    // ===========================
    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
    */

    // ===========================
    cout<<"ID: "<<d.ID<<endl;
    cout<<"Nama: "<<d.name<<endl;
    cout<<"Score: "<<d.score<<endl;
    cout<<"Ranking: "<<d.score<<endl;
    cout<<"============================="<<endl;
    // ===========================
}


void edit_data(mytype &d) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

    // ===========================
    cout<<"Input data Nama baru: ";
    cin>>d.name;
    cout<<"Input data Score baru: ";
    cin>>d.score;
    cout<<"Input data Ranking baru: ";
    cin>>d.Rank;
    // ===========================
}
