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
        case 2 :
            printInfo(L);
            break;
        case 3 :
            {

                infotype x;
                cout<< " ==>><<== "<<endl;
                cout<<" Find ID : ";
                cin>>x.id;
                address f;
                f = findElm(L,x);
                if ( f != NULL){
                    cout << " ==>><<==<<>>==>><<== " << end;
                    cout << " ID    : " << f->info.id << endl;
                    cout << " Name  : " << f->info.name << endl;
                    cout << " Class : " << f->info.clas << endl;
                    cout << " Score : " << f->info.score << endl;
                    cout << endl;
                } else {
                    cout << " == " << endl;
                    cout << " ID Not Found " << endl;
                    cout << endl;
                }
            }
            break;
        case 4 :
            infotype y;
            cout << " ==>><<== " << endl;
            cout << " Find ID : " ;
            cin >> y.id ;
            address f;
            f = findElm(L,y);
            if (f != NULL){
                edit_data(info(f));
            }else{
                cout << " ID Not Found " << endl;
            }
            break;
        case 5 :
            infotype z;
            cout << " ==>><<== " << endl;
            cout << "Find ID : " << endl;
            cin >> z.id;
            address f;
            deletebyID(L,z);
            cout << P -> info.id << endl;
        }
    } while(true);

    //----------------------------------------
}
