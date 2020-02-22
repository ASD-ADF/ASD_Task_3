
#include "my_data.h"

/**
    CLASS      : IF-43-05
    NAME       : MUHAMMAD KAMIL HASAN
    STUDENT ID : 1301190420
**/

mytype create_data() {
    /**
     TODO:  receive input FROM USER
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE +62HERE
    cout<<"input ID :";
    cin>>d.ID;
    cout<<"input name :";
    cin>>d.name;
    cout<<"input rank :";
    cin>>d.rank;
    cout<<"input score :";
    cin>>d.score;
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
    cout<<"ID :"<<d.ID<<"name :"<<d.name<<"rank :"<<d.rank<<"score :"<<d.score<<endl;
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
    cout<<"ID can't be modified";
    cout<<"input name :";
    cin>>d.name;
    cout<<"input rank :";
    cin>>d.rank;
    cout<<"input score :";
    cin>>d.score;
    // ===========================
}

