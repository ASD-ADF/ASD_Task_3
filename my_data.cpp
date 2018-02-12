
#include "my_data.h"

/**
    CLASS      : If 41-08
    NAME       : Fareza Adityanto
    STUDENT ID : 1301174228
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

    cout<<"Masukkan id = ";
    cin>>d.ID;
    cout<<"Masukkan nama = ";
    cin>>d.name;
    cout<<"Masukkan kelas = ";
    cin>>d.kelas;
    cout<<"Masukkan ipk = ";
    cin>>d.IPK;

    // ===========================
    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
    */

    // ===========================
    // YOUR CODE HERE
    cout<<"your code here"<<endl;

    cout<<"id = "<<d.ID<<endl;
    cout<<"nama = "<<d.name<<endl;
    cout<<"kelas "<<d.kelas<<endl;
    cout<<"IPK = "<<d.IPK<<endl;

    // ===========================
}


void edit_data(mytype &d) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

    // ===========================
    // YOUR CODE HERE
        cout<<"your code here"<<endl;

        cout<<"ID anda adalah = "<<d.ID<<endl;
        cout<<"-----------edit data---------------"<<endl;
        cout<<"Masukkan nama baru = ";
        cin>>d.name;
        cout<<"Masukkan kelas baru = ";
        cin>>d.kelas;
        cout<<"Masukkan IPK baru = ";
        cin>>d.IPK;

    // ===========================
}

