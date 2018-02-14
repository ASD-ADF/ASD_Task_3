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
        case 3:{
            infotype v;
            cout<<"++++++++"<<endl;
            cout<<"View ur data by your id : ";
            cin>>v.yid;
            address F ;
            F = findElm(L,v);
            if(F!=NULL){
                cout<<"Data of user"<<endl;
                cout<<"your name here : "<<F->info.yname<<endl;
                cout<<"your id here   : "<<F->info.yid<<endl;
                cout<<"your class here : "<<F->info.yclas1<<endl;
                cout<<"your score here : "<<F->info.yscore<<endl;
            }else{
                cout<<"xxxxxxxxx"<<endl;
                cout<<"can't find your id"<<endl;
                cout<<endl;
            }}
            break;

        case 4:{
            infotype u;
            cout<<"+++++++++"<<endl;
            cout<<"View ur data by your id : ";
            cin>>u.yid;
            address F;
            F = findElm(L,u);
            if(F!=NULL){
                edit_data(info(P));
            }else{
                cout<<"can't find your id"<<endl;
                }
            }
            break;
        case 5: {
            infotype x;
            cout<<"++++++++++"<<endl;
            cout<<"View ur data by your id"<<endl;
            cin>>x.yid;
            address F ;
            deletebyID(L,x);
            cout<<P->info.yid<<endl;
            }
        }



    }while(true);
    //----------------------------------------
}
