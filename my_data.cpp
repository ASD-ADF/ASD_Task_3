
#include "my_data.h"

/**
    CLASS      : IF - 43 - 05
    NAME       : Berliana Shafa Wardani
    STUDENT ID : 1301194181
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
    cin>> d.ID;
    cout<<"Masukkan Nama :";
    cin>> d.Name;
    cout << "Masukkan Rank : ";
    cin>> d.Rank;
    cout<< "Masukkan Score : ";
    cin>> d.score;

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
    cout<<"ID :"<< d.ID;
    cout<<"NAMA:"<< d.Name;
    cout <<" RANK : "<< d.Rank;
    cout<< " SCORE: "<<d.score;

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
        cout<<"Masukkan update Nama :";
        cin>> d.Name;
        cout << "Masukkan update Rank : ";
        cin>> d.Rank;
        cout<< "Masukkan update Score : ";
        cin>> d.score;


    // ===========================
}

