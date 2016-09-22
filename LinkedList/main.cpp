#include <iostream>
#include "list.h"
#include "operasi.h"

using namespace std;

void mainMenu();
List L;
address P1 = NULL;
address P2 = NULL;
infotype x;
int z;
int menu = 0;

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
    do {
        cout << "-----------------------" << endl;
        cout << "          Menu         " << endl;
        cout << "1. Insert First" << endl;
        cout << "2. Insert After" << endl;
        cout << "3. Insert Last" << endl;
        cout << "4. Delete First" << endl;
        cout << "5. Delete After" << endl;
        cout << "6. Delete Last" << endl;
        cout << "7. View List" << endl;
        cout << "8. Insertion Sort" << endl;
        cout << "9. Delete By ID" << endl;
        cout << "10. Search" << endl;
        cout << "-----------------------" << endl;
        cin >> menu;
        cout << endl;
        switch (menu) {
            case 1:
                cout << "ID Mobil: ";
                cin >> x.id;
                cout << "Nama Pemilik: ";
                cin >> x.pemilik;
                cout << "Nama Mobil: ";
                cin >> x.namamobil;
                cout << "Merk Mobil: ";
                cin >> x.merk;
                cout << "Warna Mobil: ";
                cin >> x.warna;
                cout << "Jenis Mobil: ";
                cin >> x.jenis;
                cout << "Tahun Pembuatan: ";
                cin >> x.tahun;
                cout << endl;
                P1 = alokasi(x);
                insertFirst(L, P1);
                break;
            case 2:
                cout << "ID Mobil: ";
                cin >> x.id;
//                cout << "Nama Pemilik: ";
//                cin >> x.pemilik;
//                cout << "Nama Mobil: ";
//                cin >> x.namamobil;
//                cout << "Merk Mobil: ";
//                cin >> x.merk;
//                cout << "Warna Mobil: ";
//                cin >> x.warna;
//                cout << "Jenis Mobil: ";
//                cin >> x.jenis;
//                cout << "Tahun Pembuatan: ";
//                cin >> x.tahun;
                cout << "Setelah ID ke: ";
                cin >> z;
                cout << endl;
                P1 = alokasi(x);
                P2 = findElm(L, z);
                if (P2 != NULL) {
                    insertAfter(P2, P1);
                }
                break;
            case 3:
                cout << "ID Mobil: ";
                cin >> x.id;
//                cout << "Nama Pemilik: ";
//                cin >> x.pemilik;
//                cout << "Nama Mobil: ";
//                cin >> x.namamobil;
//                cout << "Merk Mobil: ";
//                cin >> x.merk;
//                cout << "Warna Mobil: ";
//                cin >> x.warna;
//                cout << "Jenis Mobil: ";
//                cin >> x.jenis;
//                cout << "Tahun Pembuatan: ";
//                cin >> x.tahun;
                cout << endl;
                P1 = alokasi(x);
                insertLast(L, P1);
                break;
            case 4:
                deleteFirst(L, P1);
                break;
            case 5:
                cout << "Menghapus data, setelah ID ke  : ";
                cin >> z;
                cout << endl;
                P2 = findElm(L, z);
                if (P2 != NULL) {
                    deleteAfter(P2, P1);
                }
                break;
            case 6:
                deleteLast(L, P1);
                break;
            case 7:
                printInfo(L);
                break;
            case 8:
                insertionSort(L);
                break;
            case 9:
                cout << "Masukkan ID Mobil yang akan dihapus: ";
                cin >> z;
                cout << endl;
                deletebyID(L, z);
                break;
            case 10:
                cout << "Cari ID: ";
                cin >> z;
                P1 = sentinelSearch(L, z);
                if (P1 != NULL){
                    cout<< "Data Ditemukan"<<endl;
                    cout << x.id << endl;
                    cout << x.pemilik << endl;
                    cout << x.namamobil << endl;
                    cout << x.merk << endl;
                    cout << x.jenis << endl;
                    cout << x.warna << endl;
                    cout << x.tahun << endl;
                    cout<<info(P1).id;
                }
                break;
            default:
                cout << "Menu hanya tersedia 10. Masukkan kembali inputan." << endl;
                cout << endl;
        }
    } while (menu != 11);
    //----------------------------------------
}
