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
        cout<<"====Selamat Datang===="<<endl;
        cout<<"Aplikasi BIS antar kota bukan antar hati ya "<<endl;
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
            cout<<"masukan id BIS  : ";cin>>x.id;
            cout<<"masukan nama BIS: ";cin>>x.nama;
            cout<<"masukan kelas BIS : ";cin>>x.kelas;
            cout<<"masukan kapasitas tiap unit BIS : ";cin>>x.kapasitas;
            cout<<"masukan jumlah unit BIS : ";cin>>x.jmlh_unit;
            P1 = alokasi(x);
            insertFirst(L,P1);
            break;
        case 2:
            cout<<"masukan id BIS yang sudah ada : ";cin>>z.id;
            P2 = findElm(L,z);
            cout<<"masukan id BIS : ";cin>>x.id;
            cout<<"masukan nama BIS : ";cin>>x.nama;
            cout<<"masukan kelas BIS : ";cin>>x.kelas;
            cout<<"masukan kapasitas tiap unit BIS : ";cin>>x.kapasitas;
            cout<<"masukan jumlah unit BIS : ";cin>>x.jmlh_unit;
            P1 = alokasi(x);
            insertAfter(P1,P2);
            break;
        case 3:
            cout<<"masukan id bis : ";cin>>x.id;
            cout<<"masukan nama bis : ";cin>>x.nama;
            cout<<"masukan kelas bis : ";cin>>x.kelas;
            cout<<"masukan kapasitas tiap unit bis: ";cin>>x.kapasitas;
            cout<<"masukan jumlah unit bis : ";cin>>x.jmlh_unit;
            P1 = alokasi(x);
            insertLast(L,P1);
            break;
        case 4:
            deleteFirst(L,P1);
            dealokasi(P1);
            break;
        case 5:
            cout<<"masukan id bis yang ingin dihapus : ";cin>>x.id;
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
            cout<<"masukan Id yang ingin dicari : ";cin>>x.id;
            sentinelSearch(L,x);
            printInfo(L);
            break;
        case 10:
            cout<<"KELUARRR SUDAHI KODING INIIIII  :( "<<endl;
            break;
        }
    }

    //----------------------------------------
}
