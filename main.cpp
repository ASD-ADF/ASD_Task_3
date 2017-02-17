#include <iostream>
#include "list.h"
#include "operasi.h"

using namespace std;

void mainMenu();
List L;
address P1 = NULL;
address P2 = NULL;
infotype x;

 int main()
 {
     int main()
     return 0;
 }

void mainMenu()
{

    int plh;
    while(plh != 10)
    {
        cout<<"Daftar Menu"<endl;
        cout<<"1. insert first"<<endl;
        cout<<"2. insert after"<<endl;
        cout<<"3. insert last"<<endl;
        cout<<"4. delete first"<<endl;
        cout<<"5. delete after"<<endl;
        cout<<"6. delete last"<<endl;
        cout<<"7. view list"<<endl;
        cout<<"8. insertion sort"<<endl;
        cout<<"9. search"<<endl;
        cout<<"10. keluar"<<endl;
        cout<<"Pilih nomor pilihan: ";
        cin>>plh;
        cout<<endl;
        switch(plh)
        {
        case 1:
            cout<<"Masukkan ID  : ";
            cin>>stuff.id;
            cout<<"Masukkan Nama Dokter : ";
            cin>>stuff.nama;
            cout<<"Masukkan Keahlian: ";
            cin>>stuff.spesialis;
            cout<<"Masukkan Umur : ";
            cin>>stuff.umur;
            cout<<"Masukkan Asal : ";
            cin>>stuff.daerah;
            P1 = alokasi(x);
            insertFirst(L,P1);
            break;
        case 2:
            cout<<"Masukan ID yang terdaftar : ";
            cin>>x.id;
            cout<<""<<endl;
            P2 = findElm(L,x);
            cout<<"Masukan ID  : ";
            cin>>stuff.id;
            cout<<"Masukkan Nama Dokter : ";
            cin>>stuff.nama;
            cout<<"Masukkan Keahlian: ";
            cin>>stuff.spesialis;
            cout<<"Masukkan Umur : ";
            cin>>stuff.umur;
            cout<<"Masukkan Asal : ";
            cin>>stuff.daerah;
            P1 = alokasi(x);
            insertAfter(P1,P2);
            break;
        case 3:
            cout<<"Masukan ID  : ";
            cin>>stuff.id;
            cout<<"Masukkan Nama Dokter : ";
            cin>>stuff.nama;
            cout<<"Masukkan Keahlian: ";
            cin>>stuff.spesialis;
            cout<<"Masukkan Umur : ";
            cin>>stuff.umur;
            cout<<"Masukkan Asal : ";
            cin>>stuff.daerah;
            P1 = alokasi(x);
            insertLast(L,P1);
            break;
        case 4:
            deleteFirst(L,P1);
            dealokasi(P1);
            break;
        case 5:
            cout<<"masukan ID yang akan dihapus : ";
            cin>>x.id;
            P1 = findElm(L,x);
            deleteAfter(P1,P2);
            printInfo(L);
            break;
        case 6:
            deleteLast(L,P1);
            dealokasi(P1);
            break;
        case 7:
            printInfo(L);
            break;
        case 8:
            insertionSort(L);
            break;
        case 9:
            cout<<"masukan ID yang dicari : ";
            cin>>x.id;
            sentinelSearch(L,x);
            printInfo(L);
            break;
        }
    }

}
