
#include "my_data.h"

/**
    CLASS      : IF - 41 -08
    NAME       : Aanisah Rifda Rusjdy
    STUDENT ID : 1301174057
**/

mytype create_data() {
    /**
     TODO:  receive input from user
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    cout<<"Masukkan ID   : ";
    cin>>d.id;
    cout<<"Masukkan Nama : ";
    cin>>d.nama;
    cout<<"Masukkan Kelas: ";
    cin>>d.kelas;
    cout<<"Masukkan Nilai: ";
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
    cout<<"ID     : "<<d.id<<" "<<endl;
    cout<<"Nama   : "<<d.nama<<" "<<endl;
    cout<<"Kelas  : "<<d.kelas<<" "<<endl;
    cout<<"Nilai  : "<<d.nilai<<" "<<endl;




    // ===========================
}


void edit_data(mytype &d) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

    // ===========================
    // YOUR CODE HERE
       cout<<"Masukkan Nama  : ";
       cin>>d.nama;
       cout<<"Masukkan Kelas : ";
       cin>>d.kelas;
       cout<<"Masukkan Nilai : ";
       cin>>d.nilai;





    // ===========================
}

