
#include "my_data.h"

/**
    CLASS      : IF-42-04
    NAME       : Mochammad Ivan Adhyaksa Pradana
    STUDENT ID : 1301184080
**/

mytype create_data() {
    /**
     TODO:  receive input FROM USER
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
    cout<<"Masukkan Data"<<endl;
    cout<<"ID: ";
    cin>>d.ID;
    cout<<"Nama: ";
    cin>>d.Name;
    cout<<"Ranking: ";
    cin>>d.Ranking;
    cout<<"Score: ";
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
    cout<<"ID: "<<d.ID<<endl;
    cout<<"Nama: "<<d.Name<<endl;
    cout<<"Ranking: "<<d.Ranking<<endl;
    cout<<"Score: "<<d.Score<<endl;
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
        cout<<"Edit Data"<<endl;
        cout<<"Nama: ";
        cin>>d.Name;
        cout<<"Ranking: ";
        cin>>d.Ranking;
        cout<<"Score: ";
        cin>>d.Score;
    // ===========================
}

