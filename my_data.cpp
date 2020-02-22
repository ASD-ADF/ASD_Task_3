
#include "my_data.h"

/**
    CLASS      : IF-43-05
    NAME       : MAYANG SARI
    STUDENT ID : 1301194227
**/

mytype create_data() {
    /**
     TODO:  receive input FROM USER
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    cout<<"Masukkan ID: ";
    cin>>d.ID;
    cout<<"Masukkan Nama: ";
    cin>>d.name;
    cout<<"Masukkan Rank: ";
    cin>>d.Rank;
    cout<<"Masukkan Score: ";
    cin>>d.score;
    cout<<endl;



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
    cout<<"ID: "<<d.ID<<endl;
    cout<<"Nama: "<<d.name<<endl;
    cout<<"Ranking: "<<d.Rank<<endl;
    cout<<"Score: "<<d.score<<endl;
    cout<<endl;
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
    cout<<"Masukkan nama baru: ";
    cin>>d.name;
    cout<<"Masukkan ranking baru: ";
    cin>>d.Rank;
    cout<<"Masukkan score baru: ";
    cin>>d.score;
    cout<<endl;



    // ===========================
}

