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
	int x;
    Guru y,z;
    while (x!=-1)
    {
        cout<< " 1. insert first"<<endl;
        cout<<  " 2. insert after"<<endl;
        cout<<  " 3. insert last"<<endl;
        cout<<  " 4. delete first"<<endl;
        cout<<  " 5. delete after"<<endl;
        cout<<  " 6. delete last"<<endl;
        cout<<  " 7. view list"<<endl;
        cout<<  " 8. insertion sort"<<endl;
        cout<<  " 9. search"<<endl;
        cout<< "pilihan = ";
        cin>>x;
        switch (x)
        {
        case 1 :
            cout << "masukan ID :" ;
            cin >> y.id;
            cout << "masukan nama :" ;
            cin >> y.nama;
            cout << "masukan mata pelajaran :" ;
            cin >> y.mataPel;
            cout << "masukan umur :" ;
            cin >> y.umur;
            cout << "masukan No HP :" ;
            cin >> y.noHP;
            insertFirst(L,alokasi(y));
            break;
        case 3 :
            cout << "masukan ID :" ;
            cin >> y.id;
            cout << "masukan nama :" ;
            cin >> y.nama;
            cout << "masukan mata pelajaran :" ;
            cin >> y.mataPel;
            cout << "masukan umur :" ;
            cin >> y.umur;
            cout << "masukan No HP :" ;
            cin >> y.noHP;
            insertLast(L,alokasi(y));
            break;
        case 2 :
            cout << "masukan ID :" ;
            cin >> y.id;
            cout << "masukan nama :" ;
            cin >> y.nama;
            cout << "masukan mata pelajaran :" ;
            cin >> y.mataPel;
            cout << "masukan umur :" ;
            cin >> y.umur;
            cout << "masukan No HP :" ;
            cin >> y.noHP;
            cout << "masukan id prec";
            cin >> z.id;
            insertAfter(sentinelSearch(L,z),alokasi(y));
            break;
        case 4 :
            deleteFirst(L,P1);
            break;
        case 5 :
            cout << "masukan id prec";
            cin >> z.id;
            deleteAfter(sentinelSearch(L,z),P1);
            break;
        case 6 :
            deleteLast(L,P1);
            break;
        case 7 :
            printInfo(L);
            break;
        case 8:
            insertionSort(L);
            break;
        case 9:
            cout << "masukan ID yang ingin di cari : ";
            cin>> z.id;
            sentinelSearch(L,z);
            break;
        case 10:
            cout << "masukan ID yang ingin di hapus : ";
            cin >> z.id;
            deletebyID(L,z);
            break;
        }

    }

    //----------------------------------------
}
