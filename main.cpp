#include <iostream>
#include "list.h"
#include "operation.h"
#include "my_data.h"

using namespace std;

void mainMenu();
List L, L_passed;


int main() {
    createList(L);
    createList(L_passed);

    mainMenu();

    return 0;
}

void mainMenu() {
    address P;
    infotype x;
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
    bool lanjut = true;
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
            x = create_data();
            insertAndSort(L,x);
            break;
        case 2:
            printInfo(L);
            break;
        case 3:
            cout<<"Search ID : ";
            cin>>x.ID;
            P = findElm(L,x);
            if (P!=NULL){
                view_data(info(P));
            } else {
                cout<<"Data tidak ditemukan"<<endl;
            }
            break;
        case 4:
            cout<<"Search ID : ";
            cin>>x.ID;
            if (P!=NULL){
                P = findElm(L,x);
                edit_data(info(P));
            } else {
                cout<<"Data tidak ditemukan"<<endl;
            }
            break;
        case 5:
            cout<<"Search ID : ";
            cin>>x.ID;
            if (P!=NULL){
                P = findElm(L,x);
                deletebyID(L,x.ID);
            } else {
                cout<<"Data tidak ditemukan"<<endl;
            }
            break;
        case 6:
            createList(L_passed);
            savePassedMember(L,L_passed);
            break;
        case 7:
            printInfo(L_passed);
            break;
        case 0:
            lanjut = false;
            break;
        }
    } while(lanjut == true);

    //----------------------------------------
}
