
#include "my_data.h"

/**
    CLASS      :
    NAME       :
    STUDENT ID :
**/

mytype create_data() {
    /**
     TODO:  receive input FROM USER
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    cout << "Masukan ID : ";
    cin >> d.ID;
    cout << "Masukan Nama : ";
    cin >> d.name;
    cout << "Masukan Peringkat : ";
    cin >> d.Rank;
    cout << "Masukan Skor : ";
    cin >> d.score;
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
    cout << "======================================="<<endl;
    //cout<<endl;
    cout << "| ID : " << d.ID<<endl;
    cout << "| Name : " << d.name<<endl;
    cout << "| Rank : " << d.Rank<<endl;
    cout << "| Score : " << d.score <<endl;
    //cout<<endl;
    cout << "======================================="<<endl;
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
    cout << "Name   : ";
    cin >> d.name;
    cout << "Rank   : ";
    cin >> d.Rank;
    cout << "Score  : ";
    cin >> d.score;
    // ===========================
}

