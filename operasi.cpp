#include "list.h"
#include "operasi.h"
using namespace std;


address sentinelSearch(List L, infotype x){
    /**
    * IS : List mungkin kosong
    * PR : mencari elemen dengan ID infotype = infotype x menggunakan bantuan sentinel
    * FS : mengembalikan address elemen dengan ID infotype x jika ditemukan,
    *      mengembalikan NULL jika tidak ditemukan
    */
    //-------------your code here-------------
    // NIM :
    address P;
    if (first(L)== NULL)
        first(L)=P;
    else{
        while (next(P)!= NULL){
            P=next(P);
            address Q = next(P);
            Q=P;
            x=Q;
        }
    }

    while ((P == x)&& (next(P) != NULL)){
        P=next(P);
        return P;
    }
    if ((P == x)&& (next(P) == NULL)){
        P=NULL;
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
    // NIM :


    //----------------------------------------
}
