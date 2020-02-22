
#include "my_data.h"

/**
    CLASS      :IF-43-05
    NAME       :Hassan Rizky Putra Sailellah
    STUDENT ID :1301190328
**/

mytype create_data() {
    /**
     TODO:  receive input FROM USER
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    cout<<"Masukkan ID ; ";
    cin>>d.ID;
    cout<<"Masukkan Nama ; ";
    cin>>d.name;
    cout<<"Masukkan Ranking ; ";
    cin>>d.rank;
    cout<<"Masukkan Score ; ";
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
    cout<<"ID Member : "<<d.ID<<endl;
    cout<<"Nama      : "<<d.name<<endl;
    cout<<"Rank      : "<<d.rank<<endl;
    cout<<"Score     : "<<d.score<<endl;
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
    cout<<"Masukkan Nama Pengganti   : ";
    cin>>d.name;
    cout<<"Masukkan Rank Pengganti   : ";
    cin>>d.rank;
    cout<<"Masukkan Score Pengganti  : ";
    cin>>d.score;
    // ===========================
}

