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
    //1301150057
    
    int pilih,x;

    cout <<"Main Menu"<<endl;
    cout <<"1. Insert First "<<endl;
    cout <<"2. Insert After "<<endl;
    cout <<"3. Insert Last "<<endl;
    cout <<"4. Delete First "<<endl;
    cout <<"5. Delete After "<<endl;
    cout <<"6. Delete Last "<<endl;
    cout <<"7. View List "<<endl;
    cout <<"8. Insertion Sort "<<endl;
    cout <<"9. Search "<<endl;
    cout <<"Pilih menu : ";
    cin >> pilih;
    if(pilih == 1)
    {
        cout << "masukan data  : ";
        cout << "ID polisi : ";
        cin >> police.id <<endl;
        cout << "Nama Polisi :";
        cin >> police.nama <<endl;
        cout<< "Pangkat : ";
        cin >> police.pangkat <<endl;
        p1 = alokasi(x);
        insertFirst(L, p1);
        cout << "data berhasil ditambahkan"<<endl;
        cout << endl;
        mainmenu();
    }
    else if(pilih == 2)
    {
        cout << "masukan data  : ";
        cout << "ID polisi : ";
        cin >> police.id <<endl;
        cout << "Nama Polisi :";
        cin >> police.nama <<endl;
        cout<< "Pangkat : ";
        cin >> police.pangkat <<endl;
        p1 = alokasi(x);
        insertAfter(prec, p1);
        cout << "data berhasil ditambahkan"<<endl;
        cout << endl;
        mainmenu();
    }
    else if(pilih == 3)
    {
        cout << "masukan data  : ";
        cout << "ID polisi : ";
        cin >> police.id <<endl;
        cout << "Nama Polisi :";
        cin >> police.nama <<endl;
        cout<< "Pangkat : ";
        cin >> police.pangkat <<endl;
        p1 = alokasi(x);
        insertLast(L, p1);
        cout << "data berhasil ditambahkan"<<endl;
        cout << endl;
        mainmenu();
    }
    else if(pilih == 4)
    {
        deleteFisrt(L, p1);
        cout << "data berhasil dihapus"<<endl;
        cout << endl;
        mainmenu();
    }
    else if(pilih == 5)
    {
        deleteAfter(prec, p1);
        cout << "data berhasil dihapus"<<endl;
        cout << endl;
        mainmenu();
    }
    else if(pilih == 6)
    {
        deleteLast(L, p1);
        cout << "data berhasil dihapus"<<endl;
        cout << endl;
        mainmenu();
    }
    else if (pilih == 7)
    {
        printInfo(L);
        cout<<endl;
        mainmenu();

    }
    else if (pilih == 8)
    {
        insertionSort(L);
        cout<<endl;
        mainmenu();
    }
    else if (pilih == 9)
    {
        cout << "masukan data yang akan dicari : ";
        cin >> x;
        cout << endl;
        p1 = findElm(L,x);
        cout <<"data yang anda cari adalah : "<<info(p1)<<endl;
        cout <<"alamat data tersebut : "<<p1<<endl;
        mainmenu();

    }
    else
    {
        cout << "masukan anda salah,ulangi lagi"<<endl;
        mainmenu();
    }
}
