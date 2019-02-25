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
    int ID_X;
    infotype X;
    mytype D,Y;
    List L,L2,L_passed;
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
            insertFirst(L,P);
            break;

        case 2:
            printInfo(L);
            break;

        case 3:
            cout<<"Masukkan ID data yang dicari: ";
            cin>>D.ID;
            P = findElm(L,D);
            if(P == NULL){
                cout<<"Data tidak ditemukan"<<endl;
            }
            else{
                view_data(info(P));
            }
            break;

        case 4:
            cout<<"Masukkan ID data yang akan diedit: ";
            cin>>D.ID;
            P = findElm(L,D);
            if(P == NULL){
                cout<<"Data tidak ditemukan"<<endl;
            }
            else{
                edit_data(D);
            }
            break;

        case 5:
            cout << "Inputkan ID : ";
            cin >> ID_X;
            deletebyID(L,ID_X);
            break;

         case 6:
            savePassedMember(L,L_passed);
            break;

        case 7:
            printInfo(L_passed);
            break;
        }
    } while(true);


    //----------------------------------------
}
return 0;
