
#include "my_data.h"

/**
    CLASS      : IF 41-08
    NAME       : Justisio Yan Prawira Adam
    STUDENT ID : 1301174597
**/

mytype create_data() {
    /**
     TODO:  receive input from user
            and assign the value of new data
    */
    mytype P;
    cout<<"Masukkan ID   : ";
    cin>>P.id;
    cout<<"Masukkan NIM  : ";
    cin>>P.nim;
    cout<<"Masukkan nama : ";
    cin>>P.nama;
    cout<<"Masukkan IPK  : ";
    cin>>P.ipk;
    cout<<endl;
    // ===========================
    return P;
}

void view_data(mytype P)
{
    /**
     TODO:  view the content of data d
    */

    cout<<"ID   : "<<P.id<<endl;
    cout<<"Nama : "<<P.nama<<endl;
    cout<<"NIM  : "<<P.nim<<endl;
    cout<<"IPK  : "<<P.ipk<<endl;
    cout<<endl;
}


void edit_data(mytype &P) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

    // ===========================
    // YOUR CODE HERE
    int n_data;
    cout<<"ID  : "<<P.id<<endl;
    cout<<"Edit Nama : ";
    cin>>P.nama;
    cout<<"Edit Nim  : ";
    cin>>P.nim;
    cout<<"Edit IPK  : ";
    cin>>P.ipk;
    cout<<endl;
    // ===========================
}

