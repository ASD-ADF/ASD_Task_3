 
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
    cout << "Enter name: ";
    cin >> d.name;
    cout << "Enter ID: ";
    cin >> d.ID;
    cout << "Enter rank: ";
    cin >> d.rank;
    cout << "Enter score: ";
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
    cout << "Name: " << d.name << endl;
    cout << "ID: " << d.ID << endl;
    cout << "Rank: " << d.rank << endl;
    cout << "Score: " << d.score << endl;




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
    



    // ===========================
}

