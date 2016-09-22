#include "list.h"

void createList(List &L) {
     // NIM : 1301154533
    first(L) = nil;

}

address alokasi(bus x) {
    /**
    * FS : mengembalikan elemen list baru dengan info = x, next elemen = Nil
    */

    address P;
    // NIM : 1301154667
    address P = new elmlist;
    info(P) = x;
    next(P) = NULL;
    return P;
}

void dealokasi(address &P)
{
    /**
    * FS : menghapus elemen yang ditunjuk oleh P (delete)
    */

    // NIM : 1301154169

    delete(p);
}

void insertFirst(List &L, address P) {
    // NIM : 1301154533
    if(first(L) == NULL)
    {
        first(L)=p;
    }
    else
    {
        next(P) = first(L);
        first(L) = P;
    }
}

void insertLast(List &L, address P) {
     // NIM : 1301154533
    adr Q;
    if (first(L) == NULL)
    {
        first(l) = p;
    } else
    {
        Q = first(L);
        while(next(Q)!= NULL)
        {
            Q = next(Q);
        }
        next(Q) = P;
    }
}

address findElm(List L, bus x)
{
    /**
    * IS : List L mungkin kosong
    * FS : mengembalikan elemen dengan info.ID = x.ID,
           mengembalikan Nil jika tidak ditemukan
    */
    // NIM : 1301154169
    address P;
    if (L.first != nil)
    {
        P = L.first;
        while ((info(P) != x) && (next(P) != nil))
        {
            P = next (P);
            if(info(P) == x)
            {
                return P;
            }
            else
            {
                return nil;
            }
        }
    }

    return P;
}


void deleteFirst(List &L, address &P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen pertama di dalam List L dilepas dan disimpan/ditunjuk oleh P
    */
    // NIM : 1301154667
    if (first(L) != NULL){
        P = first(L);
        if (next(P) == NULL){
            first(L) = NULL;
        } else{
            first(L) = next(P);
            next(P) = NULL;
        }
    }
}

void deleteLast(List &L, address &P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen tarakhir di dalam List L dilepas dan disimpan/ditunjuk oleh P
    */
    // NIM : 1301154667
    if(first(L) != NULL){
        address Q = first(L);
        if(next(Q) == NULL){
            first(L) = NULL;
        }else{
            while ((Q->next)->next != NULL){
                Q = next(Q);
            }
            P = next(Q);
            next(Q)=NULL;
            }
    }
}

void printInfo(List L)
{
    /**
    * FS : menampilkan info seluruh elemen list L
    */
    // NIM : 1301154169
    if (L.first != nil)
    {
        address P = L.first;
        if (P->next == nil)
        {
            cout<< info(P)<<" ";
        }
        else
        {
            while (P != nil)
            {
                cout << info(P)<<" ";
                P = next (P);
            }

            cout << endl;
        }
    }
    else
    {
        cout << "List Kosong"<<endl;
    }
}



void insertAfter(address Prec, address P) {
    /**
    * IS : Prec dan P tidak NULL
    * FS : elemen yang ditunjuk P menjadi elemen di belakang elemen yang
    *      ditunjuk pointer Prec
    */
    // NIM :1301154407
    next(P)=next(Prec);
    next(Prec)=P;

}
void deleteAfter(address Prec, address &P) {
    /**
    * IS : Prec tidak NULL
    * FS : elemen yang berada di belakang elemen Prec dilepas
    *      dan disimpan/ditunjuk oleh P
    */
    // NIM : 1301154407
    P = next(Prec);
    next(Prec) = next(P);
    next(P) = NULL;
}

