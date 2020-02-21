
#include "my_data.h"

/**
    CLASS      : IF - 43 - 05
    NAME       : Manuel Benedict
    STUDENT ID : 1301194182
**/

mytype create_data() {
    /**
     TODO:  receive input FROM USER
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    cout<<"Masukkan ID: " ;
    cin>>d.ID ;
    cout<<"Masukkan nama: " ;
    cin>>d.name ;
    cout<<"Masukkan peringkat: " ;
    cin>>d.rank ;
    cout<<"Masukkan skor: " ;
    cin>>d.score ;
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
    cout<<d.ID<<" -- "<<d.name<<" -- "<<d.rank<<" -- "<<d.score<<endl ;
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
        cout<<"Masukkan perubahan nama: " ;
        cin>>d.name ;
        cout<<"Masukkan perubahan peringkat: " ;
        cin>>d.rank ;
        cout<<"Masukkan perubahan skor: " ;
        cin>>d.score ;
    // ===========================
}

