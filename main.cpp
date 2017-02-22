#include <iostream>
#include "list.h"
#include "operasi.h"

using namespace std;

void mainMenu();
int m;
List L;
address P1 = NULL;
address P2 = NULL;
infotype x;

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
        cout<<"-----Selamat Datang di Program pegawai pelni-----"<<endl;
        cout<<"1.  Insert First"<<endl;
        cout<<"2.  Insert After"<<endl;
        cout<<"3.  Insert Last"<<endl;
        cout<<"4.  Delete First"<<endl;
        cout<<"5.  Delete After"<<endl;
        cout<<"6.  Delete Last"<<endl;
        cout<<"7.  View List"<<endl;
        cout<<"8.  Insertion Sort"<<endl;
        cout<<"9.  Search"<<endl;
        cout<<"10. Keluar"<<endl;
        cout<<"Pilihan  : ";
        cin >> m;
        switch(m) {
        case 1:
            cout<<"Masukkan Id kapal        : ";
            cin>> x.id;
            cout<<"Masukkan Nama nahkoda      : ";
            cin>>x.nama;
            cout<<"Masukkan Jenis kapal     : ";
            cin>>x.kelas;
            cout<<"Masukkan umur nahkoda : ";
            cin>>x.umur;
            cout<<"Masukkan gaji     : ";
            cin>>x.gaji;
            P1 = alokasi(x);
            insertFirst(L,P1);
            break;
        case 2:
            cout<<"Masukkan Id kapal yg sudah dimasukkan    : ";
            cin>>x.id;
            P2 = findElm(L,x);
            cout<<"Masukkan Id kapal        : ";
            cin>> x.id;
            cout<<"Masukkan Nama nahkoda      : ";
            cin>>x.nama;
            cout<<"Masukkan Jenis kapal     : ";
            cin>>x.kelas;
            cout<<"Masukkan umur nahkoda : ";
            cin>>x.umur;
            cout<<"Masukkan jumlah gaji     : ";
            cin>>x.gaji;
            P1 = alokasi(x);
            insertAfter(P1,P2);
            break;
        case 3:
            cout<<"Masukkan Id kapal        : ";
            cin>> x.id;
            cout<<"Masukkan Nama nahkoda      : ";
            cin>>x.nama;
            cout<<"Masukkan Jenis kapal     : ";
            cin>>x.kelas;
            cout<<"Masukkan umur nahkoda : ";
            cin>>x.umur;
            cout<<"Masukkan Jumlah gaji     : ";
            cin>>x.gaji;
            P1 = alokasi(x);
            insertLast(L,P1);
            break;
        case 4:
            deleteFirst(L,P1);
            dealokasi(P1);
            break;
        case 5:
            cout<<"Masukkan ID kpal_tanker yang diinginkan: ";
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
            break;
        case 9:
            cout<<"Masukkan ID yang ingin dicari    : ";
            cin>>x.id;
            sentinelSearch(L,x);
            printInfo(L);
            break;
        case 10:
            cout<<"Keluar"<<endl;
            break;
        }
    }

    //----------------------------------------
}
