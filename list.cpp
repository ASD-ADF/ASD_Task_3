#include "list.h"

void createList(List &L) {
    /**
    * FS : first(L) diset Nil
    */
    //-------------your code here-------------
    // NIM : 1301154244

    L.first=NULL;

    //----------------------------------------
}

address alokasi(infotype x) {
    /**
    * FS : mengembalikan elemen list baru dengan info = x, next elemen = Nil
    */

    address P;
    //-------------your code here-------------
    // NIM : 1301154244
    p = new elmlist;
    p->info=x;
    p->next=NULL;

    //----------------------------------------
    return P;
}

void dealokasi(address &P) {
    /**
    * FS : menghapus elemen yang ditunjuk oleh P (delete)
    */
    //-------------your code here-------------
    // NIM :1301154244

	delete p;
    //----------------------------------------
}

void insertFirst(List &L, address P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen pertama pada List L
    */
    //-------------your code here-------------
    // NIM : 1301154244
	if (L.first ==NULL){
        L.firs = p;
	}
	else {
        next(p) - L.first;
        L.first = p;
	}

    //----------------------------------------
}

void insertLast(List &L, address P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen terakhir pada List L
    */
    //-------------your code here-------------
    // NIM : 1301154244
    address Q;
    if(L.first == NULL){
        L.first = p;
    }
    else {
        Q = L.first;
        while(Q->next!=NULL){
            Q = Q->next;
        }
        Q->next =p;
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
    // NIM :1301154244
    if(L.first !=NULL){
        p = L.first;
        while ( (next(p)!=NULL)&& (info(p).id !=x.id){
            p = next(p);
        }
        if(info(p).id== x.id){
            return p;
        }
        else{
            return NULL;
        }
    }

    //----------------------------------------
    return P;
}

void deleteFirst(List &L, ads &P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen pertama di dalam List L dilepas dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM :1301154244
    if(L.first !=NULL){
        p = L.first;
        if(p->next==NULL){
            L.first=NULL;
        }
        else{
            L.first = p->next;
            p->next = NULL;
        }
    }



    //----------------------------------------
}

void deleteLast(List &L, ads &P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen tarakhir di dalam List L dilepas dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM :1301154244
    if(L.first !=NULL){
        p = L.first;
        if(next(p)==NULL){
            L.first = NULL;
        }
        else{
            address Q = L.first;
            while((Q->next)->next !=NULL){
                Q=Q->next;
            }
            p = Q->next = NULL;
        }
    }



    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : menampilkan info seluruh elemen list L
    */
    //-------------your code here-------------
    // NIM : 1301154244
    if(L.first !=NULL){
        address p = L.first;
        if(next(p)==NULL){
            cout<<info(p).id;

        }
        else{
            while(p!=NULL){
                cout<<info(p).id<<" ";
                p=next(p);
            }
            cout<<endl;
        }
    }
    else{
        cout<<"kosong"<<endl;
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
    // NIM : 1301154244
    p = prec->next;
        prec->next=p;


    //----------------------------------------

}
void deleteAfter(address Prec, address &P) {
    /**
    * IS : Prec tidak NULL
    * FS : elemen yang berada di belakang elemen Prec dilepas
    *      dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : 1301154244
    p = prec->next;
        prec->next = p->next;
        p->next = NULL;


    //----------------------------------------
}

