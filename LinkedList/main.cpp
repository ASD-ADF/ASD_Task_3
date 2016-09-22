#include <iostream>
#include <windows.h>
#include "list.h"
#include "operasi.h"

using namespace std;

void mainMenu();
List L;
address P1 = NULL;
address P2 = NULL;
int IDnya,i = 0;

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
    while(i != 10){
    system("pause");
            system("cls");
    infotype temp;
            cout << "Menu\n1. insert first\n2. insert after\n3. insert last\n4. delete first\n5. delete after\n6. delete last\n7. view list\n8. insertion sort\n9. search\n10. Exit\n";
            cin >> i;
    switch(i){
    case 1:
        insertFirst(L,alokasi(isiInfotype()));
        break;
    case 2:
        cout << "Insert setelah ID berapa ?";
        cin >> temp.id;
        insertAfter(findElm(L,temp),alokasi(isiInfotype()));
        break;
    case 3:
        insertLast(L,alokasi(isiInfotype()));
        break;

    case 4:
        deleteFirst(L,P1);
        break;
    case 5:
        cout << "Delete setelah ID berapa ?";
        cin >> temp.id;
        deleteAfter(findElm(L,temp),P1);
        break;
    case 6:
        deleteFirst(L,P1);
        break;

    case 7:
        printInfo(L);
        break;
    case 8:
        insertionSort(L);
        printInfo(L);
        break;
    case 9:
        cout << "Cari ID berapa ?";
        cin >> temp.id;
        address hasil = sentinelSearch(L,temp);
        if (hasil != NULL){
            cout << "Ketemu di " << hasil << endl;
        }
        else
        {
            cout << "NOT FOUND" << endl;
        }
        break;
    }

    //----------------------------------------
}
}
