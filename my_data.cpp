
#include "my_data.h"

/**
    CLASS      : IF-42-04
    NAME       : Mohammad Daffa Haris
    STUDENT ID : 1301180355
**/

mytype create_data() {
    /**
     TODO:  receive input FROM USER
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    cout<<" masukkan ID : ";
    cin>>d.ID;
    cout<<" masukkan nama : ";
    cin>>d.name;
    cout<<" masukkan ranking : ";
    cin>>d.ranking;
    cout<<" masukkan score : ";
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
    cout<<"ID    : "<<d.ID<<endl;
    cout<<"Nama  : "<<d.name<<endl;
    cout<<"Rank  : " << d.ranking<<endl;
    cout<<"Score : "<<d.score<<endl;
    cout<<"-----------------------------"<<endl;
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
    cout<<" Ubah nama : ";
    cin>>d.name;
    cout<<" Ubah ranking : ";
    cin>>d.ranking;
    cout<<" Ubah score : ";
    cin>>d.score;
    // ===========================
}

