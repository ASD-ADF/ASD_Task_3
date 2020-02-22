
#include "my_data.h"

/**
    CLASS      : IF 43 05
    NAME       : BAGJA 9102 KURNIAWAN
    STUDENT ID : 1301194020
**/

mytype create_data() {
    /**
     TODO:  receive input FROM USER
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    cout<<"ID : ";
    cin>>d.ID;
    cout<<"Name : ";
    cin>>d.Name;
    cout<<"Rank : ";
    cin>>d.Rank;
    cout<<"Score : ";
    cin>>d.Score;
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
    cout<<"======================"<<endl;
    cout<<"ID : "<< d.ID<<endl;
    cout<<"Name : "<< d.Name<<endl;
    cout<<"Rank : "<<d.Rank<<endl;
    cout<<"Score : "<<d.Score<<endl;
    cout<<"======================"<<endl;
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
    cout<<"ID : ";
    cin>>d.ID;
    cout<<"Name : ";
    cin>>d.Name;
    cout<<"Rank : ";
    cin>>d.Rank;
    cout<<"Score : ";
    cin>>d.Score;
    // ===========================
}

