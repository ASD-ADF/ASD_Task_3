#include "list.h"
#include "operasi.h"


address sentinelSearch(List L, infotype x)
{
    /**
    * IS : List mungkin kosong
    * PR : mencari elemen dengan ID infotype = infotype x menggunakan bantuan sentinel
    * FS : mengembalikan address elemen dengan ID infotype x jika ditemukan,
    *      mengembalikan NULL jika tidak ditemukan
    */

    address P;
    //-------------your code here-------------
    // NIM : 1301154160

    P = L.first;
    if (L.first != NULL)
    {
        if (L.first->next != NULL && L.first->info.id != x.id)
        {
            infotype z = info(P);
            insertLast(L,alokasi(x));
            while (z.id!= x.id)
            {
                P = P->next;
                z = P->info;
            }
            address Q;
            deleteLast(L,Q);
            if ( P->next != NULL)
                return P;
            else
                return NULL;
        }
        else
        {
            return L.first;
        }
    }
    else
    {

        return NULL;
    }

    //----------------------------------------

}

void insertionSort(List &L)
{
    /**
    * IS : List mungkin kosong
    * PR : mengurutkan elemen di dalam List L menggunakan algoritma insertion sort
    * FS : elemen di dalam List L terurut
    */

    //-------------your code here-------------
    // NIM : 1301154160
    address batas,P,Q,R;
    P = L.first;
    batas = L.first->next;
    while(P->info.id < batas->info.id && P->next != batas)
    {
        Q = P;
        P = P->next;
    if (batas->info.id < P->info.id){
        R = batas;
        batas = next(batas);
        if (P != L.first)
            insertFirst(L,R);
        else
            insertAfter(Q,R);
    }
    }
    cout << "Gelapnya dunia ini" << endl;

    //----------------------------------------
}


void deletebyID(List &L, infotype x)
{
    /**
    * IS : List L mungkin kosong
    * FS : 1 elemen dengan id info = x.id dihapus dari list (dealokasi)
    */

    address Q,P;
    Q = L.first;
    P = findElm(L,x);
    if (P != NULL)
    {
        if (Q == P)
        {
            deleteFirst(L,P);
        }
        else
        {

            while(Q->next != P && Q->next != NULL)
                Q = next(Q);

            if (Q->next == NULL)
            {
                deleteLast(L,Q);
            }
            else
            {
                deleteAfter(Q,P);
            }
        }
    }



    //----------------------------------------
}
