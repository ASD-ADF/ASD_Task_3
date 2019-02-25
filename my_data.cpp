
#include "my_data.h"

/**
    CLASS      : IF - 42 - 04
    NAME       : I Komang Gede Aryadi Pramarta
    STUDENT ID : 1301184175
**/

mytype create_data() {
    /**
     TODO:  receive input FROM USER
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    cout<<"Masukkan ID : ";
    cin>>d.ID;
    cout<<"Masukkan Nama : ";
    cin>>d.name;
    cout<<"Masukkan Peringkat : ";
    cin>>d.ranking;
    cout<<"Masukkan Score : ";
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
    cout<<"ID : "<<d.ID<<endl;
    cout<<"NAMA : "<<d.name<<endl;
    cout<<"PERINGKAT : "<<d.ranking<<endl;
    cout<<"SCORE : "<<d.score<<endl;
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
    cout<<"NAMA : ";
    cin>>d.name;
    cout<<"PERINGKAT : ";
    cin>>d.ranking;
    cout<<"SCORE : ";
    cin>>d.score;

    // ===========================
}

