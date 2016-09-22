#include "list.h"

void createList(List &L) {
    /**
    * FS : first(L) diset Nil
    */
    //-------------your code here-------------
    // NIM :-
    first(L) = Nill;
    //----------------------------------------
}

address alokasi(infotype x) {
    /**
    * FS : mengembalikan elemen list baru dengan info = x, next elemen = Nil
    */

    address P = new elmlist;
    //-------------your code here-------------
    // NIM :-
    info(P) = x;

    next(P) = Nill;
    //----------------------------------------
    return P;
}

void dealokasi(address &P) {
    /**
    * FS : menghapus elemen yang ditunjuk oleh P (delete)
    */
    //-------------your code here-------------
    // NIM :-
    delete P;
    //----------------------------------------
}

void insertFirst(List &L, address P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen pertama pada List L
    */
    //-------------your code here-------------
    // NIM :1301154099
    if (first(L) == Nill){
        first(L) = P;
    } else {
        next(P) = first(L);
        first(L) = P;
    }

    //----------------------------------------
}

void insertLast(List &L, address P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen terakhir pada List L
    */
    //-------------your code here-------------
    // NIM :1301154099
    if (first(L) == Nill){
        first(L) = P;
    } else {
        address Q = first(L);
        while (Q->next != Nill){
            Q = Q->next;
        }
        Q->next = P;
    }

    //----------------------------------------
}

address findElm(List L, infotype x) {
    /**
    * IS : List L mungkin kosong
    * FS : mengembalikan elemen dengan info.ID = x.ID,
           mengembalikan Nil jika tidak ditemukan
    */

    address P = first(L);
    //-------------your code here-------------
    // NIM :1301154099
    while (next(P) != Nill){
        if (info(P).id == x.id){
            P = next(P);
        } else {
            P = next(P);
        }
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
    // NIM :-
    if (first(L) != Nill){
        P = first(L);
        if (next(P) == Nill){
            first(L) = Nill;
        } else {
            first(L) = next(P);
            next(P) = Nill;
        }
    }
    //----------------------------------------
}

void deleteLast(List &L, address &P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen tarakhir di dalam List L dilepas dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM :-
    if (first(L) != Nill){
        address Q = first(L);
        if (Q->next == Nill){
            first(L) = Nill;
        } else {
            while ((Q->next)->next != Nill){
                Q = Q->next;
            }
            Q->next = Nill;
            P = Q->next;
        }
    }
    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : menampilkan info seluruh elemen list L
    */
    //-------------your code here-------------
    // NIM :1301154099
    address P = first(L);
    while (P != Nill){
        cout<<"id BUS                     : "<<info(P).id<<endl;
        cout<<"nama BUS                   : "<<info(P).nama<<endl;
        cout<<"kelas BUS                  : "<<info(P).kelas<<endl;
        cout<<"kapasitas tiap armada BUS : "<<info(P).kapasitas_armada<<endl;
        cout<<"jumlah armada BUS         : "<<info(P).jmlh_armada<<endl;
        cout<<endl;
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
    // NIM :-
    next(Prec) = P;
    next(P) = next(Prec);
    //----------------------------------------

}

void deleteAfter(address Prec, address &P) {
    /**
    * IS : Prec tidak NULL
    * FS : elemen yang berada di belakang elemen Prec dilepas
    *      dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM :-
    P = next (Prec) ;
    next(Prec)= next(P);
    next(P)=Nill;

    //----------------------------------------
}

