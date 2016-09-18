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
    while(z.id != x.id || next(P) != NULL)
        P = next(P);

    if (z.id == x.id)
        return P;
    else
        return NULL;



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

    address Prec, P;
    //-------------your code here-------------
    // NIM : 1301154160
    Prec = first(L);
    Prec = sentinelSearch(L,x);
    while (next(info(P)) != x && next(P) != NULL)
    {
        P = next(P);

    }
    if (next(P)==NULL && info(P)!=x)
    {
        return NULL;

    }
    else
    {

        return P;

    }



    //----------------------------------------
}
