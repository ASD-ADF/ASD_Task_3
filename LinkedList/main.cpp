#include <iostream>
#include "list.h"
#include "operasi.h"

using namespace std;

void mainMenu();
List L;
int m;
address P1 = NULL;
address P2 = NULL;
infotype x,z;

int main()
{
    createList(L);

    mainMenu();

    return 0;
}

void mainMenu()
{
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
    int pilih;
    while(pilih != 10)
    {
        cout<<"======================================================\n";
        cout<<"Daftar Menu\n";
        cout<<"1. insert first\n";
        cout<<"2. insert after\n";
        cout<<"3. insert last\n";
        cout<<"4. delete first\n";
        cout<<"5. delete after\n";
        cout<<"6. delete last\n";
        cout<<"7. view list\n";
        cout<<"8. insertion sort\n";
        cout<<"9. search\n";
        cout<<"10. keluar\n";
        cout<<"Pilih menu yang anda inginkan (pilih nomornya) : ";
        cin>>pilih;
        cout<<"======================================================="<<endl;
        switch(pilih)
        {
        case 1:
            cout<<"masukan id  : ";
            cin>>x.id;
            cout<<"masukan nama : ";
            cin>>x.nama;
            cout<<"masukan kelas : ";
            cin>>x.kelas;
            cout<<"masukan kapasitas tiap unit : ";
            cin>>x.kapasitas;
            cout<<"masukan jumlah unit : ";
            cin>>x.jml_unit;
            P1 = alokasi(x);
            insertFirst(L,P1);
            break;
        case 2:
            cout<<"masukan id yang sudah ada : ";
            cin>>z.id;
            cout<<""<<endl;
            P2 = findElm(L,z);
            cout<<"masukan id : ";
            cin>>x.id;
            cout<<"masukan nama : ";
            cin>>x.nama;
            cout<<"masukan kelas : ";
            cin>>x.kelas;
            cout<<"masukan kapasitas tiap unit : ";
            cin>>x.kapasitas;
            cout<<"masukan jumlah unit : ";
            cin>>x.jml_unit;
            P1 = alokasi(x);
            insertAfter(P1,P2);
            break;
        case 3:
            cout<<"masukan id : ";
            cin>>x.id;
            cout<<"masukan nama : ";
            cin>>x.nama;
            cout<<"masukan kelas : ";
            cin>>x.kelas;
            cout<<"masukan kapasitas tiap unit: ";
            cin>>x.kapasitas;
            cout<<"masukan jumlah unit : ";
            cin>>x.jml_unit;
            P1 = alokasi(x);
            insertLast(L,P1);
            break;
        case 4:
            deleteFirst(L,P1);
            dealokasi(P1);
            break;
        case 5:
            cout<<"masukan id yang ingin dihapus : ";
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
            cout<<"masukan Id yang ingin dicari : ";
            cin>>x.id;
            sentinelSearch(L,x);
            printInfo(L);
            break;
        }
    }


    //----------------------------------------
}
