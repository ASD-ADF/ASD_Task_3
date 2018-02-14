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
    int x;
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
            cout<<"masukkan ID yang ingin dicari : ";
            cin>>x;
            info(P).id = x;
            P = findElm(L,info(P));
            view_data(info(P));
            break;
        case 4:
            cout<<"masukkan ID yang ingin dicari : ";
            cin>>x;
            info(P).id = x ;
            P = findElm(L,info(P));
            edit_data(info(P));
            break;
        case 5:
             mytype D;
            cout << "Masukkan ID yang ingin dicari : ";
            cin >> x;
            D.id = x;
            P = findElm(L, D);
            if (P!=NULL)
            {
                if (P==first(L))
                {
                    deleteFirst(L, P);
                    deallocate(P);
                }
                else
                {
                    address Q = new elmlist;
                    bool ketemu = false;
                    Q = first(L);
                    while(Q!=NULL && !ketemu)
                    {
                        if (next(next(Q))==NULL)
                        {
                            deleteLast(L, P);
                        }
                        else if (next(Q)!=NULL)
                        {
                            if(info(next(Q)).id == info(P).id)
                            {
                                deleteAfter(L,Q,P);
                                ketemu = true;
                            }
                        }
                        Q = next(Q);
                    }
                    deallocate(P);
                }
            }
        }
    }
    while(choice != 0);

    //----------------------------------------
}
