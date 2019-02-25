#include <iostream>
#include "list.h"
#include "operation.h"
#include "my_data.h"

using namespace std;

void mainMenu();
List L, L_passed;
mytype data;

int main()
{
    createList(L);
    createList(L_passed);

    mainMenu();

    return 0;
}

void mainMenu()
{
    address P;
    infotype X;
    /**
    * IS : List has been created
    * PR : prints menu to user
    *       1. insert new data
    *       2. print all data (List L)
    *       3. find and print a data by ID
    *       4. edit data by ID
    *       5. delete data by ID
    *       6. separate passed member
    *       7. print all data (List L2)
    *       0. exit
    */
    //-------------your code here-------------
    int choice;
    bool exit = true;
    do
    {
        cout<<"Menu"<<endl;
        cout<<"1. Insert"<<endl;
        cout<<"2. View Member"<<endl;
        cout<<"3. Find and View"<<endl;
        cout<<"4. Find and Edit"<<endl;
        cout<<"5. Find and Delete"<<endl;
        cout<<"6. Separate Passed Member"<<endl;
        cout<<"7. View Passed Member"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"Input Choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            X = create_data();
            P = allocate(X);
            insertFirst(L,P);
            insertAndSort(L,X);
            break;
        case 2:
            printInfo(L);
            break;
        case 3:
            cout << "Masukkan ID dari data yang ingin dicari : ";
            cin >> data.ID;
            P = findElm(L, data);
            if (P != NULL)
            {
                view_data(info(P));
            }
            else
            {
                cout << "ID tidak ditemukan." << endl;
            }
            break;
        case 4:
            cout << "Masukkan ID dari data yang ingin diubah : ";
            cin >> data.ID;
            P = findElm(L, data);
            if (P != NULL)
            {
                edit_data(info(P));
            }
            else
            {
                cout << "ID tidak ditemukan." << endl;
            }
            break;
        case 5:
            cout << "Masukkan ID dari data yang ingin dihapus : ";
            cin >> data.ID;
            deletebyID(L, data.ID);
            break;
        case 6:
            savePassedMember(L, L_passed);
            break;
        case 7:
            printInfo(L_passed);
            break;
        case 0:
            exit = false;
            break;
        }
    }
    while(exit);

    //----------------------------------------
}
