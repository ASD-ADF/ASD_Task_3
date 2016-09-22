#include <iostream>
#include "list.h"
#include "operasi.h"

using namespace std;

void mainMenu();
List L;
address P1 = NULL;
address P2 = NULL;
infotype x;
char pilihan;

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
    //----------------------------------------

    addres P;
    addres Prec;
    List L;
    createList(L);
    stuff datastuff;
    cout<<"selamat kepada anda telah menggunakan aplikasi terbaru ini \n";
    cout<<"program linked list\n";
    cout<<"============================= \n";
    cout<<"-----Menu Aplikasi-----" <<endl;
    cout<<"1. insert first \n";
    cout<<"2. insert after \n";
    cout<<"3. insert last  \n";
    cout<<"4. delete first \n";
    cout<<"5. delete after \n";
    cout<<"6. delete last \n";
    cout<<"7. view list \n";
    cout<<"8. inserttion sort \n";
    cout<<"9.search \n";
    cout<<"10.exit \n\n";

    menu label;
    cout << "silahkan memilih menu yang tersedia \a";
    cout << "menu ke : ";
    cout >> pilihan ;
    cout <<endl;
     switch (pilihan)
     (
      case '1' ;
        createkaryawan(&datastuff);
        P = createElement (datastuff);
        insertfirst (&L,P);
        goto menulabel;

    close '2' ;
        create karyawan (&datastuff);
        P = createElement(datastuff);
        insertAfter(&prec,P);
        goto menulabel;

    case '3';
        createkaryawan(&datastuff);
        P = createElment(datastuff);
        insertlast(&L,P);
        goto menulabel;

    case '4';
        deletefirst (&L,P);
        goto menulabel;

    case '5';
        deletelast(&L,P);
        goto menulabel;

    case '6';
        deletelast(&L,P);
        goto menulabel;

    case '7';
        printinfo(&L);
        goto menulabel;

    case '8';
        insertsort(&L);
        goto menulabel;

    case'10';
    cout<<"terimakasih telah menggunakan program ini"<<endl;
    cout<<"IF 39 - 06 / kelompok 3"<<endl;
    cout<<endl;


}
