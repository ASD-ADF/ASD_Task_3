
#include "my_data.h"

/**
    CLASS      : IF-42-04
    NAME       : KOMANG JNANA SHINDU PUTRA
    STUDENT ID : 1301184092
**/

mytype create_data() {
    /**
     TODO:  receive input FROM USER
            and assign the value of new data
    */
    mytype d;
    // ===========================
    //
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
    //
    cout << "======================================="<<endl;
    cout << "ID : " << d.ID << endl;
    cout << "Name : " << d.name << endl;
    cout << "Rank : " << d.Rank << endl;
    cout << "Score : " << d.score << endl;
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
    //
    cout << "Name   : ";
    cin >> d.name;
    cout << "Rank   : ";
    cin >> d.Rank;
    cout << "Score  : ";
    cin >> d.score;
    // ===========================
}

