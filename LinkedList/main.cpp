#include <iostream>
#include "list.h"
using namespace std;

int main()
{
    list L;
    int a;
    address c,f;
    infotype b,d;
    string e;
    (L).first=NULL;
    do
    {
        cout<<"MENU UTAMA "<<endl;
        cout<<"1. Insert First"<<endl;
        cout<<"2. Insert Last"<<endl;
        cout<<"3. Insert After"<<endl;
        cout<<"4. Delete First"<<endl;
        cout<<"5. Delete Last"<<endl;
        cout<<"6. Delete After"<<endl;
        cout<<"7. View "<<endl;
        cout<<"8. Search Elemen"<<endl;
        cout<<"masukkan pilihan : ";
        cin>>a;
        switch (a)
        {
        case 1:
            system("cls");
            baru(&b);
            c=alokasi(b);
            insertfirst(&L,c);
            cout<<endl;
            break;
        case 2:
            system("cls");
            baru(&b);
            c=alokasi(b);
            insertlast(&L,c);
            cout<<endl;
            break;
         case 3:
             system("cls");
            cout<<"Masukkan id produk : "; cin>>e;
            address r;
            r=(L).first;
            while(info(r).id!=e) {
                r=next(r);
            }
            baru(&b);
            c=alokasi(b);
            insertafter(&L,c,r);
            break;
        case 4:
            system("cls");
            address p;
            p = new elmlist;
            delfirst(&L,&p);
            cout<<endl;
            break;
        case 5:
            system("cls");
            address q;
            p = new elmlist;
            dellast(&L,&q);
            cout<<endl;
            break;
        case 6:
            system("cls");
            cout<<"Masukkan id produk : "; cin>>e;
            address g,h;
            g=(L).first;
            while(info(g).id!=e) {
                g=next(g);
            }
            h= new elmlist;
            delafter(&L,&c,&r);
            cout<<endl;
            break;
        case 7:
            system("cls");
            view(L);
            cout<<endl;
            break;
        case 8:
            system("cls");
            baru(&b);
            f=searchelm(L,b);
            cout<<f<<endl;
        }
    }
    while(a<9);
    return 0;
}
