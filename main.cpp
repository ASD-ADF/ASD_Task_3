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
    mytype member;
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
            if (L.first!=NULL){
            cout<<"Data Member :"<<endl;
            printInfo(L);
            }else {
                cout<<"Tidak ada member"<<endl;
            }
            cout<<endl;
            break;
        case 3:
            cout<<"Masukkan ID member yang ingin dicari :";
            cin>>member.ID;
            if (findElm(L,member)!=NULL){
                view_data(findElm(L,member)->info);
            }else {
                cout<<"ID Member tidak ditemukan"<<endl;
            }
            cout<<endl;
            break;
        case 4:
            cout<<"Masukkan ID member yang ingin diedit :";
            cin>>member.ID;
            if (findElm(L,member)!=NULL){
                edit_data(findElm(L,member)->info);
            }else {
                cout<<"ID Member tidak ditemukan"<<endl;
            }
            cout<<endl;
            break;
        case 5:
            cout<<"Masukkan ID member yang ingin dihapus :";
            cin>>member.ID;
            if (findElm(L,member)!=NULL){
                deletebyID(L,member.ID);
                cout<<"Data member telah dihapus";
            }else {
                cout<<"ID Member tidak ditemukan"<<endl;
            }
            cout<<endl;
            break;
        case 6:
            savePassedMember(L,L_passed);
            cout<<"Pemindahan data member yang Lulus berhasil..."<<endl;
            break;
        case 7:
            cout<<"Data Mahasiswa yang telah Lulus:"<<endl;
            printInfo(L_passed);
            cout<<endl;
            break;
        }
    } while(true);

    //----------------------------------------
}
