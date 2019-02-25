#include "list.h"
#include "my_data.h"

/**
    CLASS      : IF -42 -04
    NAME       : Ghina Khoerunnisa
    STUDENT ID : 1301181066
**/

mytype create_data() {
    /**
     TODO:  receive input FROM USER
            and assign the value of new data
    */
    mytype d;
    // ===========================
    cout<<"Input ID : ";
    cin>>d.ID;
    cout<<"Input Nama : ";
    cin>>d.name;
    cout<<"Input Ranking : ";
    cin>>d.Rank;
    cout<<"Input Score : ";
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
    cout<<"ID : "<<d.ID<<" "<<endl;
    cout<<"Nama : "<<d.name<<" "<<endl;
    cout<<"Ranking : "<<d.Rank<<" "<<endl;
    cout<<"Score : "<<d.score<<" "<<endl;
    // ===========================
}


void edit_data(mytype &d) {
    /**
     * TODO:  edit the value of data d,
     *       receive input FROM USER
     *       the ID must NOT be modified
    */

    // ===========================

    cout<<"Edit Nama : "<<endl;
    cin>>d.name;
    cout<<"Edit Rank : "<<endl;
    cin>>d.Rank;
    cout<<"Edit Score : "<<endl;
    cin>>d.score;
    // ===========================
}

