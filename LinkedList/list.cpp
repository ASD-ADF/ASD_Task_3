#include "list.h"

void createList(List &L) {
    /**
    * FS : first(L) diset Nil
    */
    //-------------your code here-------------
    // NIM : 1301154189
    first(L) = NULL;
    
    //----------------------------------------
}

address alokasi(infotype x) {
    /**
    * FS : mengembalikan elemen list baru dengan info = x, next elemen = Nil
    */
    //-------------your code here-------------
    // NIM : 1301154189
    address P = new elmlist;
    info(P) = x;
    next(P) = NULL;
    return P;
    //----------------------------------------
}

void dealokasi(address &P) {
    /**
    * FS : menghapus elemen yang ditunjuk oleh P (delete)
    */
    //-------------your code here-------------
    // NIM : 1301154189
    delete P;
    //----------------------------------------
}

void insertFirst(List &L, address P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen pertama pada List L
    */
    //-------------your code here-------------
    // NIM : 1301154393
    if (first(L) == NULL){
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
    // NIM : 1301154393
    if (first(L) == NULL){
        first(L) = P;
    } else {
        address Q = first(L);
        while (Q->next != NULL){
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
    //-------------your code here-------------
    // NIM : 1301154393
    address P = first(L);
    while (next(P) != NULL){
        if (info(P).id == x.id){
            cout<<info(P).id<<endl;
            P = next(P);
        } else {
            P = next(P);
        }
    }
    return P;
    //----------------------------------------
}

void deleteFirst(List &L, address &P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen pertama di dalam List L dilepas dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : 1301154421
    if (first(L) != NULL){
        P = first(L);
        if (next(P) == NULL){
            first(L) = NULL;
        } else {
            first(L) = next(P);
            next(P) = NULL;
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
    // NIM : 1301154421
    if (first(L) != NULL){
        address Q = first(L);
        if (Q->next == NULL){
            first(L) = NULL;
        } else {
            while ((Q->next)->next != NULL){
                Q = Q->next;
            }
            P = Q->next;
            Q->next = NULL;
        }
    }
    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : menampilkan info seluruh elemen list L
    */
    //-------------your code here-------------
    // NIM : 1301154393
    address P = first(L);
    while (P != NULL){
        cout<<"ID Pesawat        : "<<info(P).id<<endl;
        cout<<"Nama Pesawat      : "<<info(P).nama_pesawat<<endl;
        cout<<"Nama Pilot        : "<<info(P).pilot<<endl;
        cout<<"Kapasitas         : "<<info(P).kapasitas<<endl;
        cout<<"Tipe Kelas        : "<<info(P).kelas<<endl;
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
    // NIM : 1301154421
	P=next(Prec);
    	next(Prec)=P;	
    //----------------------------------------

}
void deleteAfter(address Prec, address &P) {
    /**
    * IS : Prec tidak NULL
    * FS : elemen yang berada di belakang elemen Prec dilepas
    *      dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : 1301154421
    P = next(P);
    next(Prec) = next(P);
    next(P) = NULL;
	
    //----------------------------------------
}

