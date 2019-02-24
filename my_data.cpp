
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
    cout << "ID : ";
    cin >> d.id;
    cout << "Nama : ";
    cin >> d.name;
    cout << "Rank : ";
    cin >> d.rank;
    cout << "Score : ";
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
    cout << "ID : " << d.id << endl;
    cout << "Nama : " << d.name << endl;
    cout << "Rank : " << d.rank << endl;
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
    // YOUR CODE HERE
    cout<<"---EDIT---"<<endl;
    cout<<""<<endl;
    cout << "Nama : ";
    cin >> d.name;
    cout << "Rank : ";
    cin >> d.rank;
    cout << "Score : ";
    cin >> d.score;
    // ===========================
}

