#include "my_data.h"

/**
    CLASS      : IF-41-08
    NAME       : Muchtarom Yahya
    STUDENT ID : 1301174052
**/

mytype create_data() {
    /**
     TODO:  receive input from user
            and assign the value of new data
    */
    mytype d;
    cout<<"Masukan Nim    : "; cin>>d.id;
    cin.get();
    cout<<"Masukan Nama  : "; cin.getline(d.name, 30);
    cout<<"Masukan Kelas : "; cin.getline(d.classroom, 10);
    cout<<"Masukan Nilai : "; cin>>d.score;
    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
    */
    cout<<"Nim       : "<<d.id<<endl;
    cout<<"Namae     : "<<d.name<<endl;
    cout<<"Kelas    : "<<d.classroom<<endl;
    cout<<"Nilai    : "<<d.score<<endl;
}


void edit_data(mytype &d) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */
    cin.get();
    cout<<"Masukan Nama Baru  : "; cin.getline(d.name, 30);
    cout<<"Masukan Kelas Baru : "; cin.getline(d.classroom, 30);
    cout<<"Masukan Nilai baru : "; cin>>d.score;
}
