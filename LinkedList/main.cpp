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
    while(pilihan != 10){
		cout<<"======================================================\n";
		cout<<"Daftar Menu\n";
		cout<<"1. insert first\n";
		cout<<"2. insert after\n";
		cout<<"3. insert last\n";
		cout<<"4. delete first\n";
		cout<<"5. delete after\n";
		cout<<"6. delete last\n";
		cout<<"7. view list\n";
		cout<<"8. insertion sort\n";
		cout<<"9. search\n";
		cout<<"10. keluar\n";
		cout<<"Pilih menu yang anda inginkan (pilih nomornya) : ";
		cin>>pilih;
		cout<<"======================================================="<<endl;
		switch(pilih) {
			case 1:
				insertFirst(L, P);
				break;
			case 2:
				insertAfter(L, P);
				break;
			case 3;
				insertLast(L, P);
				break;
            case 4;
				deleteFirst(L,P);
				break;
            case 5;
				deleteAfter(L,P);
				break;
            case 6;
				deleteLast(L,P);
				break;
            case 7;
				insertionSort(L);
				break;
            case 8;
				sentinelSearch(L,x);
				break;
            case 9;
				input_nilai();
				break;
		}
	}


    //----------------------------------------
}
