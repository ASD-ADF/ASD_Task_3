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
    // NIM : 1301154183
    address P = first(L);
    infotype z = info(P);
    insertLast(L,alokasi(z));
    while(z.id != x.id)
        P = next(P);

    if (next(P)!= Nil){
        deleteLast(L,P);
        return P;

        }
        else
        {
        deleteLast(L,P);
        return Nil;

        }
    //----------------------------------------

}

void insertionSort(List &L){
    /**
    * IS : List mungkin kosong
    * PR : mengurutkan elemen di dalam List L menggunakan algoritma insertion sort
    * FS : elemen di dalam List L terurut
    */

    //-------------your code here-------------
    // NIM : 


    //----------------------------------------
}


void deletebyID(List &L, infotype x) {
    /**
    * IS : List L mungkin kosong
    * FS : 1 elemen dengan id info = x.id dihapus dari list (dealokasi)
    */

    address Prec, P;
    //-------------your code here-------------
    // NIM : 1301154183
    Prec = first(L);
    P = findElm(L,x);
    if (P != Nil)
    {
        if (Prec == P)
        {
            deleteFirst(L,P);
        }
        else
        {

            while(next(Prec) != P && next(Prec) != Nil)
                Prec = next(Prec);

            if (next(Prec) == Nil)
            {
                deleteLast(L,Prec);
            }
            else
            {
                deleteAfter(Prec,P);
            }
        }
    }
	
    //----------------------------------------
}
