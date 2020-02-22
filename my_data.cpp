
#include "my_data.h"

/**
    CLASS      : IF-43-05
    NAME       : AKMAL MUHAMAD FAZA
    STUDENT ID : 1301190436
**/

mytype create_data() {
    /**
     TODO:  receive input FROM USER
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
     cout << "Masukkan ID : ";
    cin >> d.ID;
    cout << "Masukkan Nama : ";
    cin >> d.name;
    cout << "Masukkan ranking : ";
    cin >> d.rank;
    cout << "Masukkan score : ";
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
     cout << d.ID << " - " << d.name << " - "<< d.rank << " - " << d.score << endl;
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
    cout << "Masukkan pergantian nama : ";
    cin >> d.name;
    cout << "Masukkan pergantian rank : ";
    cin >> d.rank;
    cout << "Masukkan pergantian score : ";
    cin >> d.score;
    // ===========================
}

