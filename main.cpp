#include <iostream>
#include "list.h"
#include "operation.h"
#include "my_data.h"

using namespace std;

void mainMenu();
List L;

int main()
{
    createList(L);

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
    *       2. print all data
    *       3. find and print a data by ID
    *       4. edit data by ID
    *       5. delete data by ID
    *       0. exit
    */
    //-------------your code here-------------
    int choice;
    do
    {
        cout<<"Menu"<<endl;
        cout<<"1. insert"<<endl;
        cout<<"2. view data"<<endl;
        cout<<"3. find and view"<<endl;
        cout<<"4. find and edit"<<endl;
        cout<<"5. find and delete"<<endl;
        cout<<"0. exit"<<endl;
        cout<<"input choice: ";
        cin>>choice;
        if (choice == 0)
        {
            cout<<endl;
            cout<<"Terima Kasih"<<endl;
            break;
        }
        switch(choice)
        {
        case 1:
            X = create_data();
            P = allocate(X);
            insertFirst(L,P);
            break;
        case 2:
            printInfo(L);
            break;
        case 3:
            cout<<"ID yang akan dicari: ";
            cin>>X.id;
            P = findElm(L,X);
            view_data(info(P));
            break;
        case 4:
            cout<<"ID yang akan diedit: ";
            cin>>X.id;
            P = findElm(L,X);
            edit_data(info(P));
            break;
        case 5:
            cout<<"ID yang akan didelete: ";
            cin>>X.id;
            P = findElm(L,X);
            deletebyID(L,X);
            break;
        }
    }
        while(true);
}

//----------------------------------------
