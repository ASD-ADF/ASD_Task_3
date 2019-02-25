
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
    cout << "Input ID : ";
    cin >> d.id;
    cout << "Input Nama : ";
    cin >> d.name;
    cout << "Input Rank : ";
    cin >> d.rank;
    cout << "Input Score : ";
    cin >> d.score;
    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
     it will be called when print_info function is invoked
    */

    cout<<"ID : "<<d.id<<endl;
    cout<<"NAME : "<<d.name<<endl;
    cout<<"RANK : "<<d.rank<<endl;
    cout<<"SCORE : "<<d.score<<endl;
}


void edit_data(mytype &d) {
    /**
     * TODO:  edit the value of data d,
     *       receive input FROM USER
     *       the ID must NOT be modified
    */
    cout<<"ID : ";cin>>d.id;cout<<endl;
    cout<<"NAME : ";cin>>d.name;cout<<endl;
    cout<<"RANK : ";cin>>d.rank;cout<<endl;
    cout<<"SCORE : ";cin>>d.score;cout<<endl;
}

