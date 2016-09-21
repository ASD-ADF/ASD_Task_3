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
    //-------------your code here-------------
    // NIM :1301154160
    address P = first(L);
    infotype z = info(P);
    insertLast(L,alokasi(z));
    while(z.id != x.id)
        P = next(P);

    if (next(P)!= NULL){
        deleteLast(L,P);
        return P;

        }
        else
        {
        deleteLast(L,P);
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
    // NIM :


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
