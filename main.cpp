#include <iostream>
#include "list.h"
#include "operation.h"
#include "my_data.h"

using namespace std;

void mainMenu();
List L, L_passed;
List L2;

int main() {
    createList(L);
    createList(L_passed);
    createList(L2);

    mainMenu();

    return 0;
}

void mainMenu() {
    address P;
    infotype X;
    mytype data;
    bool exit;
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
    do {
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
        switch(choice) {
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
            cout<<"Masukkan ID yang dicari : ";
            cin>>data.id;
            P=findElm(L,data);
            if(P==NULL)
            {
                cout<<"ID tidak ditemukan";
            }
            else
            {
                data = info(P);
                view_data(data);
            }
            break;
        case 4:
            cout<<"Masukkan ID yang ingin diubah : ";
            cin >> data.id;
            P = findElm(L, data);
            if (P == NULL)
            {
                cout << "ID tidak ditemukan";
            }
            else
            {
                edit_data(data);
                info(P) = data;
            }
        case 5:
            if(first(L)!=NULL)
            {
            cout << "Masukkan ID yang ingin dihapus: ";
            cin >> data.id;
            cout<<endl;
            deletebyID(L,data.id);
            cout<<"Data Dihapus"<<endl;
            }else
            {
                cout<<"List is Kosong"<<endl;
            }
            break;
        case 6:
             savePassedMember(L,L2);
            break;
        case 7:
            cout<<"Passed Member : ";
            printInfo(L2);
            break;
        case 0:
            cout<<"EXIT..."<<endl;
            exit = false;
            break;
        }

    } while(exit);

    //----------------------------------------
}
