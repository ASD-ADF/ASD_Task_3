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
    // NIM : 

	
	
    //----------------------------------------
}

void deleteLast(List &L, address &P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen tarakhir di dalam List L dilepas dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : 

	

    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : menampilkan info seluruh elemen list L
    */
    //-------------your code here-------------
    // NIM : 1301154183
    if (first(L) != NULL)
    {
        address P = first(L);
        while(P != NULL)
        {
            infotype kereta = info(P);
            cout << "ID Kereta: " <<kereta.id<< endl;
            cout << "Kelas: " <<kereta.stasiun<< endl;
            cout << "Stasiun: " <<kereta.stasiun<< endl;
            cout << "Durasi: "<<kereta.durasi<<endl<<endl;
            P = next(P);
        }

    }
    else
    {
        cout << "List KOSONG!" << endl;
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

