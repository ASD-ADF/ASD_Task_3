
#include "my_data.h"

/**
    CLASS      : IF-43-05
    NAME       : Arpriansah Yonathan
    STUDENT ID : 1301194112
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
    cin >> d. ID;
    cout << "Masukkan nama : ";
    cin >> d.name;
    cout << "Masukkan rank : ";
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
    cout << "ID : " << d.ID << " ||  Nama :" << d.name << " ||  Rank : " << d.rank << " ||  Score : " << d.score << endl;


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
    cout << "Masukkan nama yang baru : ";
    cin >> d.name;
    cout << "Masukkan rank yang baru : ";
    cin >> d.rank;
    cout << "Masukkan score yang baru : ";
    cin >> d.score;




    // ===========================
}

