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
    int pilih;
    infotype stuff1;
    address P;
    do {
        cout << "1. insert first" << endl;
        cout << "2. insert after" << endl;
        cout << "3. insert last" << endl;
        cout << "4. delete first" << endl;
        cout << "5. delete after" << endl;
        cout << "6. delete last" << endl;
        cout << "7. view list" << endl;
        cout << "8. insertion sort" << endl;
        cout << "9. search" << endl;
        cout << "0. exit" << endl;
        cout << "Pilih > ";
        cin >> pilih;
        switch (pilih) {
            case 1 : cout << "Masukan ID : ";
                     cin >> stuff1.id;
                     cout << "Masukan Nama : ";
                     cin >> stuff1.nama;
                     P =alokasi(stuff1);
                     insertFirst(L,P);
                     break;

            case 2 : insertAfter();
                     break;

            case 7 : printInfo(L);
                     break;
        }
    } while (pilih!=0);
    //----------------------------------------
}
