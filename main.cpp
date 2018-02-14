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
        cout<<endl<<endl;
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
            if (first(L) == NULL)
                {
                    cout<<"No Data"<<endl;
                    break;
                }
            cout<<" Find ID : ";
            cin>>X.ID;
            P = findElm(L,X);
            if (P != NULL)
                {
                    view_data(info(P));
                }
            else
                {
                    cout<<"Data Not Found"<<endl;
                }
            break;

        case 4:
            if (first(L) == NULL)
                {
                    cout<<"No Data"<<endl;
                    break;
                }
            cout<<" Edit ID: ";
            cin>>X.ID;
            P = findElm(L,X);
            if (P != NULL)
                {
                    edit_data(info(P));
                }
            else
                {
                    cout<<"Data Not Found"<<endl;
                }
            break;

        case 5:
            if (first(L) == NULL)
                {
                    cout<<"No Data"<<endl;
                    break;
                }
            cout<<" Delete ID :";
            cin>>X.ID;
            P = findElm(L,X);
            if ( P != NULL)
                {
                    deletebyID(L,X);
                }
            else
                {
                    cout<<"Data Not Found"<<endl;
                }
            break;
        case 0:
            cout<<"Terima Kasih"<<endl;
            return;
        }
    cout<<endl<<endl;
    } while(true);


    //----------------------------------------
}
