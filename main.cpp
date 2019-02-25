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
    bool keluar = true;
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
        switch(choice) {
        case 1:
            X = create_data();
            P = allocate(X);
            //insertFirst(L,P);
            insertAndSort(L,X);
            break;
        case 2:
            printInfo(L);
            break;
        case 3:
            cout<<" ID Yang Akan Dicari : ";
            cin>> data.ID;
            P = findElm(L,data);
            if(P!=NULL){
                data = info(P);
                view_data(data);
            }else{
                cout<< "ID NOT FOUND"<<endl;
            }
            break;
        case 4:
            cout<<" ID yang ingin diubah : ";
            cin>> data.ID;
            P = findElm(L,data);
            if(P!=NULL){
                edit_data(data);
                info(P) = data;
            }
            break;
        case 5:
            cout<<"ID yang Ingin Dihapus : ";
            cin>>data.ID;
            deletebyID(L,data.ID);
            break;
        case 6:
            savePassedMember(L,L_passed);
            cout<<" List sudah Terupdate"<<endl;
            break;
        case 7:
            printInfo(L_passed);
            break;
        case 0:
            keluar = false;
        }
    }while(keluar);
    //----------------------------------------

}
