#include <iostream>
#include "list.h"
#include "operation.h"
#include "my_data.h"

using namespace std;

void mainMenu();
List L;

int main() {
    createList(L);

    mainMenu();

    return 0;
}

void mainMenu() {
    address P;
    infotype X;
    mytype Z;
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
    do {
        cout<<"Menu"<<endl;
        cout<<"1. insert"<<endl;
        cout<<"2. view data"<<endl;
        cout<<"3. find and view"<<endl;
        cout<<"4. find and edit"<<endl;
        cout<<"5. find and delete"<<endl;
        cout<<"0. exit"<<endl;
        cout<<"input choice: ";
        cin>>choice;
        switch(choice) {
        case 1:
            X = create_data();
            P = allocate(X);
            insertAndSort(L,P);
            break;
        case 2:
            printInfo(L);
            break;

        case 3:
            if (first(L)=NULL)
            {
                cout<<"List Kosong"<<endl;
                break;
            }
            cout<<"ID yg dicari : ";
            cin>>Z.id;
            cout<<endl;
            P=findElm(L,Z);
            cout<<"ID   : "<<info(P).id<<endl;
            cout<<"Nama : "<<info(P).nama<<endl;
            cout<<"NIM  : "<<info(P).nim<<endl;
            cout<<"IPK  : "<<info(P).ip<<endl;
            break;

        case 4:
            if(first(L)==NULL)
            {
                cout<<"List Kosong"<<endl;
                break;
            }
            cout<<"ID yg ingin diedit : ";
            cin>>X.id;
            P=findElm(L,X);
            if (P==NULL)
            {
                cout<<"ID tidak ditemukan"<<endl;
            }
            else
            {
                edit_data(info(P));
                cout<<endl;
            }
            break;

        case 5:
            if(first(L)==NULL)
            {
                cout<<"List Kosong"<<endl;
                break;
            }
            cout<<"ID yg ingin dihapus : ";
            cin>>X.id;
            deletebyID(L,X);
            break;

        case 0 :
            return;
        }
    } while(true);

    //----------------------------------------
}
