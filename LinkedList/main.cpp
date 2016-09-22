#include <iostream>
#include "list.h"
#include "operasi.h"

using namespace std;

void mainMenu();
List L;
address P1 = NULL;
address P2 = NULL;
infotype x;
int y;

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
while (y != 10){
        cout<<endl;
        cout<<"1. Insert first"<<endl;
        cout<<"2. Insert after"<<endl;
        cout<<"3. Insert last"<<endl;
        cout<<"4. Delete first"<<endl;
        cout<<"5. Delete after"<<endl;
        cout<<"6. Delete last"<<endl;
        cout<<"7. View List"<<endl;
        cout<<"8. Insertion Sort"<<endl;
        cout<<"9. Search"<<endl;
        cout<<"10.End"<<endl;
        cout<<"Choose Menu: "; cin>>y;
        switch (y){
        case 1:
            cout<<"Inputkan ID pesawat: ";cin>>x.id;
            cout<<"Inputkan Nama Pesawat: ";cin>>x.nama_pesawat;
            cout<<"Inputkan Nama Pilot: ";cin>>x.pilot;
            cout<<"Inputkan Kapasitas: ";cin>>x.kapasitas;
            cout<<"Inputkan Kelas: ";cin>>x.kelas;
            P1=alokasi(x);
            insertFirst(L,P1);
            break;
        case 2:
            cout<<"Inputkan ID pesawat: ";cin>>x.id;
            cout<<"Inputkan Nama Pesawat: ";cin>>x.nama_pesawat;
            cout<<"Inputkan Nama Pilot: ";cin>>x.pilot;
            cout<<"Inputkan Kapasitas: ";cin>>x.kapasitas;
            cout<<"Inputkan Kelas: ";cin>>x.kelas;
            P1=alokasi(x);
            insertAfter(P1,P2);
            break;
        case 3:
            cout<<"Inputkan ID pesawat: ";cin>>x.id;
            cout<<"Inputkan Nama Pesawat: ";cin>>x.nama_pesawat;
            cout<<"Inputkan Nama Pilot: ";cin>>x.pilot;
            cout<<"Inputkan Kapasitas: ";cin>>x.kapasitas;
            cout<<"Inputkan Kelas: ";cin>>x.kelas;
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
            cout<<"......TERIMA KASIH....."<<endl;
            cout<<"by: ..Agung Jati Prawira.."<<endl;
            cout<<"    ..Rizky Alfiano Putra.."<<endl;
            cout<<"    ..Rizky Ramadika Trisaputra.."<<endl;
            break;
        }
    }
    //----------------------------------------
}
