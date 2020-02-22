
#include "my_data.h"

/**
    CLASS      : IF-43-05
    NAME       : I WAYAN ADI WAHYUDI
    STUDENT ID : 1301194084
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
    cout<<"Nama : ";
    cin>>d.name;
    cout<<"Rank : ";
    cin>>d.rank;
    cout<<"Score : ";
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
   cout<<d.ID<<" "<<d.name<<" "<<d.rank<<" "<<d.score<<endl;




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
    cout<<"Edit Nama : ";
    cin>>d.name;
    cout<<"Edit Rank : ";
    cin>>d.rank;
    cout<<"Edit Score : ";
    cin>>d.score;




    // ===========================
}

