#include "list.h"
#include "operasi.h"


address sentinelSearch(List L, infotype x)
{
    address P;
    if (first(L) = NULL)
    {return NULL;}
    else
    {
        P = first (L);
        while (info(P).id != x.id && next(P) != NULL)
        {P=next(P);}
        if (info(P).id == x.id)
        {return P;}
        else
        {return NULL;}
    }
    //-------------your code here-------------
    // NIM : 1301154113
    //----------------------------------------

}

void insertionSort(List &L){

    if (l!= 0)
    * PR : mengurutkan elemen di dalam List L menggunakan algoritma insertion sort
    * FS : elemen di dalam List L terurut
    */

}


void deletebyID(List &L, infotype x) {
    Prec = findElm(L,x);
    deleteAfter(Prec,P);
    cout<<"ID yang terhapus : "<<info(P).id<<endl;
    cout<<"Address :  "<<endl;
    cout<<P;
    dealokasi(P);

    //-------------your code here-------------
    // NIM : 1301154113
    //----------------------------------------
}
