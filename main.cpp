#include <iostream>
#include "list.h"
#include "operation.h"
#include "my_data.h"

using namespace std;

void mainMenu();
List L, L_passed;

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
    mytype data;
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
    do
    {
        cout<<"Menu"<<endl;
        cout<<"1. insert"<<endl;
        cout<<"2. view member"<<endl;
        cout<<"3. find and view"<<endl;
        cout<<"4. find and edit"<<endl;
        cout<<"5. find and delete"<<endl;
        cout<<"6. separate passed member"<<endl;
        cout<<"7. view passed member"<<endl;
        cout<<"0. exit"<<endl;
        cout<<"input choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            X = create_data();
            insertAndSort(L, X);
            break;
        case 2:
            printInfo(L);
            break;
        case 3:
            cout << "Masukan ID yang dicari : ";
            cin >> data.id;
            P = findElm(L, data);
            if(P == NULL)
            {
                cout << "ID tidak ditemukan.\n";
            }
            else
            {
                data = info(P);
                view_data(data);
            }
            break;
        case 4:
            cout << "Masukan ID yang ingin diubah : ";
            cin >> data.id;
            P = findElm(L, data);
            if (P == NULL)
            {
                cout << "ID tidak ditemukan.\n";
            }
            else
            {
                edit_data(data);
                info(P) = data;
            }
            break;
        case 5:
            cout << "Masukan ID yang ingin dihapus : ";
            cin >> data.id;
            deletebyID(L, data.id);
            break;
        case 6:
            savePassedMember(L, L_passed);
            cout << "Update List > 80" << endl;
            break;
        case 7:
            printInfo(L_passed);
            break;
        }
    }
    while(choice != 0);

    //----------------------------------------
}
