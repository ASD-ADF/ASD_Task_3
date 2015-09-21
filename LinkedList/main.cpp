#include <iostream>
#include <windows.h>
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
            system("cls");
            input_data(&x);
            p = alokasi(x);
            next(p)=NULL;
            insertFirst (&l,p);
            break;
            
        case 2:
           system("cls");
            input_data(&x);
            p = alokasi(x);
            insertLast (&l,p);
            next(p)=NULL;
            break;
            
        case 3:
            cout <<"Insert After";
         system("cls");
                p = alokasi(x);
                cout<<"Masukkan ID sebelum input : ";
                cin>>x.ID;
                q = searchBuku(l,x);
                insertAfter(&l,q,p);
                break;

        case 4:
            deleteFirst (&l,p);
            break;
        case 5:
            deleteLast (&l,p);
            break;

        case 6:
            cout<<"ID sebelum delete : ";
            cin>>x.ID;
            q = searchelement(l,x);
            if(q!=NULL)
            {
                deleteAfter(q,p);
            }
            else
                cout<<"Element terakhir, tidak dapat dihapus dengan delete After"
            break;

        case 7:
           cout<<"Masukkan ID  : ";
            cin>>x.ID;
            c = searchelement(l,x);
            if (c!=NULL)
            {
                cout << "ID Buku : " << info(c).ID << endl;
                cout << "Judul : " << info(c).judul << endl;
                cout << "Stock : " << info(c).stock << endl;
                cout << "Pengarang : " << info(c).pengarang << endl;
                getch();
            }
            else
            {
                cout<<"ID tidak ada"<<endl;
                getch();
            }
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
