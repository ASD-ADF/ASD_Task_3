 
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
    mytype d;
    cout << "Masukkan ID    : ";
    cin >> d.id;
    cout << "Masukkan Nama  : ";
    cin.ignore();
    getline(cin, d.name);
    cout << "Masukkan Rank  : ";
    cin >> d.rank;
    cout << "Masukkan Score : ";
    cin >> d.score;
    return d;



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
    cout << "ID    : " << d.id << endl;
    cout << "Nama  : " << d.name << endl;
    cout << "Rank  : " << d.rank << endl;
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
       cout << "--- Edit Data (ID: " << d.id << " tidak dapat diubah) ---" << endl;
    cout << "Masukkan Nama baru  : ";
    cin.ignore();
    getline(cin, d.name);
    cout << "Masukkan Rank baru  : ";
    cin >> d.rank;
    cout << "Masukkan Score baru : ";
    cin >> d.score;



    // ===========================
}

