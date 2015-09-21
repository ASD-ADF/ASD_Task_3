#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include "list.h"

using namespace std;
int main()
{
    list l;
    createList(&l);
    int pil;
    infotype x;
    address p,c,q ;

    do
    {
        system("cls");
        cout <<"Aplikasi Buku"<<endl;
        cout <<"Menu Utama"<<endl;
        cout <<endl;
        cout <<"1. Insert Buku First      "                      <<endl;
        cout <<"2. Insert Buku Last       "                      <<endl;
        cout <<"3. Insert Buku After "                 <<endl;
        cout <<"4. Delete Buku First      "                      <<endl;
        cout <<"5. Delete Buku Last       "                      <<endl;
         cout <<"6. Delete Buku After "                 <<endl;
        cout <<"7. Pencarian"                         <<endl;
        cout <<"8. View semua Buku  "                  <<endl;
        cout <<"0. Selesai"                           <<endl;
        cout<<"Masukan pilihan : ";
        cin>>pil;
        switch(pil)
        {
        case 1:
            //INSERTFIRST KOMANG
            break;
        case 2:
            //INSERTLAST KOMANG
            break;
        case 3:
            //INSERTAFTER KOMANG

        break;

        case 4:
            //DELETEFIRST ULYA
            break;

        case 5:
            //DELETELAST ULYA
            break;

        case 6:
           //DELETEAFTER ULYA
            break;

        case 7:
           //SEARCHBUKU DZAKY
            break;

        case 8:

            system("cls");
            viewList(l);
            break;

        case 0:
            cout<<"Selesai"<<endl;
            break;
        default:
            cout<<"Pilihan Anda Salah"<<endl;
            getch();
        }
    }
    while (pil != 0);

}
