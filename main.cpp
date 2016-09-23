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

	    while(pilih != 10)
    {
	
        cout<<"====Menu===="<<endl;
        cout<<"1. Insert First"<<endl;
        cout<<"2. Insert After"<<endl;
        cout<<"3. Insert Last"<<endl;
        cout<<"4. Delete First"<<endl;
        cout<<"5. Delete After"<<endl;
        cout<<"6. Delete Last"<<endl;
        cout<<"7. View List"<<endl;
        cout<<"8. Insertion sort"<<endl;
        cout<<"9. Search"<<endl;
        cout<<"Pilih Menu: ";
        infotype select;
        cin>>pilih;

        switch (pilih)        {
        case 1:
            insertFirst(L,alokasi(inputan()));            break;
        case 2:
            cout << "Insert setelah ID berapa ?";
            cin >> select.id;
            insertAfter(findElm(L,select),alokasi(inputan()));
            break;
        case 3:
            insertLast(L,alokasi(inputan()));
            break;
        case 4:
            deleteFirst(L,P1);
            break;
        case 5:
            cout << "Delete setelah ID berapa ?";
            cin >> select.id;
            deleteAfter(findElm(L,select),P1);            break;
        case 6:
            deleteFirst(L,P1);
            break;

        case 7:
            printInfo(L);
            break;
        case 8:
            cout<<"ERROR, BELUM DIKODING";
            break;
        case 9:
             cout<<"ERROR, BELUM DIKODING";
        }
         system("pause");
            system("cls");
 
 


    }


    //----------------------------------------
}
