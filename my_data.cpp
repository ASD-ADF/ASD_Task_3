
#include "my_data.h"

/**
    CLASS      : IF-43-o5
    NAME       : Muhammad Sulthon Asramanggala
    STUDENT ID : 130194008
**/

mytype create_data() {
    /**
     TODO:  receive input FROM USER
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE

    cout<< "ID mahasiswa : ";
    cin<< d.ID;
    cout<< "Nama Mahasiswa : ";
    cin<< d.name;
    cout << "Rangking Mahasiswa : ";
    cin >> d.ranking;
    cout << "Score Mahasiswa : ";
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
    your code here
    cout << " ID : " << d.ID<<endl;
    cout << "Nama : " << d.name << endl;
    cout << "Rank : " << d.ranking << endl;
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
        your code here
    cout << "ID       : " << d.ID<<endl;
    cout << "Nama     : " << d.name<<endl;
    cout << "Rangking : " << d.ranking<<endl;
    cout << "Score    : " << d.score<<endl;
    cout << endl;
    cout << "Masukkan Data Baru  : "<<endl;
    cout << "ID anda: " << d.ID<<endl;
    cout << "Nama Baru : ";
    cin >> d.name;
    cout << "Ranking Baru : ";
    cin >> d.ranking;
    cout << "Score Baru : ";
    cin >> d.score;



    // ===========================
}

