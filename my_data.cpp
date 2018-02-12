
#include "my_data.h"

/**
    CLASS      :IF-41-08
    NAME       :Muchtarom Yahya
    STUDENT ID :1301174052
**/

mytype create_data() {
    /**
     TODO:  receive input from user
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    cout<<"your code here"<<endl;




    // ===========================
    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
    */

    // ===========================
    // YOUR CODE HERE
    cout<<"ID   : "<<d.Nim<<endl;
    cout<<"Nama : "<<d.nama<<endl;
    cout<<"kelas: "<<d.kelas<<endl;
    cout<<"Nilai: "<<d.nilai<<endl;
    cout<<endl<<endl;




    // ===========================
}


void edit_data(mytype &d) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

    // ===========================
    // YOUR CODE HERE
        cin.get();
        cout<<"Masukan Nama     : ";
        gets(d.Nama);
        cout<<"Masukan Kelas    : ";
        gets(d.Kelas);
        cout<<"Masukan Nilai    : ";
        cin>>d.Kilai;





    // ===========================
}

