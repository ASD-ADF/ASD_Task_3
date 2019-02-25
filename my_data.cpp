#include <iostream>
#include "my_data.h"
#include "list.h"

/**
    CLASS      : IF-42-04
    NAME       : MUHAMMAD AFIF RAIHAN
    STUDENT ID : 1301184220
**/

mytype create_data() {
    /**
     TODO:  receive input FROM USER
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    cout << "ID anda : ";
    cin >> d.ID;
    cout << "Nama anda : ";
    cin >> d.name;
    cout << "Rangking anda : ";
    cin >> d.ranking;
    cout << "Score anda : ";
    cin >> d.score;
    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
     it will be called when print_info function is invoked
    */
    // ===========================
    // YOUR CODE HERE
    cout << "ID : " << d.ID << endl;
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
    cout <<"ID       : "<< d.ID<<endl;
    cout <<"Nama     : "<< d.name<<endl;
    cout <<"Rangking : "<< d.ranking<<endl;
    cout <<"Score    : "<< d.score<<endl;
    cout << endl;
    cout << "Masukkan Data Baru  : "<<endl;
    cout <<"ID anda: " << d.ID<<endl;
    cout << "Nama Baru : ";
    cin >> d.name;
    cout << "Ranking Baru : ";
    cin >> d.ranking;
    cout << "Score Baru : ";
    cin >> d.score;

    // ===========================
}

