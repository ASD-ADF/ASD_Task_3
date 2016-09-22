#include "list.h"
#include "operasi.h"

address sentinelSearch(List L, int x){
    /**
    * IS : List mungkin kosong
    * PR : mencari elemen dengan ID = infotype x menggunakan bantuan sentinel
    * FS : mengembalikan address elemen dengan ID infotype x jika ditemukan,
    *      mengembalikan NULL jika tidak ditemukan
    */
    //-------------your code here-------------
    // NIM : 1301150440
    address P, w;
    infotype tp;
    tp.id = x;
    w = L.first;
    P = alokasi(tp);
    insertLast(L, P);
    while (w != P) {
        if(info(w).id == info(P).id) {
            deleteLast(L, P);
            return w;
        } else {
            w = w->next;
        }
    }
    deleteLast(L,P);
    dealokasi(P);
    return NULL;
    //----------------------------------------
}

void insertionSort(List &L){
    /**
    * IS : List mungkin kosong
    * PR : mengurutkan elemen di dalam List L menggunakan algoritma insertion sort
    * FS : elemen di dalam List L terurut
    */

    //-------------your code here-------------
    // NIM : 1301150440
    address batas, P, Q, R;
    batas = (L.first->next);
    while (batas != NULL) {
        P = L.first;
        while ((info(P).id < info(batas).id) && (P->next != batas)) {
            Q = P;
            P = P->next;
        }
        if (info(batas).id < info(P).id) {
            R = batas;
            infotype tmp = info(batas);
            info(batas) = info(P);
            info(P) = tmp;
        }
        batas = (batas->next);
    }
    printInfo(L);
    //----------------------------------------
}

void deletebyID(List &L, int x) {
    /**
    * IS : List L mungkin kosong
    * FS : 1 elemen dengan id info = x.id dihapus dari list (dealokasi)
    */

    address Prec, P;
    //-------------your code here-------------
    // NIM : 1301150440
    P = L.first;
    Prec = NULL;
    while (P->info.id!=x) {
            Prec = P;
            P = P->next;
    }
    P->next = P->next;
    P->next = NULL;
    dealokasi(P);
    //----------------------------------------
}
