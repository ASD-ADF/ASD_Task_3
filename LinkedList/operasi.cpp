#include "list.h"
#include "operasi.h"


address sentinelSearch(List L, infotype x){
    /**
    * IS : List mungkin kosong
    * PR : mencari elemen dengan ID infotype = infotype x menggunakan bantuan sentinel
    * FS : mengembalikan address elemen dengan ID infotype x jika ditemukan,
    *      mengembalikan NULL jika tidak ditemukan
    */
    //-------------your code here-------------
    // NIM :


    //----------------------------------------

}

void insertionSort(List &L){
    /**
    * IS : List mungkin kosong
    * PR : mengurutkan elemen di dalam List L menggunakan algoritma insertion sort
    * FS : elemen di dalam List L terurut
    */

    //-------------your code here-------------
    int temp, ketemu, z;
    temp : NULL;
        if((L.first == NULL) || (L.first)->next==NULL)
        {
            return;
        }
        P=next(L.first);
        while (P != NULL)
        {
            z = P->info;
            ketemu = 0;
            q=L.first;
            while(q!=P)
            {
               if(q->info > p->info&&ketemu==0)
                {
                    z=q->info;
                    q->info = p->info;
                    ketemu = 1;
                    q=q->next;
                }
                else
                {
                    if(ketemu==1)
                    {
                        temp = z;
                        z=1->info;
                        q->info=temp;
                    }
                    q=q->next;
                }
            }
            q->info=z;
            p=p->next;
        }
}


void deletebyID(List &L, infotype x) {
    /**
    * IS : List L mungkin kosong
    * FS : 1 elemen dengan id info = x.id dihapus dari list (dealokasi)
    */

    address Prec, P;
    //-------------your code here-------------
    Prec = L.first;
    P = findElm(L,x);

    if(Prec == P)
        {
            deleteFirst(L,P);
        }
    else
    {
        while ((Prec->next != P) && (Prec ->next != NULL))
            Prec = Prec -> next;
        if (Prec ->next == NULL)
        {
            deleteLast(L,Prec);
        }
        else
        {
            deleteAfter(Prec,P);
        }
    }
}
