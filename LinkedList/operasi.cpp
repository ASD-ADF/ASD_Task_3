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
    // NIM : 130154174
    address P,Q;
    Q = alokasi(x);
    P = first(L);
    insertLast(L, Q);
    do {
        if (next(P)!=Q) {
            P = next(P);
        }
    } while (next(P)!=Q);
    if (next(next(P))==Nil) {
        P = Nil;
    }
    deleteLast(L,Q);
    return P;
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
    infotype temp;

    //----------------------------------------
}


void deletebyID(List &L, infotype x) {
    /**
    * IS : List L mungkin kosong
    * FS : 1 elemen dengan id info = x.id dihapus dari list (dealokasi)
    */

    address Prec, P;
    //-------------your code here-------------
    // NIM :
    if (first(L)!=Nil){
        Prec = sentinelSearch(L,x);
        if (P!=Nil){
            P = next(Prec);
            deleteAfter(Prec,P);
        } else {
            cout << "data tidak ditemukan";
        }
    }

    //----------------------------------------
}
