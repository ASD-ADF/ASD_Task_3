#include "list.h"

void createList(List &L) {
    /**
    * FS : first(L) diset Nil
    */
    first(L) = Nil;
    // NIM : 1301154127(Adhyfa F H)
    

    //----------------------------------------
}

address alokasi(infotype x) {
    /**
    * FS : mengembalikan elemen list baru dengan info = x, next elemen = Nil
    */

    address P;
    //-------------your code here-------------
    // NIM : 1301154379
    address P = new ElmList;
    info(P)   = x;
    next(P)   = Nil;
    //----------------------------------------
    return P;
}

void dealokasi(address &P) {
    /**
    * FS : menghapus elemen yang ditunjuk oleh P (delete)
    */
    delete(P);
    // NIM : 1301154127(Adhyfa)

	
    //----------------------------------------
}

void insertFirst(List &L, address P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen pertama pada List L
    */
    //-------------your code here-------------
    // NIM : 1301150057 ; (Ridhwan A)
    if(first(L) == Nil)
        first(L)=P;
    else
    {
        next(P) = first(L);
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
    // NIM : 1301154379
    
     if (first(L) == Nil)
    {
        first(L) = P;
    }
    else
    {
        address q = first(L);
        while (q->next != Nil)
            q = q->next;
        q->next = P;

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
    // NIM : 1301154449 (Atika Oktavia)
    address P;
    if(L.first != Nil)
    {
    	P = L.first;
    	while ((info(P) != x) && (next(P) != Nil))
    	{
    		P=next(P);
    		if(info(P) == x)
    		{
    			return P;
    		}else
    		{
    			return Nil;
    		}
    	}
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
    // NIM : 1301154449 (Atika Oktavia)
    if(L.first != Nil)
    {
    	P = L.first;
    	if(P->next == Nil)
        	L.first = Nil;
    	else
    	{
    		L.first = P->next;
    		P->next = Nil;
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
    // NIM : 1301150057 (Ridhwan A)

    if(first(L)!=Nil)
    {
        P = first(L);
        if(next(P) == Nil)
        {
            address q = first(L);
            while((q->next)->next != Nil)
                q = q->next;
            P = q-> next;
            q->next=Nil;
        }
    }	

    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : menampilkan info seluruh elemen list L
    */
    address P = first(L);
    while =(p != Nil){
    	cout<<" "info(P)<<endl;
    	P = next(P);
    }
    // NIM : 1301154127 (Adhyfa F H)

	
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
    // NIM : 1301154449 (Atika Oktavia)
    next(P) = next(Prec);
    next(Prec) = Nil;

    return P;
    
	
    //----------------------------------------
}

