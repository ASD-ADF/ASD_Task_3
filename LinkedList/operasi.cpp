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
    // NIM : 1301154351
	address p = first(L);
    if (first(L)!=NULL)
    {
        while ((info(p).id!=x.id) && (next (p) != NULL))
        {
            p=next(p);
        }
        if (info(p).id != x.id)
        {
            p= NULL;
            cout<< "data tidak ditemukan"<<endl;
        }
        else {
            cout <<"data ditemukan"<<endl;
        }
    }
    else
    {
        p = NULL;
        cout<< "data tidak ditemukan"<<endl;

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
    // NIM : 1301154351
	 address p,q,p1,r;
    q=first(L);
    while (next(q)!=NULL){
        p=q;
        while (next(p)!=NULL){
                r=p;
            if (p > next(p)){
                if (p==first(L)){
                    deleteFirst(L,p1);
                    insertAfter(next(p),p1);
                }
                else if (next(p)==NULL){
                    deleteLast(L,p1);
                    insertAfter(r,p1);
                }
                else{
                    deleteAfter(r,p1);
                    insertAfter(p,p1);
                }

            }
        }
        q=next(q);
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
    // NIM : 1301154351
    P,Prec = first(L);
    if (first(L)!=NULL)
    {
        while ((info(P).id!=x.id) && (next (P) != NULL))
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
