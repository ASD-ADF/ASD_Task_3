
#include "my_data.h"

/**
    CLASS      : IF-42-04
    NAME       : Ajeung Angsaweni
    STUDENT ID : 1301180108
**/

mytype create_data() {
    /**
     TODO:  receive input FROM USER
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    //your code here
    cout<<"ID : ";
    cin>>d.id;
    cout<<"Name : ";
    cin>>d.name;
    cout<<"Rank : ";
    cin>>d.Rank;
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
    //your code here
    cout<<"ID : "<<d.id<<endl;
    cout<<"Name : "<<d.name<<endl;
    cout<<"Rank : "<<d.Rank<<endl;
    cout<<"Score : "<<d.score<<endl;

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
    //your code here
    cout<<"Edit ID : ";
    cin>>d.id;
    cout<<"Edit Name : ";
    cin>>d.name;
    cout<<"Edit Rank : ";
    cin>>d.Rank;
    cout<<"Edit Score : ";
    cin>>d.score;


    // ===========================
}

