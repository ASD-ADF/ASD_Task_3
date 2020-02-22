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
            P = allocate(X);
            insertFirst(L, P);
            break;
        case 2:
            printInfo(L);
            break;
        case 3:
        {

            infotype id;
            cout<<"Search by ID : ";
            cin>>id.ID;
            cout<<endl;
            address a = findElm(L, id);
            if( a == NULL)
            {
                cout<<"NOT FOUND"<<endl;
            }
            else
            {
                cout<<"----DATA----"<<endl;
                cout<<" ID    : "<<a->info.ID<<endl;
                cout<<" Name  : "<<a->info.name<<endl;
                cout<<" Rank  : "<<a->info.rank<<endl;
                cout<<" Score : "<<a->info.score<<endl;
            }
        }
        break;
        case 4:
            {
                infotype id;
                cout<<"Search by ID : ";
                cin>>id.ID;
                address cari = findElm(L, id);
                edit_data(id);
                info(cari) = id;
            }
            break;

        case 5 :
        {
            infotype b;
            address Search;
            cout<<"Search by ID : ";
            cin>>b.ID;
            Search = findElm(L, b);
            if(Search == first(L))
            {
                deleteFirst(L, Search);
            }
            else if(Search == last(L))
            {
                deleteLast(L, Search);
            }
            else
            {
                deleteAfter(L, prev(Search), Search);
            }
            cout<<"DATA TELAH TERHAPUS"<<endl;
        }
        break;
        case 6 :
            {
                savePassedMember(L, L_passed);

            }
            break;
        case 7 :
            {
                printInfo(L_passed);
            }
            break;

        }
        cout<<endl;
    }
    while(choice != 0);


    //----------------------------------------
}
