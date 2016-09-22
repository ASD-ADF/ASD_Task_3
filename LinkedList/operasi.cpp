#include "list.h"
#include "operasi.h"


address sentinelSearch(List L, infotype x){
    /**
    * IS : List mungkin kosong
    * PR : mencari elemen dengan ID infotype = infotype x menggunakan bantuan sentinel
    * FS : mengembalikan address elemen dengan ID infotype x jika ditemukan,
    *      mengembalikan NULL jika tidak ditemukan
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

void insertionSort(List &L){
    /**
    * IS : List mungkin kosong
    * PR : mengurutkan elemen di dalam List L menggunakan algoritma insertion sort
    * FS : elemen di dalam List L terurut
    */

    //-------------your code here-------------
    // NIM : 


    //----------------------------------------
}


void deletebyID(List &L, infotype x) {
    /**
    * IS : List L mungkin kosong
    * FS : 1 elemen dengan id info = x.id dihapus dari list (dealokasi)
    */

    address Prec, P;
    // NIM : 1301154407
    P,Prec = first(L);
    if (first(L) != NULL)
    {
        while ((info(P).id!=x.id) && (next(P) !=NULL))
        {
            Prec = P;
            P = next(P);
        }
        if (info(P).id != x.id)
        {
            cout << "Data tidak ada" << endl;
        }
        else
        {
            if (P == first(L))
            {
                deleteFirst(L,P);
            }
            else if (next(P) == NULL)
            {
                deleteLast(L,P);
            }
            else
            {
                deleteAfter(Prec,P);
            }
            cout << "data telah dihapus"<< endl;
        }
    }
    else
    {
        cout << "data tidak ada" << endl;
    }
}
