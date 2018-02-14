
#include "my_data.h"

/**
    CLASS      : IF 40 INT
    NAME       : RANDY KUSTIWA KOESMA
    STUDENT ID : R1301162472
**/

mytype create_data() {
    /**
     TODO:  receive input from user
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE

    cout << " == " << endl;
    cout << " Input ID      : "; cin >> d.id;
    cout << " Input Name    : "; cin >> d.name;
    cout << " Input Class   : "; cin >> d.clas;
    cout << " Input Score   : "; cin >> d.score;
    cout<<"your code here"<<endl;




    // ===========================
    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
    */

    // ===========================
    // YOUR CODE HERE
    cout << " ==>><<==>><<==>><<== " << endl;
    cout << " ID    : " << d.id << endl;
    cout << " Name  : " << d.name << endl;
    cout << " Class : " << d.clas << endl;
    cout << " Score : " << d.score << endl;
    cout<<"your code here"<<endl;




    // ===========================
}


void edit_data(mytype &d) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

    // ===========================
    // YOUR CODE HERE
    string BeforeUpdateName = d.name;
    cout << " ==>><<==<<>>==>><<== " << endl;
    cout << " Input New Name    : ";
    cin >> d.name;
    cout << " Input New Class   : ";
    cin >> d.clas;
    cout << " Input New Score   : ";
    cin >> d.score;
    cout << BeforeUpdateName << " Update    : " << d.name <<endl;
    cout << endl;
        cout<<"your code here"<<endl;




    // ===========================
}

