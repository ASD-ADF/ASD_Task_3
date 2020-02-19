
#include "my_data.h"

/**
    CLASS      : IF - 43 - 05
    NAME       : Mohammad Mirza Qusyairi
    STUDENT ID : 1301194203
**/

mytype create_data() {
    /**
     TODO:  receive input FROM USER
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    cout<<"Input ID : "; cin>>d.ID;
    cout<<"Input Nama : "; cin>>d.name;
    cout<<"Input Ranking : "; cin>>d.rank;
    cout<<"Input Score : "; cin>>d.score;
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
    cout<<d.ID<<" | "<<d.name<<" | "<<d.rank<<" | "<<d.score<<endl;
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
    cout<<"Input ganti nama : "; cin>>d.name;
    cout<<"Input ganti rank : "; cin>>d.rank;
    cout<<"Input ganti score : "; cin>>d.score;
    // ===========================
}

