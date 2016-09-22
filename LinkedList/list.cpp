#include "list.h"

void createList(List &L) {
    /**
    * FS : first(L) diset Nil
    */
    //-------------your code here-------------
    // NIM :
    first(L) = NULL;

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
    next(P) = NULL;

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
    if (first(L) == NULL){
        first(L) = P;
    }
    else{
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
    // NIM :
    if (first(L) != NULL){
        address temp = first(L);
        while (next(temp) != NULL){
            temp = next(temp);
        }
        next(temp) = P;
    }
    else{
        first(L) = P;
    }

    //----------------------------------------
}

address findElm(List L, infotype x){
    /**
    * IS : List L mungkin kosong
    * FS : mengembalikan elemen dengan info.ID = x.ID,
           mengembalikan Nil jika tidak ditemukan
    */

    address temp;
    //-------------your code here-------------
    // NIM :
    if (first(L) != NULL){
        temp = first(L);
        while ((info(temp).id != x.id) && (next(temp) != NULL)){
            temp = next(temp);
        }
            if (info(temp).id == x.id){
                return temp;
            }
            else{
                return NULL;
            }
    }
    //---------------------------------------
}
void deleteFirst(List &L, address &P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen pertama di dalam List L dilepas dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM :
    if(first(L)!= NULL){
        P = first(L);
        if (next(P) == NULL){
            first(L) = NULL;
        }
        else{
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
    // NIM :
    if (first(L) != NULL){
        P = first(L);
        if ((next(P) == NULL))
            first(L) = NULL;
    }
    else{
        address temp = first(L);
        while (next(next(temp))!= NULL){
            temp = next(temp);
        }
        P = next(temp);
        next(temp) = NULL;
    }
    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : menampilkan info seluruh elemen list L
    */
    //-------------your code here-------------
    // NIM :
    if (first(L) != NULL){
        address P = first(L);
        if (next(P) == NULL){
            cout <<"ID          : "<<(info(P)).id<<endl;
            cout <<"Merk Raket  : "<<(info(P)).raket<<endl;
            cout <<"Harga       : "<<(info(P)).harga<<endl;
        }
        else{
            while(P != NULL){
            cout <<"ID          : "<<(info(P)).id<<endl;
            cout <<"Merk Raket  : "<<(info(P)).raket<<endl;
            cout <<"Harga       : "<<(info(P)).harga<<endl;
            P = next(P);
            }
            cout<<endl;
        }
        cout << "Tidak ada data";
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
    // NIM :
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
    // NIM :

    if (next(Prec) != NULL) {
        P = next(Prec);
        next(Prec) = next(P);
        dealokasi(P);
    }
    //----------------------------------------
}

