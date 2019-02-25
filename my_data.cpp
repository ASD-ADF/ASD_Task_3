
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
    // ===========================
    cout << "masukkan id : ";
    cin >> d.id;
    cout<<"masukkan nama: ";
    cin>>d.name;
    cout<< "masukkan rank: ";
    cin>>d.rank;
    cout<< "masukkan score: ";
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
    cout << "id : " << d.id << endl;
    cout << "nama :" <<d.name<<endl;
    cout << "rank :" << d.rank<<endl;
    cout <<"score:" << d.score <<endl;
    // ===========================
}


void edit_data(mytype &d) {
    /**
     * TODO:  edit the value of data d,
     *       receive input FROM USER
     *       the ID must NOT be modified
    */

    // ===========================
    cout << "nama : ";
    cin >> d.name ;
    cout << "rank :";
    cin >>d.rank;
    cout << "score:";
    cin>> d.score;
    // ===========================
}

