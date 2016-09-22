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
    address P;
    if (first(L) == NULL){
        return NULL;
    }
    else {
        P = first(L);
        while ((next(P) != NULL) && (info(P).id != x.id))
            P = next(P);
        }
        if (info(P).id == x.id){
            return P;
        }
        else{
            return NULL;
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
    address batas, P, Q;
    batas = next(first(L));
    while (batas != NULL) {
        P = first(L);
        while ((info(P).id < info(batas).id) && (next(P) != batas)){
            Q = P;
            P = next(P);
        }
        if (info(batas).id < info(P).id){
            address R = batas;
            batas =next(batas);
            if (P != first(L)){
                insertFirst(L, R);
            }
            else{
                insertAfter(Q, R);
            }
        }
        cout<<"error"<<endl;
    }
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
    if (first(L) != NULL){
        Prec = findElm(L,x);
        deleteAfter(Prec, P);
        cout<<"ID yang akan dihapus: "<<info(P).id<<endl;
        dealokasi(P);
    }
    else{
        cout<<"List Kosong";
    }


    //----------------------------------------
}
