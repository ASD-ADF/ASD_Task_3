#include "my_data.h"

/**
    CLASS      :    IF-42-04
    NAME       :    HAURA ATHAYA SALKA
    STUDENT ID :    1301183454
**/

mytype create_data()
{
    /**
     TODO:  receive input FROM USER
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    cout<<endl;
    cout<<"Insert ID: ";
    cin>>d.id;
    cout<<"Insert Name: ";
    cin>>d.name;
    cout<<"Insert Ranking: ";
    cin>>d.ranking;
    cout<<"Insert Score: ";
    cin>>d.score;
    cout<<endl;
    // ===========================
    return d;
}

void view_data(mytype d)
{
    /**
     TODO:  view the content of data d
     it will be called when print_info function is invoked
    */

    // ===========================
    // YOUR CODE HERE
    cout<<endl;
    cout<<"ID: "<<d.id;
    cout<<endl;
    cout<<"Name: "<<d.name;
    cout<<endl;
    cout<<"Ranking: "<<d.ranking;
    cout<<endl;
    cout<<"Score: "<<d.score;
    cout<<endl;
    cout<<endl;
    // ===========================
}


void edit_data(mytype &d)
{
    /**
     * TODO:  edit the value of data d,
     *       receive input FROM USER
     *       the ID must NOT be modified
    */

    // ===========================
    // YOUR CODE HERE
    cout<<endl;
    cout<<"Edit ID: ";
    cin>>d.id;
    cout<<"Edit Name: ";
    cin>>d.name;
    cout<<"Edit Ranking: ";
    cin>>d.ranking;
    cout<<"Edit Score: ";
    cin>>d.score;
    cout<<endl;
    // ===========================
}
