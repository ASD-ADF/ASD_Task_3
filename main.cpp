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
    address P,R;
    infotype X;
    mytype idpeserta;
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
            cout<<endl;
            break;
        case 2:
            cout<<"Data semua member: "<<endl;
            printInfo(L);
            cout<<endl;
            break;
        case 3:
            cout<<"Masukkan ID member yang ingin dilihat: ";
            cin>>idpeserta.ID;
            P= findElm(L, idpeserta);
            if(P!=NULL){
                view_data(info(P));
            }else{
                cout << "ID yang anda cari TIDAK ADA.." << endl;
            }
            cout<<endl;
            break;
        case 4:
            cout << "Masukkan ID member yang ingin di edit: ";
            cin >> idpeserta.ID;
            P = findElm(L, idpeserta);
            if (P!=NULL){
                cout<<"Silahkan mengedit data member: "<<endl;
                edit_data(info(P));
                cout<<"Data berhasil diperbarui"<<endl;
            }else{
                cout<<"ID yang anda cari TIDAK ADA.."<<endl;
            }
            cout<<endl;
            break;
        case 5:
            cout << "Masukkan ID member yang ingin di hapus: ";
            cin >> idpeserta.ID;
            P = findElm(L, idpeserta);
            if (P!=NULL){
                deletebyID(L, idpeserta.ID);
                cout<<"Data berhasil dihapus.."<<endl;
            }else{
                cout<<"Data Tidak ada.."<<endl;
            }
            cout<<endl;
            break;
        case 6:
            savePassedMember(L, L_passed);
            cout<<"Pemindahan Member yang LULUS selesai.."<<endl;
            cout<<endl;
            break;
        case 7:
            cout<<"Data Mahasiswa yang LULUS:"<<endl;
            printInfo(L_passed);
            cout<<endl;
            break;
        case 0:
            true;
        }
    } while(true);

    //----------------------------------------
}
