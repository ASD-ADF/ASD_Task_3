
#include "my_data.h"

/**
    CLASS      : IF-42-04
    NAME       : Rizal Muhammad Fauzan
    STUDENT ID : 1301180150
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
    cin >> d.Id;
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
    cout << "Id : " << d.Id << endl;
    cout << "Name : " << d.name << endl;
    cout << "Rank : " << d.Rank << endl;
    cout << "Score : " << d.score << endl;
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

