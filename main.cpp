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
        switch(choice)
        {
        case 1:
        {
            X = create_data();
            P = allocate(X);
            insertFirst(L,P);
            break;
        }
        case 2:
        {
            printInfo(L);
            break;
        }
        case 3:
        {
            //infotype z;
            cout<<"Masukkan id yang ingin dicari datanya = ";
            cin>>X.ID;
            cout<<endl;
            findElm(L,X);
            cout<<"=============Hasil Cari==================="<<endl;
            address w=findElm(L,X);
            if(w==NULL)
            {
                cout<<"data tidak ditemukan";
            }
            else
            {
                view_data(X);
            }
            break;
        }
        case 4:
        {
            cout<<"Masukkan id yang datanya ingin diedit = ";
            cin>>X.ID;
            cout<<endl;
            findElm(L,X);
            cout<<"----------------edit data---------------------";
            address w=findElm(L,X);
            if(w==NULL)
            {
                cout<<"Data tidak ditemukan";
            }
            else
            {
                cout<<"Masukkan nama baru = ";
                cin>>w->info.name;
                cout<<"Masukkan kelas yang baru = ";
                cin>>w->info.kelas;
                cout<<"Masukkan IPK yang baru = ";
                cin>>w->info.IPK;
            }
            break;
        }
        case 5:
        {
            cout<<"Masukkan id yang ingin dihapus = ";
            cin>>X.ID;
            deletebyID(L,X);
            break;
        }
        }
    }
    while(true);

    //----------------------------------------
}
