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
    while (u != 10){
        cout<<"HAYY"<<endl;
        cout<<"<<<<AYO NAIK BIS>>>>"<<endl;
        cout<<" 1. insert first"<<endl;
        cout<<" 2. insert after"<<endl;
        cout<<" 3. insert last"<<endl;
        cout<<" 4. delete first"<<endl;
        cout<<" 5. delete after"<<endl;
        cout<<" 6. delete last"<<endl;
        cout<<" 7. view list"<<endl;
        cout<<" 8. insertion sort"<<endl;
        cout<<" 9. search"<<endl;
        cout<<" 10. exit"<<endl;
        switch (u){
        case1:
            cout<<"input id BIS: ";cin>>x,id;
            cout<<"input nama BIS: ";cin>>x.nama;
            cout<<"input kelas BIS: ";cin>>x.kelas;
            cout<<"input kapasitas tiap unit BIS: ";cin>>x.kapasitas;
            cout<<"input jumlah banyak BIS: ";cin>>x.jmlh_unit;
            p1 = alokasi(x);
            insertfirst(L.p1);
            break;

        case2:
            cout<<"input id BIS yang sudah ada : "cin>>a.id;
            p1 = findElm(L,a);
            cout<<"input id BIS : ";cin>>x.id;
            cout<<"input nama BIS : ";cin>>x.nama;
            cout<<"input kelas BIS : ";cin>>x.kelas;
            cout<<"input kapasitas tiap unit BIS : ";cin>>x.kapasitas;
            cout<<"input jumlah unit BIS : ";cin>>x.jmlh_unit;
            p1 = alokasi(x);
            insertAfter(p1,p2);
            break;

        case3:
            cout<<"input id BIS : ";cin>>x.id;
            cout<<"input nama BIS : ";cin>>x.nama;
            cout<<"input kelas BIS : ";cin>>x.kelas;
            cout<<"input kapasitas tiap unit BIS : ";cin>>x.kapasitas;
            cout<<"input banyak BIS : ";cin>>x.jmlh_unit;
            p1 = alokasi(x);
            insertLast(L,p1);
            break;

        case4:
            deleteFirst(L,p1);
            dealokasi(p1);
            break;

        case5:
            cout<<"input id BIS yang ingin di hapus : ";cin>>x.id;
            p1 = findElm(L,x);
            deleteAfter(p1,p2);
            printInfo(L);
            break;

        case6:
            deleteLast(L,p1);
            dealokasi(p1);

        case7:
            printInfo(L);

        case8:
            break;

        case9:
            cout<<"input id yang di cari: ";cin>>x.id;
            sentinelSearch(L,x);
            printInfo(L);
            break;

        case10:
            cout<<"exit"<<endl;
            break;



            }
    }


    //----------------------------------------
}
