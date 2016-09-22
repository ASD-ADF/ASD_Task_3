#include "list.h"

void createList(List &L) {
    /**
    * FS : first(L) diset Nil
    */
    //-------------your code here-------------
    // NIM : 1301154342
    first(L) = NULL;

    //----------------------------------------
}

address alokasi(infotype x) {
    /**
    * FS : mengembalikan elemen list baru dengan info = x, next elemen = Nil
    */

    //address P;
    //-------------your code here-------------
    // NIM : 1301154342
    address P = new elmlist;
    info(P) = x;
    next(P) = NULL;
    return P;

    //----------------------------------------
    return P;
}

void dealokasi(address &P) {
    /**
    * FS : menghapus elemen yang ditunjuk oleh P (delete)
    */
    //-------------your code here-------------
    // NIM : 1301154342

    delete(P);
    //----------------------------------------
}

void insertFirst(List &L, address P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen pertama pada List L
    */
    //-------------your code here-------------
    // NIM : 1301154342

    if (first(L) == NULL)
        first(L)= P;

    else{
        next(P)= first(L);
        first(L)= P;
    }
    //----------------------------------------
}

void insertLast(List &L, address P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen terakhir pada List L
    */
    //-------------your code here-------------
    // NIM : 1301154342

    if (first(L)== NULL)
        first(L)=P;
    else{
        while (next(P)!= NULL){
            P=next(P);
            address Q = next(P);
            Q=P;
        }
    }
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
    // NIM : 1301154342
    while ((info(P).id != x.id) && (next(P)!= NULL))
        P = next(P);


    //----------------------------------------
    return P;
}

void deleteFirst(List &L, address &P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen pertama di dalam List L dilepas dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : 1301154342
if(first(L) != NULL)
    {
        P=first(L);
        if (next(P)== NULL)
            first(L)=NULL;
        else
        {
            first(L)=next(P);
            next(P)=NULL;
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
    // NIM : 1301154342

     if (first(L) != NULL)
    {
        P = first(L);
        if (next(P)== NULL)
            first(L) = NULL;
        else
        {
            address Q = first(L);
            while (next(next(Q))!= NULL)
                Q=next(Q);
            P=next(P);
            next(Q)= NULL;
        }
    }

    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : menampilkan info seluruh elemen list L
    */
    //-------------your code here-------------
    // NIM : 1301154342
    if (first(L) != NULL)
    {
        address P = first(L);
        while (P != NULL)
        {
            cout<<"ID: "<<(info(P).id)<<endl;
            cout<<"Nama Dokter: "<<(info(P).nama)<<endl;
            cout<<"Keahlian: "<<(info(P).spesialis)<<endl;
            cout<<"Umur: "<<(info(P).umur)<<endl;
            cout<<"Asal: "<<(info(P).daerah)<<endl;
            P= next(P);
            cout<<endl;
        }
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
    // NIM : 1301154342
    if (next(Prec) != NULL){
        next(P)= next(Prec);
        next(Prec) = P;
    }

    else {
        next(Prec) = P;
        next(P)=NULL;
    }

    //----------------------------------------
}
void deleteAfter(address Prec, address &P) {
    /**
    * IS : Prec tidak NULL
    * FS : elemen yang berada di belakang elemen Prec dilepas
    *      dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : 1301154342
    if (next(Prec) != NULL){
        P=next(Prec);
        next(Prec)= next(P);
        dealokasi(P);
    }



    //----------------------------------------
}

