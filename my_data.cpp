
#include "my_data.h"

/**
    CLASS      : IF 41-08
    NAME       : Muhammad Khaifa Gifari
    STUDENT ID : 1301170382
**/

mytype create_data() {
    /**
     TODO:  receive input from user
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    cout<<"==== Masukkan Data Anda====" << endl;
    cout<<"ID   : ";
    cin>>d.id;
    cout<<"Nama : ";
    cin>>d.nama;
    cout<<"NIM  : ";
    cin>>d.nim;
    cout<<"Nilai : ";
    cin>>d.nilai;

    // ===========================
    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
    */

    // ===========================
    // YOUR CODE HERE
    cout<<"==== Data Anda =====" << endl;
    cout<<"ID   : "<< d.id << endl;
    cout<<"Nama : "<< d.nama << endl;
    cout<<"NIM  : "<< d.nim << endl;
    cout<<"Nilai : "<< d.nilai << endl;
    // ===========================
}


void edit_data(mytype &d) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

    // ===========================
    // YOUR CODE HERE
        cout<<"Masukkan nama : ";
        cin >> d.nama;
        cout<<"Masukkan nim : ";
        cin >> d.nim;
        cout<<"Masukkan nilai : ";
        cin>>d.nilai;

    // ===========================
}

