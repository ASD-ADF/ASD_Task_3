#include "list.h"

void createList(List &L) {
    /**
    * FS : first(L) diset Nil
    */
    //-------------your code here-------------
    // NIM : 1301154175
    first(L) = NULL;
    //----------------------------------------
}

address alokasi(infotype x) {
    /**
    * FS : mengembalikan elemen list baru dengan info = x, next elemen = Nil
    */

    //-------------your code here-------------
    // NIM : 1301154309
    address P = new elmlist;
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
    // NIM :1301154309
    delete (P);	
    //----------------------------------------
}

void insertFirst(List &L, address P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen pertama pada List L
    */
    //-------------your code here-------------
    // NIM : 1301154175
    	if (L.first == NULL){
            L.first = P;
    	} else {
    		next(P) = L.first;
    		L.first = P;
    	}
	

    //----------------------------------------
}

void insertLast(List &L, address P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen terakhir pada List L
    */
    //-------------your code here-------------
    // NIM : 1301154477
    address Q;
    if(L.first == NULL){
        L.first=P;
    }
    else {
        Q=L.first;
        while(Q->next!= NULL){
            Q=Q->next;
        }
        Q->next = P;
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
    // NIM : 1301154225
  if(L.first !=NULL){
        P=L.first;
        while ((info(P).id != x.id)&& (next(P)!=NULL)){
            P = next(P);
        }
        if(info(P).id== x.id){
            return P;
        }
        else{
            return NULL;
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
    // NIM : 1301154309
	if(L.first !=NULL){
        P=L.first;
        if(P->next==NULL){
            L.first=NULL;
        }
        else{
            L.first = P->next;
            P->next=NULL;
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
    // NIM : 1301154477

	if(L.first != NULL){
        P = L.first;
        if(next(P) == NULL){
            L.first = NULL;
        }
        else {
            address Q = L.first;
            while((Q->next)->next != NULL){
                Q=Q->next;
            }
        P = Q->next;
        Q->next = NULL;
        }
    }

    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : menampilkan info seluruh elemen list L
    */
    //-------------your code here-------------
    // NIM : 1301154175
	if(L.first!=NULL){
        address P = L.first;
        if(next(P)== NULL){
            cout<< info(P).id;
        }
        else {
            while(P!=NULL){
                cout<<info(P).id<<" ";
                P=next(P);
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Mohon maaf list anda kosong"<<endl;
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
    // NIM : 1301154225
	P = Prec->next;
	Prec->next =P;
    //----------------------------------------

}
void deleteAfter(address Prec, address &P) {
    /**
    * IS : Prec tidak NULL
    * FS : elemen yang berada di belakang elemen Prec dilepas
    *      dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : 1301154225
 	P = Prec->next;
	Prec->next = P->next;
	P->next = NULL;
    //----------------------------------------
}

