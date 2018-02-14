
#include "my_data.h"

/**
    CLASS      : IF-39-INT
    NAME       : ALIFIANDO DESTARA YUSUF
    STUDENT ID : 1301153621
**/

mytype create_data()
{
    /**
     TODO:  receive input from user
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    cout<<"INPUT ID    : ";
    cin>>d.id;
    cout<<"INPUT ITEM  : ";
    cin>>d.it;
    cout<<"INPUT PRICE : ";
    cin>>d.pr;
    // ===========================
    return d;
}

void view_data(mytype d)
{
    /**
     TODO:  view the content of data d
    */

    // ===========================
    // YOUR CODE HERE
    cout<<"ID    : "<<d.id<<endl;
    cout<<"Item  : "<<d.it<<endl;
    cout<<"Price : "<<d.pr<<endl;
    // ===========================
}


void edit_data(mytype &d)
{
    /**
     TODO:  edit the value of data d,
            the ID must not be modified
    */

    // ===========================
    // YOUR CODE HERE
    cout<<"Item  : ";
    cin>>d.it;
    cout<<"Price : ";
    cin>>d.pr;
    // ===========================
}

