#include "singlelinklist.h"
#include <iostream>

using namespace std;

int pil;
int main()
{
    infotype x;
    list l;
    address p;
    address q;
    do
    {
        menuapp();
        if (pil==1)
        {
            p=alokasi(x);
            createlist(&l);
            inputdata(x);
            p=alokasi(x);
            insertfirst(&l,p);
            cout << " " <<endl;

            inputdata(x);
            p=alokasi(x);
            insertfirst(&l,p);
            cout << " " <<endl;
            system("cls");
        }
        if (pil==2)
        {
            inputdata(x);
            p=alokasi(x);
            insertlast(&l,p);
            system("cls");
        }
        if (pil==3)
        {
            system("cls");
        }
        if (pil==4)
        {
            deletefirst(&l,p);
        }
        if (pil==5)
        {
            deletelast(&l,p);
        }
        if (pil==6)
        {
            deleteafter(q,&p);
        }
        if (pil==7)
        {
            printinfo(l);
            getch();
            system("cls");
        }
        if (pil==8)
        {
            searchdata(l,x);
            system("cls");
        }

    }while (pil!=9);

    return 0;
}
