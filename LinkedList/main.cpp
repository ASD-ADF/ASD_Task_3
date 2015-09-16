#include <iostream>
#include <conio.h>
#include<stdlib.h>
#include "security.h"
using namespace std;

int main()
{
    int mn,ids,ddk;

    list l;
    address c,s;
    infotype b;
    (l).awal=NULL;
    do
    {
        system("cls");
        cout << "ooo MENU ooo" << endl;
        cout << "1. Insert First" <<endl;
        cout << "2. Insert After" <<endl;
        cout << "3. Insert Last" <<endl;
        cout << "4. Delete First" <<endl;
        cout << "5. Delete After" <<endl;
        cout << "6. Delete Last" <<endl;
        cout << "7. View Data" <<endl;
        cout << "8. Search Element" << endl;
        cout << "9. Exit" << endl;
        cout << "Masukkan no menu yang diinginkan : ";
        cin >> mn;
        switch (mn)
        {
        case 1:
            system("cls");
            buat_baru(&b);
            c=allocate(b);
            insertfirst(&l,c);
            break;
        case 2:
            system("cls");
            view(l);
            cout << "Masukkan data setelah ID Security : "; cin>>ids;
             address r;
            r=(l).awal;
            while(info(r).ids!=ids) {
                r=next(r);
            }
            buat_baru(&b);
            c=allocate(b);
            insertafter(&l,c,r);
            break;
        case 3:
            system("cls");
            buat_baru(&b);
            c=allocate(b);
            insertlast(&l,c);
            break;

        case 4:
            system("cls");
            address p;
            p = new Elmlist;
            deletefirst(&l,&p);
            break;

        case 5:
            system("cls");
            view(l);
            cout << "Delete data setelah ID Security : "; cin>>ddk;
            r=(l).awal;
            while(info(r).ids!=ddk) {
                r=next(r);
            }
            p= new Elmlist;
            deleteafter(&l,&p,r);
            break;
        case 6:
            system("cls");
            address q;
            p = new Elmlist;
            deletelast(&l,&q);
            break;
        case 7:
            system("cls");
            view(l);
            break;
        case 8:
            system("cls");
            cariid(&b);
            s=cari(l,b);
            cout<< "Data Security berada pada data ke "<<s <<endl;
            cout<<endl;
            view(l);
            break;
        }

    }
    while(mn<9);
    return 0;
}
