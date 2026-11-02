
#include "my_data.h"

/**
    CLASS      : IF-49-07
    NAME       : Adra Athallah Octaviadi
    STUDENT ID : 103012500159
**/

mytype create_data() {
    /**
     TODO:  receive input FROM USER
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    cout << "Input ID    : "; cin >> d.id;
    cout << "Input Name  : "; cin >> d.name;
    cout << "Input Rank  : "; cin >> d.rank;
    cout << "Input Score : "; cin >> d.score;
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
    cout << "Name  : " << d.name << endl;
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
    cout << "Input New Name  : "; cin >> d.name;
    cout << "Input New Rank  : "; cin >> d.rank;
    cout << "Input New Score : "; cin >> d.score;
    // ===========================
}

