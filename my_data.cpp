
#include "my_data.h"

/**
    CLASS      : IF-43-05
    NAME       : AZIZAH CAHYA KEMILA
    STUDENT ID : 1301194103
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
        cout<<" ID    : "<<d.ID<<endl;
        cout<<" Name  : "<<d.name<<endl;
        cout<<" Rank  : "<<d.rank<<endl;
        cout<<" Score : "<<d.score<<endl;
        cout<<endl;





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

            cout<<"New Name : ";
            cin>>d.name;
            cout<<"New Rank : ";
            cin>>d.rank;
            cout<<"New Score : ";
            cin>>d.score;



    // ===========================
}
