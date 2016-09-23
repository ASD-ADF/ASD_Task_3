#include "list.h"

void createList(List &L) {
    /**
    * FS : first(L) diset Nil
    */
    //-------------your code here-------------
    // NIM :
    first(L) = Nil;

    //----------------------------------------
}

address alokasi(infotype x) {
    /**
    * FS : mengembalikan elemen list baru dengan info = x, next elemen = Nil
    */

    address P;
    //-------------your code here-------------
    // NIM :
    P = new elmlist;
    info(P) = x;
    //----------------------------------------
    return P;
}

void dealokasi(address &P) {
    /**
    * FS : menghapus elemen yang ditunjuk oleh P (delete)
    */
    //-------------your code here-------------
    // NIM :
    delete P;

    //----------------------------------------
}

void insertFirst(List &L, address P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen pertama pada List L
    */
    //-------------your code here-------------
    // NIM :
    next(P)=Nil;
    next(P)=first(L);
    first(L) = P;
    //----------------------------------------
}

void insertLast(List &L, address P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen terakhir pada List L
    */
    //-------------your code here-------------
    // NIM :
    address Q = first(L);
    do {
        if (next(Q)!=Nil){
            Q = next(Q);
        }
    } while ((next(Q)==Nil));
    next(P) = Nil;
    next(Q) = P;
    //----------------------------------------
}

address findElm(List L, infotype x) {
    /**
    * IS : List L mungkin kosong
    * FS : mengembalikan elemen dengan info.ID = x.ID,
           mengembalikan Nil jika tidak ditemukan
    */

    address P;
    //-------------your code here-------------
    // NIM :
    if (first(L)!= Nil) {
        P = first(L);
        do {

        } while ((info(P).id!=x.id) && (next(P)!=Nil));
    }

    //----------------------------------------
    return P;
}

void deleteFirst(List &L, address &P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen pertama di dalam List L dilepas dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM :
    if (first(L)!=Nil){
        P =first(L);
        first(L) = next(P);
    }

    //----------------------------------------
}

void deleteLast(List &L, address &P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen tarakhir di dalam List L dilepas dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : 1301154174
    if (first(L)!=Nil){
        P =first(L);
        do {
            if (next(P)!=Nil){
                P = next(P);
            }
        } while (next(P)==Nil);

    }
    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : menampilkan info seluruh elemen list L
    */
    //-------------your code here-------------
    // NIM : 1301154174
    address P;
    if (first(L)!=Nil){
        P = first(L);
        do {
            cout << info(P).id <<endl;
            cout << info(P).nama << endl;
        } while (next(P)!=Nil);
    }
    //----------------------------------------
}

void insertAfter(address Prec, address P) {
    /**
    * IS : Prec dan P tidak NULL
    * FS : elemen yang ditunjuk P menjadi elemen di belakang elemen yang
    *      ditunjuk pointer Prec
    */
    //-------------your code here-------------
    // NIM : 1301154174
    next(P) = next(Prec);
    next(Prec) = P;
    //----------------------------------------

}
void deleteAfter(address Prec, address &P) {
    /**
    * IS : Prec tidak NULL
    * FS : elemen yang berada di belakang elemen Prec dilepas
    *      dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : 1301154174
    next(Prec) = next(P);
    next(P) = Nil;
    dealokasi(P);
    //----------------------------------------
}

