
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
    cout<<"Your ID: ";
    cin>>d.ID;
    cout<<"Your name: ";
    cin>>d.name;
    cout<<"Your rank: ";
    cin>>d.rank;
    cout<<"Your score: ";
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
    cout<<"=============================="<<endl;
    cout<<"Your ID: "<<d.ID<<endl;
    cout<<"Your name: "<<d.name<<endl;
    cout<<"Your rank: "<<d.rank<<endl;
    cout<<"Your score: "<<d.score<<endl;
    cout<<"=============================="<<endl;
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
    cout<<"Your New name: ";
    cin>>d.name;
    cout<<endl;
    cout<<"Your New rank: ";
    cin>>d.rank;
    cout<<endl;
    cout<<"Your New score: ";
    cin>>d.score;
    cout<<endl;
    // ===========================
}

