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

    int pilih,pilih2;
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
        cout << "Masukan data karyawan baru anda: ";
        cout << " Masukkan ID anda: ";cin >> x.id;
        cout << " Masukkan Nama anda: ";cin>>x.nama;
        cout << " Masukkan Alamat anda: ";cin>>x.alamat;
        cout << " Masukkan No.HP anda: ";cin>>x.no_hp;
        cout << " Masukkan Kantor anda: ";cin>>x.kantor;
        cout << endl;
        P1 = alokasi(x);
        insertFirst(L, P1);
        cout << "Data baru berhasil ditambahkan"<<endl;
        cout << endl;
        mainMenu();
    }
    else if (pilih == 2)
    {
        cout << "Masukan data sebelum data baru yang akan disisipkan : ";
        cout << " Masukkan ID anda: ";cin >> x.id;
        P1 = findElm(L,x);
        cout << " Masukkan data karyawan baru anda";
        cout << " Masukkan Nama anda: ";cin>>x.nama;
        cout << " Masukkan Alamat anda: ";cin>>x.alamat;
        cout << " Masukkan No.HP anda: ";cin>>x.no_hp;
        cout << " Masukkan Kantor anda: ";cin>>x.kantor;
        cout << endl;
        P2 = alokasi(x);
        insertAfter(P1, P2);
        cout << "Data baru berhasil disisipkan"<<endl;
        cout << endl;
        mainMenu();

    }
    else if (pilih == 3)
    {
        cout << "Masukan Data Terakhir anda Anda: ";
        cout << " Masukkan ID anda: ";cin >> x.id;
        cout << " Masukkan Nama anda: ";cin>>x.nama;
        cout << " Masukkan Alamat anda: ";cin>>x.alamat;
        cout << " Masukkan No.HP anda: ";cin>>x.no_hp;
        cout << " Masukkan Kantor anda: ";cin>>x.kantor;
        cout << endl;
        P1 = alokasi(x);
        insertLast(L, P1);
        cout << "Data terakhir anda berhasil ditambahkan"<<endl;
        cout << endl;
        mainMenu();

    }
    else if (pilih == 4)
    {
        cout << "Apa anda yakin ingin menghapus data pertama (yes/no = 1/2): ";
        cout << "Pilih : ";cin>>pilih2;
        if (pilih2 == 1){
            deleteFirst(L,P1);
            cout << "Data pertama anda berhasil dihapus"<<endl;
            cout << endl;
            mainMenu();
        }
        else{
            mainMenu();
        }
    }
    else if (pilih == 5)
    {   cout <<"Apa anda yakin ingin mengahapus data anda (yes/no = 1/2) : ";
        cout <<"pilih : ";cin>>pilih2;
        if(pilih2 == 1){
            cout << "Masukan ID karyawan pada list sebelumnya: ";
            cout << "ID karyawan : ";cin>>x.id;
            P1 = findElm(L,x);
            deleteAfter(P1, P2);
            cout << "Data  anda berhasil dihapus"<<endl;
            cout << endl;
            mainMenu();
        }
        else {
            mainMenu();
        }
    }
    else if (pilih == 6)
    {
        cout <<"Apa anda yakin ingin mengahapus data anda (yes/no = 1/2) : ";
        cout <<"pilih : ";cin>>pilih2;
        if(pilih2 == 1){
            deleteLast(L,P1);
            cout << "Data terakhir anda berhasil dihapus"<<endl;
            cout << endl;
            mainMenu();
        }
        else{
            mainMenu();
        }
    }
    else if (pilih == 7)
    {
        printInfo(L);
        cout<<endl;
        mainMenu();

    }
    //----------------------------------------
}
