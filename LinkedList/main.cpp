#include "list.h"


using namespace std;

int main()
{
    int pilihan=0;
    SingleLinkedList L;
    infotype x;
    address P;
    address Predecessor;
    address Q;
    char nama[15];
	createEmptyList(&L);
	while(pilihan !=9){
        cout <<"Selamat datang di aplikasi ini"       <<endl;
        cout <<"Silakan pilih menu untuk melanjutkan:"<<endl;
        cout <<"1. Insert First"                      <<endl;
        cout <<"2. Insert Last"                       <<endl;
        cout <<"3. Insert After"                       <<endl;
        cout <<"4. Delete First"                      <<endl;
        cout <<"5. Delete Last"                       <<endl;
        cout <<"6. Delete After"                       <<endl;
        cout <<"7. Searching by Nama"                 <<endl;
        cout <<"8. Print All Data"                    <<endl;
        cout <<"9. Exit"                              <<endl;
        cout <<"Masukkan pilihan anda: "<<endl;
        cin >> pilihan;
        switch(pilihan){
        case 1:
             system("cls");
             cout<<"Insert First"<<endl;
             cout<<"Masukkan data baru: "<<endl;
             cout<<"ID: "<<endl;
             cin>>x.id;
             cout<<"Nama: "<<endl;
             cin>>x.nama;
             cout<<"Departemen: "<<endl;
             cin>>x.departemen;
             cout<<"Gedung: "<<endl;
             cin>>x.gedung;
             insertFirst(&L,x);
             system("cls");
             break;
        case 2:
            system("cls");
            cout<<"Insert After"<<endl;
            cout<<"Masukkan data baru: "<<endl;
            cout<<"ID: ";
             cin>>x.id;
             cout<<"Nama: ";
             cin>>x.nama;
             cout<<"Departemen: ";
             cin>>x.departemen;
             cout<<"Gedung: ";
             cin>>x.gedung;
             insertAfter(&L,Predecessor,x);
             system("cls");
             break;
        case 3:
            system("cls");
            cout<<"Insert Last"<<endl;
            cout<<"Masukkan data baru: "<<endl;
            cout<<"ID: ";
            cin>>x.id;
            cout<<"Nama: "<<endl;
            cin>>x.nama;
            cout<<"Departemen: ";
            cin>>x.departemen;
            cout<<"Gedung: ";
            cin>>x.gedung;
            insertLast(&L,x);
            system("cls");
            break;
        case 4:
            system("cls");
            cout<<"Delete First"<<endl;
            deleteFirst(&L);
            if(P!=Nil){
                cout<<"Data yang terhapus"<<endl;
                cout<<"Nama : "<<info(P).nama<<endl;
                cout<<"ID: "<<info(P).id<<endl;
                cout<<"Departemen: "<<info(P).departemen<<endl;
                cout<<"Gedung: "<<info(P).gedung<<endl;
                Dealokasi(P);
            }
            else{
                    cout<<"List kosong";
                }
                getch();
                system("cls");
                break;
        case 5:
            system("cls");
            cout<<"Delete After";
            deleteAfter(&L,Predecessor);
            if(P!=Nil){
                cout<<"Data yang terhapus"<<endl;
                cout<<"Nama : "<<info(P).nama<<endl;
                cout<<"ID: "<<info(P).id<<endl;
                cout<<"Departemen: "<<info(P).departemen<<endl;
                cout<<"Gedung: "<<info(P).gedung<<endl;
                Dealokasi(P);
            }
            else{
                    cout<<"List kosong";
                }
                getch();
                system("cls");
            break;
        case 6:
            system("cls");
            cout<<"Delete Last";
            deleteLast(&L);
            if(P!=Nil){
                cout<<"Data yang terhapus"<<endl;
                cout<<"Nama : "<<info(P).nama<<endl;
                cout<<"ID: "<<info(P).id<<endl;
                cout<<"Departemen: "<<info(P).departemen<<endl;
                cout<<"Gedung: "<<info(P).gedung<<endl;
                Dealokasi(P);
            }
            else{
                    cout<<"List kosong";
                }
                getch();
                system("cls");
                break;
        case 7:
            system("cls");
            cout<<"Search by nama";
            cout<<"Masukkan nama yang akan dicari: "<<endl;
            cin>>nama;
            P=findElementList(nama,L);
            if(P!=Nil) {
                cout <<"Data ditemukan"<<endl;
                cout <<"      Nama: "<<info(P).nama<<endl;
                cout <<"      ID: "<<info(P).id<<endl;
                cout <<"      Departemen: "<<info(P).departemen<<endl;
                cout <<"      Gedung: "<<info(P).gedung<<endl;
            }
            getch();
            system("cls");
            break;
        case 8:
            system("cls");
            cout<<"View all"<<endl;
            printAll(L);
            system("cls");
            break;

        case 9:
            break;
             }
	}
    return 0;
}

