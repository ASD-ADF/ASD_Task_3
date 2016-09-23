#include <iostream>
#include "list.h"
#include "operasi.h"

using namespace std;

void mainMenu();
List L;
address P1 = NULL;
address P2 = NULL;
infotype x,z;
int m;

int main()
{
    createList(L);

    mainMenu();

    return 0;
}

void mainMenu(){
    /**
	* IS : List sudah dibuat
    * PR : memberikan output pilihan menu kepada user
    *       1. insert first
    *       2. insert after
    *       3. insert last
    *       4. delete first
    *       5. delete after
    *       6. delete last
    *       7. view list
    *       8. insertion sort
    *       9. search
    */
    //-------------your code here-------------

    while (m != 10){
        cout<<endl;
        cout<<"1. insert first"<<endl;
        cout<<"2. insert after"<<endl;
        cout<<"3. insert last"<<endl;
        cout<<"4. delete first"<<endl;
        cout<<"5. delete after"<<endl;
        cout<<"6. delete last"<<endl;
        cout<<"7. view list"<<endl;
        cout<<"8. insertion sort"<<endl;
        cout<<"9. search"<<endl;
        cout<<"10. exit"<<endl;
       cout<<"Choose Menu: "; cin>>m;
        switch (m){
        case 1:
            cout<<"Input ID Monorel                    : ";cin>>x.id;
            cout<<"Input Nama Monorel                  : ";cin>>x.nama;
            cout<<"Input Kelas Monorel                 : ";cin>>x.kelas;
            cout<<"Input Kapasitas Monorel             : ";cin>>x.kapasitas_kursi;
            cout<<"Input Total Kursi Monorel           : ";cin>>x.total_lantai;
            P1 = alokasi(x);
            insertFirst(L,P1);
            break;
        case 2:
            cout<<"Input ID AirLines yang ada : ";cin>>z.id;
            P2 = findElm(L,z);
            cout<<"Input ID Monorel                    : ";cin>>x.id;
            cout<<"Input Nama Monorel                  : ";cin>>x.nama;
            cout<<"Input Kelas Monorel                 : ";cin>>x.kelas;
            cout<<"Input Kapasitas Monorel             : ";cin>>x.kapasitas_kursi;
            cout<<"Input Total Kursi Monorel           : ";cin>>x.total_lantai;
            P1 = alokasi(x);
            insertAfter(P1,P2);
            break;
        case 3:
            cout<<"Input ID Monorel                    : ";cin>>x.id;
            cout<<"Input Nama Monorel                  : ";cin>>x.nama;
            cout<<"Input Kelas Monorel                 : ";cin>>x.kelas;
            cout<<"Input Kapasitas Monorel             : ";cin>>x.kapasitas_kursi;
            cout<<"Input Total Kursi Monorel           : ";cin>>x.total_lantai;
            P1 = alokasi(x);
            insertLast(L,P1);
            break;
        case 4:
            deleteFirst(L,P1);
            dealokasi(P1);
            break;
        case 5:
            cout<<"Input ID Monorel yg mau dihapus : ";cin>>x.id;
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
            break;
        case 9:
            case 9:
            cout<<"Input ID Monorel yg mau dicari : ";cin>>x.id;
            sentinelSearch(L,x);
            printhasil(L,x);
            break;
        case 10:
           cout<<"Keluar"<<endl;
            break;
        }
    }

    //----------------------------------------
}
