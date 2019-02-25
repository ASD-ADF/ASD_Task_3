
#include "my_data.h"

/**
    CLASS      : IF-42-04
    NAME       : Nabil Anwar Fauzi
    STUDENT ID : 1301183340
**/

mytype create_data() {
    /**
     TODO:  receive input FROM USER
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    cout << "masukan ID peserta\n";
    cin >> d.ID;
    cout << "masukan nama peserta\n";
    cin >> d.name;
    cout << "masukan rank peserta\n";
    cin >> d.rank;
    cout << "masukan score peserta\n";
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
    cout << "nama peserta :\n" << d.name;
    cout << "ID peserta :\n" << d.ID;
    cout << "nama rank :\n" << d.rank;
    cout << "nama score :\n" << d.score;


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
    cout << "masukan nama pengganti\n";
    cin >> d.name;
    cout >> "masukan rank baru\n";
    cin >> d.rank;
    cout >> "masukan score baru\n"
    cin >> d.score;

    // ===========================
}

