#include "list.h"
    infotype x;

void createList(List &L) {
    /**
    * FS : first(L) diset Nil
    */
    //-------------your code here-------------
    // NIM : 1301154160
    first(L) = NULL;

    //----------------------------------------
}

address alokasi(infotype x) {
    /**
    * FS : mengembalikan elemen list baru dengan info = x, next elemen = Nil
    */

    address P;
    //-------------your code here-------------
    // NIM :1301154160
    P = new elmlist;

    //----------------------------------------
    return P;
}

void dealokasi(address &P) {
    /**
    * FS : menghapus elemen yang ditunjuk oleh P (delete)
    */
    //-------------your code here-------------
    // NIM : 1301154160
    delete P;

    //----------------------------------------
}

void insertFirst(List &L, address P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen pertama pada List L
    */
    //-------------your code here-------------
    // NIM : 1301154160
    P = alokasi(x);
    next(P) = NULL;


    //----------------------------------------
}

void insertLast(List &L, address P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen terakhir pada List L
    */
    //-------------your code here-------------
    // NIM : 1301154160
    address Q;
    Q = first(L);
    while(next(Q)!= NULL)
        Q = next(Q);
    P = alokasi(x);
    next(Q) = P;
    next(P) = NULL;


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
    // NIM : 1301154160
    P = first(L);
    infotype z = info(P);
    while (z.id != x.id || next(P) != NULL){
        P = next(P);
        z = info(P);
    if (next(P)==NULL && z.id != x.id){
    cout << "Pencarian error";

    }


    //----------------------------------------
    return P;
}
}

void deleteFirst(List &L, address &P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen pertama di dalam List L dilepas dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM :
    P = first(L);
    P = next(P);


    //----------------------------------------
}

void deleteLast(List &L, address &P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen tarakhir di dalam List L dilepas dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : 1301154160
    P = first(L);
    while(next(next(P)) != NULL)
        P = next(P);
    next(P) = NULL;+


    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : menampilkan info seluruh elemen list L
    */
    //-------------your code here-------------
    // NIM : 1301154160
    address P = first(L);
    while(next(P) != NULL){
    infotype asd = info(P);
        cout << "ID = " << asd.id<< endl;
        cout << "NIM = " << asd.nim<< endl;
        cout << "Kelas = " << asd.kelas<< endl;
        if (asd.id % 2 == 0)
        cout << "Profession = " << asd.transprofession<< endl;
        else
        cout << "Transportation = " << asd.transprofession<< endl;
        P = next(P);
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
    // NIM : 1301154160
    P = alokasi(x);
    next(P) = NULL;
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
    // NIM : 1301154160
    next(P) = next(Prec);
    next(Prec) = NULL;
    dealokasi(P);


    //----------------------------------------
}

