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
    List L;
    int pilih,x;
    address p1 = NULL;

    cout <<"Main Menu"<<endl;
    cout <<"1. Insert First"<<endl;
    cout <<"2. Insert After"<<endl;
    cout <<"3. Insert Last"<<endl;
    cout <<"4. Delete First"<<endl;
    cout <<"5. Delete After"<<endl;
    cout <<"6. Delete Last"<<endl;
    cout <<"7. View List"<<endl;
    cout <<"8. Insertion Sort"<<endl;
    cout <<"9. Search"<<endl;
    cout <<"Pilih : ";
    cin >> pilih;
    if(pilih == 1)
    {
        cout << "Masukan Data Anda: ";
        cout << " Masukkan ID anda: ";cin >> x;
        cout << " Masukkan Nama anda: ";cin>>stuff.nama;
        cout << " Masukkan Alamat anda: ";cin>>stuff.alamat;
        cout << " Masukkan No.HP anda: ";cin>>stuff.no_hp;
        cout << " Masukkan Kantor anda: ";cin>>stuff.kantor;
        cout << endl;
        p1 = alokasi(x);
        insertFirst(L, p1);
        cout << "Data baru berhasil ditambahkan"<<endl;
        cout << endl;
        mainMenu();
    }
    else if (pilih == 2)
    {
        cout << "Masukan data yang ingin anda cari : ";
        cin >> x;
        cout << endl;
        p1 = findElm(L,x);
        cout <<"Data yang anda cari adalah : "<<info(p1)<<endl;
        cout <<"Data tersebut terdapat pada alamat : "<<p1<<endl;
        menu();

    }
    else if (pilih == 3)
    {
        printInfo(L);
        menu();

    }
    else
    {

    }

    //----------------------------------------
}
