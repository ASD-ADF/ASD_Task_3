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
            insertAndSort(L,X);
            break;
        case 2:
            cout<<"Raw Data Base"<<endl;
            printInfo(L);
            break;
        case 3:
            cout<<"Find Data"<<endl;
            cout<<"Input ID: ";
            cin>>X.ID;
            P = findElm(L,X);
            if (P != NULL) {
                view_data(info(P));
            } else {
                cout<<"Data not found"<<endl;
            }
            break;
        case 4:
            cout<<"Find and Edit"<<endl;
            cout<<"Input data ID that you want to edit: ";
            cin>>X.ID;
            P = findElm(L,X);
            if (P != NULL) {
                edit_data(info(P));
            } else {
                cout<<"Wrong ID"<<endl;
            }
            break;
        case 5:
            cout<<"Find and Delete"<<endl;
            cout<<"Input data ID that you want to delete: ";
            int id;
            cin>>id;
            deletebyID(L,id);
            break;
        case 6:
            cout<<"Separating passed member..."<<endl;
            savePassedMember(L,L_passed);
            cout<<"Separation done."<<endl;
            break;
        case 7:
            cout<<"Passed Member"<<endl;
            printInfo(L_passed);
            break;
        }
    } while(choice != 0);

    //----------------------------------------
}
