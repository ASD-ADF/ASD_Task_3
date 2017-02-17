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
    // NIM :1301154244
    address p;
    if (first(L)==NULL){
        return NULL;
    }
    else{
        p=first(L);
        while (next(p) !=NULL && info(p).id != x.id){
            p = next(p);
        }
        if (info(p).id == x.id){
            return p;
        }
        else{
            return NULL;
        }
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
    // NIM :1301154244
    address p;
    address q;
    infotype x;

    B = (L.first)->next;
    while (B!=NULL){
        p=L.first;
        while(p->info< B->info) & (p->next!=B){
            p->next=B;
            p=p->next;
            q=p;
        }
    }
    if (B->info < p->info){
        if (p!=L.first);
        insertFirst(x);

    }
    else{
            insertAfter(q,x);


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
    // NIM :1301154244
    prec = findElm(L,x);
    deleteAfter(prec,p);
    cout<<"id yang akan di hapus adalah : "<<info(p).id<<endl;
    dealokasi(p);


    //----------------------------------------
}
