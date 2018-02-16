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
    address P, Q;
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
    mytype a,b;
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
            Q = findElm(L, X);
            if(Q == NULL){
                insertFirst(L,P);
            }else{
                cout<<"ID sudah ada"<<endl;
            }
            break;
        case 2:
            printInfo(L);
            break;
        case 3:
            cout<<"ID   : ";
            cin>>a.id;
            P = findElm(L, a);
            b = P->info;
            view_data(b);
        case 4:
            cout<<"ID   : ";
            cin>>a.id;
            P = findElm(L, a);
            cout<<"Name     : ";
            cin>>P->info.name;
            cout<<"Class   : ";
            cin>>P->info.Class;
            cout<<"Score   : ";
            cin>>P->info.score;
        case 5:
            cout<<"ID   : ";
            cin>>a.id;
            P = findElm(L, a);
            if (P == first(L)){
                deleteFirst(L, P);
            }else if(next(P) == NULL){
                deleteLast(L, P);
            }else{
                Q = first(L);
                deleteAfter(Q, P);
            }
        }
    } while(true);

    //----------------------------------------
}
