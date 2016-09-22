#include "list.h"

void createList(List &L) {
    /**
    * FS : first(L) diset Nil
    */
    //-------------your code here-------------
    // NIM : 1301150001	
    first(L) = Nil;
    

    //----------------------------------------
}

address alokasi(infotype x) {
    /**
    * FS : mengembalikan elemen list baru dengan info = x, next elemen = Nil
    */

    address P;
    //-------------your code here-------------
    // NIM : 1301154183
    P = new elmlist;
    info(P) = x;

    //----------------------------------------
    return P;
}

void dealokasi(address &P) {
    /**
    * FS : menghapus elemen yang ditunjuk oleh P (delete)
    */
    //-------------your code here-------------
    // NIM : 1301154281
    delete P;

	
    //----------------------------------------
}

void insertFirst(List &L, address P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen pertama pada List L
    */
    //-------------your code here-------------
    // NIM : 1301150001	
    if (P != Nil)
    {
    	if (first(L) !=Nil)
    	{
    		next (P) = first (L);
    		first (L) = P;
    	}
    	else
    	{
    		first (L) = P;
    	}
	

    //----------------------------------------
}

void insertLast(List &L, address P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen terakhir pada List L
    */
    //-------------your code here-------------
    // NIM : 1301154281
    address Q;
    if (first(L)) == Nil)
    {
    	first(L) = P;
 
    }
    else
	{
    		Q = first (L);
    		while (next(Q)) != Nil)
    		{
    			Q = next(Q);
    		}
		next(Q) = P;
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
    // NIM : 1301154183
    P = first(L);
    infotype z = info(P);
    while (z.id != x.id && next(P) != Nil)
    {
        P = next(P);
        z = info(P);
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
    // NIM : 1301154281
	if(first(L) != Nil)
    {
        P = first(L);
        if(next(P) == Nil) // kondisi jika elemen pada list cuma ada 1
            first(L) = Nil;
        else // kondisi jika elemen list > 1
        {
            first(L) = next(P);
            next(P) = Nil;
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
    // NIM : 1301154281
    if(first(L) != Nil)
    {
        P = first(L);
        if (next(P) == Nil)// kondisi jika elemen pada list cuma ada 1
            first(L) = Nil;
        else // kondisi jika elemen list > 1
        {
            address Q = first(L);
            while(next(next(Q)) != Nil)
                Q=next(Q);
            P = next(Q);
            next(Q) = Nil;
        }
    }
    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : menampilkan info seluruh elemen list L
    */
    //-------------your code here-------------
    // NIM : 

	
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
    
	
    //----------------------------------------
}

