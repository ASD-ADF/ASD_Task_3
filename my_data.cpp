
#include "my_data.h"

/**
    CLASS      : IF-43-05
    NAME       : Balqis Sayyidahtul Atikah
    STUDENT ID : 1301193480
**/

mytype create_data() {
    /**
     TODO:  receive input FROM USER
            and assign the value of new data
    */
    mytype d;
    // ===========================
    cout<<"Masukkan ID anda : ";
    cin>>d.ID;
    cout<< "Masukkan Nama Anda : ";
    cin>>d.name;
    cout<<"Masukkan Ranking : ";
    cin>>d.Rank;
    cout<<"Masukkan score : ";
    cin>>d.Score;
    // ===========================
    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
     it will be called when print_info function is invoked
    */

    // ===========================
    cout<<d.ID<<" "<<d.name<<" "<<d.Rank<<" "<<d.Score<<endl;
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
    cout<< "Masukkan pergantian nama : ";
    cin>>d.name;
    cout<< "Masukkan Pergantian Rank : ";
    cin>>d.Rank;
    cout<<"Masukkan Pergantian Score : ";
    cin>>d.Score;
    // ===========================
}

