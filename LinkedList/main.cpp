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
    address P;
    address Prec;
    List L;
    createList(L);
    stuff datastuff;
    cout<<"-------------------MENU-------------------"<<endl;
    cout<<" 1. Insert first \n";
    cout<<" 2. Insert after \n";
    cout<<" 3. Insert last \n";
    cout<<" 4. Delete first \n";
    cout<<" 5. Delete after \n";
    cout<<" 6. Delete last \n";
    cout<<" 7. View List \n";
    cout<<" 8. Insertion sort \n";
    cout<<" 9. Search \n";
    cout<<" 10. Exit \n";

    Menu_Label;
    cout<<"Silahkan pilih menu: ";
    cout<<"Menu : ";
    cin>>pilihan;
    cout<<endl;
        switch(pilihan)
    {
    case '1';
        createPekerjaan(&datastuff);
        P = createElement(datastuff);
        insertFirst(&L,P);
        goto Menu_Label;

    case '2';
        createPekerjaan(&datastuff);
        P = createElement(datastuff);
        insertFirst(&Prec,P);
        goto Menu_Label;

    case '3';
        createPekerjaan(&datastuff);
        P = createElement(datastuff);
        insertFirst(&L,P);
        goto Menu_Label;

    case '4';
        deleteFirst(&L,P);
        goto Menu_Label;

    case '5';
        deleteAfter(&Prec,P);
        goto Menu_Label;

    case '6';
        deleteLast(&L,P);
        goto Menu_Label;

    case '7';
        printInfo(&L);
        goto Menu_Label;

    case '8';
        insertionSort(&L);
        goto Menu_Label;

    case '9';
        sentinelSearch(&L,x);
        goto Menu_Label;

    case '10';
        cout<<" Task 3"<<endl;
        cout<<"Ni Putu Surya Febyanti Kusumadewi"<<endl;
        cout<<"1301154482 / IF 39-06"<<endl;
    }


    //----------------------------------------
}
