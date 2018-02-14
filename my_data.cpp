
#include "my_data.h"

/**
    CLASS      :if-40-int
    NAME       :muhamad rikbal ikhsani
    STUDENT ID :1301163598
**/

mytype create_data() {
    /**
     TODO:  receive input from user
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    cout<<"inputan data users"<<endl;

    cout<<"input your name : ";
    cin>>d.yname;
    cout<<"input your id   : ";
    cin>>d.yid;
    cout<<"input your class : ";
    cin>>d.yclas1;
    cout<<"input your score : ";
    cin>>d.yscore;





    // ===========================
    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
    */

    // ===========================
    // YOUR CODE HERE
    cout<<"data of users"<<endl;

    cout<<"your name here : "<<d.yname<<endl;
    cout<<"your id here   : "<<d.yid<<endl;
    cout<<"your class here : "<<d.yclas1<<endl;
    cout<<"your score here : "<<d.yscore<<endl;




    // ===========================
}


void edit_data(mytype &d) {
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

    // ===========================
    // YOUR CODE HERE
        cout<<"Data Change"<<endl;

        cout<<"input your new data of name : ";
        cin>>d.yname;
        cout<<"input your new data of class : ";
        cin>>d.yclas1;
        cout<<"input your new data of score : ";
        cin>>d.yscore;
        cout<<endl;

    // ===========================
}

