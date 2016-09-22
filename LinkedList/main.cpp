#include <iostream>
#include "list.h"
#include "operasi.h"
#include "windows.h"
#include "conio.h"

using namespace std;

void mainMenu();
List L;
address P1 = NULL;
address P2 = NULL;
infotype x;
int pilih;

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
    cout <<"MAIN MENU"<<endl;
    cout <<"1. Insert First"<<endl;
    cout <<"2. Insert After"<<endl;
    cout <<"3. Insert Last"<<endl;
    cout <<"4. Delete First"<<endl;
    cout <<"5. Delete After"<<endl;
    cout <<"6. Delete Last"<<endl;
    cout <<"7. View List"<<endl;
    cout <<"8. Insertion Sort"<<endl;
    cout <<"9. Search"<<endl;
    cout <<"Pilih Menu : ";
    cin >> pilih;
    cout << endl;

        if (pilih == 1)
        {
            cout << "Masukan Data Dosen"<<endl;
            cout << "ID Dosen    : ";
            cin >> x.id;
            cout << "Nama Dosen  : ";
            cin >> x.nama;
            cout << "Mata Kuliah : ";
            cin >> x.matkul;
            cout << "Masa Kerja  : ";
            cin >> x.masakerja;
            cout << "Asal        : ";
            cin >> x.asal;
            P1 = alokasi(x);
            insertFirst(L, P1);
            cout << "data berhasil di simpan"<<endl;
            cout << endl;
            getch();
            system("cls");
            mainMenu();
        } else if (pilih == 2)
        {
            cout << "Masukan data prec berdasarkan id";
            cout << "ID Dosen : ";
            cin >> x.id;
            P2 = findElm(L,x);
            cout << endl;
            cout << "Masukan Data Dosen Baru"<<endl;
            cout << "ID Dosen    : ";
            cin >> x.id;
            cout << "Nama Dosen  : ";
            cin >> x.nama;
            cout << "Mata Kuliah : ";
            cin >> x.matkul;
            cout << "Masa Kerja  : ";
            cin >> x.masakerja;
            cout << "Asal        : ";
            cin >> x.asal;
            P1 = alokasi(x);
            insertAfter(P2, P1);
            cout << "data berhasil di simpan"<<endl;
            cout << endl;
            mainMenu();
        } else if (pilih == 3)
        {
            cout << "Masukan Data Dosen Baru"<<endl;
            cout << "ID Dosen    : ";
            cin >> x.id;
            cout << "Nama Dosen  : ";
            cin >> x.nama;
            cout << "Mata Kuliah : ";
            cin >> x.matkul;
            cout << "Masa Kerja  : ";
            cin >> x.masakerja;
            cout << "Asal        : ";
            cin >> x.asal;
            P1 = alokasi(x);
            insertLast(L, P1);
            cout << "data berhasil di simpan"<<endl;
            cout << endl;
            getch();
            system("cls");
            mainMenu();
        } else if (pilih == 4)
        {
            deleteFirst(L, P1);
            getch();
            system("cls");
            mainMenu();
        }else if (pilih == 5)
        {
            cout << "Masukan Data Prec Berdasarkan ID Dosen"<<endl;
            cout << "ID Dosen    : ";
            cin >> x.id;
            P2 = findElm(L,x);
            deleteAfter(P2,P1);
            cout << "data berhasil di hapus"<<endl;
            cout << endl;
            getch();
            system("cls");
            mainMenu();
        }else if (pilih == 6)
        {
            deleteLast(L, P1);
            getch();
            system("cls");
            mainMenu();
        } else if(pilih == 7)
        {
            printInfo(L);
            cout << endl;
            getch();
            system("cls");
            mainMenu();
        } else if (pilih == 8)
        {
            cout << "Masukan Data Dosen Baru"<<endl;
            cout << "ID Dosen    : ";
            cin >> x.id;
            cout << "Nama Dosen  : ";
            cin >> x.nama;
            cout << "Mata Kuliah : ";
            cin >> x.matkul;
            cout << "Masa Kerja  : ";
            cin >> x.masakerja;
            cout << "Asal        : ";
            cin >> x.asal;
            P1 = alokasi(x);
            insertLast(L, P1);
            cout << "data berhasil di simpan"<<endl;
            cout << endl;
            getch();
            system("cls");
            mainMenu();
        } else if (pilih == 9)
        {
            cout << "MENU SEARCH"<<endl;
            cout << "1. SearchbyID "<<endl;
            cout << "2. DeletebyID ";
            cin >> pilih;
                if(pilih == 1)
                {
                    cout <<"Masukan ID dosen : ";
                    cin >> x.id;
                    P1 = sentinelSearch(L,x);
                    cout <<"Search Berdasarkan ID"<<endl;
                    cout <<"ID Dosen         : "<<info(P1).id<<endl;
                    cout <<"Nama Dosen       : "<<info(P1).nama<<endl;
                    cout <<"Mata Kuliah      : "<<info(P1).matkul<<endl;
                    cout <<"Masa Kerja       : "<<info(P1).masakerja<<endl;
                    cout <<"Asal             : "<<info(P1).asal<<endl;
                    cout <<"Address Elmement : "<<P1<<endl;
                    getch();
                    system("cls");
                    mainMenu();
                } else if(pilih == 2)
                {
                    cout <<"Masukan ID dosen : ";
                    cin >> x.id;
                    deletebyID(L,x);
                    getch();
                    system("cls");
                    mainMenu();
                }



        }

    //----------------------------------------
}
