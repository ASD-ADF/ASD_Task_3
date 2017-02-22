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
    // NIM : 1301154230
       address P = first(L);
    if (first(L)!=NILL)
    {
        while ((info(P).id!=x.id) && (next (P) != NILL))
        {
            P=next(P);
        }
        if (info(P).id != x.id)
        {
            P= NILL;
            cout<< "data tidak ditemukan"<<endl;
        }
        else {
            cout <<"data ditemukan"<<endl;
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
    // NIM : 1301154230
         address P,Q,M,N;
    Q=first(L);
    while (next(Q)!=NILL){
        P=Q;
        while (next(P)!=NILL){
                N=P;
            if (P > next(P)){
                if (P==first(L)){
                    deleteFirst(L,M);
                    insertAfter(next(P),M);
                }
                else if (next(P)==NILL){
                    deleteLast(L,M);
                    insertAfter(N,M);
                }
                else{
                    deleteAfter(N,M);
                    insertAfter(P,M);
                }

            }
        }
        Q=next(Q);
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
    // NIM :1301154230
        P,Prec = first(L);
    if (first(L)!=NILL)
    {
        while ((info(P).id!=x.id) && (next (P) != NILL))
        {
            Prec=P;
            P=next(P);
        }
        if (info(P).id != x.id)
        {
            cout<< "data tidak ditemukan"<<endl;
        }
        else {
            if (P==first(L)){
                deleteFirst(L,Q);
            }
            else if (next(P)==NULL){
                deleteLast(L,Q);
            }
            else
            {
                deleteAfter(Prec,Q);
            }
            cout <<"data sudah dihapus"<<endl;
        }
    }
    else
    {
        cout<< "data tidak ditemukan"<<endl;
    }

    //----------------------------------------
}
