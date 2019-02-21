#include "my_data.h"

/**
CLASS      :
IF 42-04
NAME       :
Ilham Rizki Hidayat
STUDENT ID : 1301184123
**/

mytype create_data()
{
    /**
     TODO:  receive input FROM USER
            and assign the value of new data
    */
    mytype d;
    cout << "Masukan ID : ";
    cin >> d.id;
    cout << "Masukan Nama : ";
    cin >> d.nama;
    cout << "Masukan Peringkat : ";
    cin >> d.ranking;
    cout << "Masukan Skor : ";
    cin >> d.score;
    return d;
}

void view_data(mytype d)
{
    /**
     TODO:  view the content of data d
     it will be called when print_info function is invoked
    */
    cout << "\n=======================================\n";
    cout << "ID : " << d.id << endl;
    cout << "Nama : " << d.nama << endl;
    cout << "Peringkat : " << d.ranking << endl;
    cout << "Skor : " << d.score << endl;
    cout << "=======================================\n";
}


void edit_data(mytype &d)
{
    /**
     * TODO:  edit the value of data d,
     *       receive input FROM USER
     *       the ID must NOT be modified
    */
    cout << "Nama : ";
    cin >> d.nama;
    cout << "Peringkat : ";
    cin >> d.ranking;
    cout << "Skor : ";
    cin >> d.score;
}
