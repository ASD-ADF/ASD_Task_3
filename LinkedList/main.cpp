#include <iostream>
#include "list.h"
#include "operasi.h"
#include <conio.h>

using namespace std;

void mainMenu();
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
	int pil;
    while (pil != 10){
        cout<<"Selamat Datang di Aplikasi Kereta Api"<<endl;
        cout<<"1. Insert first"<<endl;
        cout<<"2. Insert after"<<endl;
        cout<<"3. Insert last"<<endl;
        cout<<"4. Delete first"<<endl;
        cout<<"5. Delete after"<<endl;
        cout<<"6. Delete last"<<endl;
        cout<<"7. View List"<<endl;
        cout<<"8. Insertion Sort"<<endl;
        cout<<"9. Search"<<endl;
        cout<<"10. Exit"<<endl;
        cout<<"Pilihan "; cin>>pil;
        switch (pil){
        case 1:
            cout<<"Masukkan ID Kereta: ";cin>>x.id;
            cout<<"Masukkan Stasiun: ";cin>>x.stasiun;
            cout<<"Masukkan Kapasitas: ";cin>>x.kapasitas;
            cout<<"Masukkan Durasi: ";cin>>x.durasi;
            cout<<"Masukkan Kelas: ";cin>>x.kelas;
            P1=alokasi(x);
            insertFirst(L,P1);
            break;
        case 2:
            cout<<"Masukkan ID Kereta: ";cin>>x.id;
            cout<<"Masukkan Stasiun: ";cin>>x.stasiun;
            cout<<"Masukkan Kapasitas: ";cin>>x.kapasitas;
            cout<<"Masukkan Durasi: ";cin>>x.durasi;
            cout<<"Masukkan Kelas: ";cin>>x.kelas;
            P1=alokasi(x);
            insertAfter(P1,P2);
            break;
        case 3:
            cout<<"Masukkan ID Kereta: ";cin>>x.id;
            cout<<"Masukkan Stasiun: ";cin>>x.stasiun;
            cout<<"Masukkan Kapasitas: ";cin>>x.kapasitas;
            cout<<"Masukkan Durasi: ";cin>>x.durasi;
            cout<<"Masukkan Kelas: ";cin>>x.kelas;
            P1=alokasi(x);
            insertLast(L,P1);
            break;
        case 4:
            deleteFirst(L,P1);
            dealokasi(P1);
            break;
        case 5:
            deleteAfter(P1,P2);
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
            cout<<"Inputkan ID yang dicari: ";cin>>x.id;
            sentinelSearch(L,x);
            printInfo(L);
        case 10:
            cout<<endl;
            cout<<"TERIMA KASIH ATAH PERHATIANNYA"<<endl;
            cout<<"- ADITYA ALIF NUGRAHA 1301154183"<<endl;
            cout<<"- DEFA EKA ARDIO 1301154281"<<endl;
            cout<<"- ROFIF IRSYAD 1301150001"<<endl;
            break;
        }
    }

    //----------------------------------------
}
