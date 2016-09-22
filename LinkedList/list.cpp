#include "list.h"

void createList(List &L) {
    /**
    * FS : first(L) diset Nil
    */
    //-------------your code here-------------
    // NIM : 1301154491
    
    first(L) = NULL;
    

    //----------------------------------------
}

address alokasi(infotype x) {
    /**
    * FS : mengembalikan elemen list baru dengan info = x, next elemen = Nil
    */

    address P;
    //-------------your code here-------------
    // NIM : 1301154491
    
    address P = new ElmList;
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
    // NIM : 1301150029
    delete P;

	
    //----------------------------------------
}

void insertFirst(List &L, address P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen pertama pada List L
    */
    //-------------your code here-------------
    // NIM : 1301154491
    
    if (first(L)!=NULL)
    {
    	next (P) = first(L);
    	first(L) = P;
    }
    else
    {
    	P = first(L);
    }

    //----------------------------------------
}

void insertLast(List &L, address P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen terakhir pada List L
    */
    //-------------your code here-------------
    // NIM : 1301154491
    
    if (first(L)!=NULL)
    {
    	address Q = first(L);
    	while (next(Q)!=NULL)
    	{
    		Q = next(Q);
    	}
    	next(Q) = P;
    }
    else
    {
    	P = first(L);
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
    // NIM : 1301154351
    p = first(L);
    if (first(L)!=NULL)
    {
        while ((info(P).id!=x.id) && (next (p) != NULL))
        {
            p=next(p);
        }
        if (info(p).id != x.id)
        {
            p= NULL;
            cout<< "data tidak ditemukan"<<endl;
        }
        else
        {
            cout <<"data ditemukan"<<endl;
        }
    }
    else
    {
        p = NULL;
        cout<< "data tidak ditemukan"<<endl;

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
    // NIM : 1301150029
    if (first(L)!=NULL)
    {
        P = first(L);
        first(L) = next(P);
        next (P) = NULL;
    }

	
	
    //----------------------------------------
}

void deleteLast(List &L, address &P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen tarakhir di dalam List L dilepas dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : 1301150029
    if (first(L)!=NULL){
        if (next(first(L))==NULL){
            P=first(L);
            first(L)=NULL;
            }
        else {
            address q = first(L);
            while (next(next(q))!= NULL){
                q=next(q);
            }
            P=next(q);
            next(q)=NULL;
        }

   }


	

    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : menampilkan info seluruh elemen list L
    */
    //-------------your code here-------------
    // NIM : 1301154351
	if (first(L)!=NULL)
    {
        address p = first(L);
        while (p!=NULL)
        {
            cout << "id  = "<<info(p).id<<endl;
            cout << "Nama  = "<<info(p).nama<<endl;
            cout << "Mata Pelajaran  = "<<info(p).mataPel<<endl;
            cout << "Umur  = "<<info(p).umur<<endl;
            cout << "No HP  = "<<info(p).noHP<<endl;
            p = next(p);
        }
    }
    else
    {
        cout << "NULL" << endl;
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
    // NIM : 1301150029
    next(P)=next(Prec);
    next(Prec)=P;

	
    //----------------------------------------

}
void deleteAfter(address Prec, address &P) {
    /**
    * IS : Prec tidak NULL
    * FS : elemen yang berada di belakang elemen Prec dilepas
    *      dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : 1301154351
    P=next(Prec);
    next(Prec)=next(P);
    next(P)=NULL;
	
    //----------------------------------------
}

