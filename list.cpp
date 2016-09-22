#include "list.h"

void createList(List &L) {
    /**
    * FS : first(L) diset Nil
    */
    //-------------your code here-------------
    // NIM :1301154118

    L.first = Nil;
    //----------------------------------------
}

address alokasi(infotype x) {
    /**
    * FS : mengembalikan elemen list baru dengan info = x, next elemen = Nil
    */

    address P;
    //-------------your code here-------------
    // NIM :1301154118

    P = new elmlist;
+    P -> info = x;
+    P -> next = Nil;
    //----------------------------------------
    return P;
}

void dealokasi(address &P) {
    /**
    * FS : menghapus elemen yang ditunjuk oleh P (delete)
    */
    //-------------your code here-------------
    // NIM :1301154118

	delete P;
    //----------------------------------------
}

void insertFirst(List &L, address P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen pertama pada List L
    */
    //-------------your code here-------------
    // NIM : 1301154118

    if (L.first == Nil){
+        L.first = P
+	}
+	else{
+        next(P) = L.first;
+        L.first = P;


    //----------------------------------------
}

void insertLast(List &L, address P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen terakhir pada List L
    */
    //-------------your code here-------------
    // NIM :    1301154118

	address Q;
    if (L.first == Nil){
        L.first = P;
   }else {
       Q = L.first;
        while (Q -> next != Nil){
            Q = Q -> next;
        }
        Q -> next = P;
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
    // NIM :1301154118

	if (L.first != Nil){
        P = L.first;
        while ((info(P).id != x.id)&&(next(P) != Nil)){
            P = next(P);
        }
        if (info(P).id == x.id){
            return P;
        }else{
            return Nil;
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
    // NIM :1301154118


	if (L.first != Nil){
        P = L.first;
        if (P-> next == Nil){
            L.first = Nil;
        }
        else {
            L.first = P->next;
            p->next = Nil;
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
    // NIM :1301154118

    if(L.first != Nil){
        P = L.first;
        if (next(P) == Nil){
           L.first = Nil;
        }
        else {
            address Q = L.first;
            while ((Q->next)->next != Nil){
                Q = Q->next;
            }
        P = Q->next;
       Q->next = Nil;
        }
    }


    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : menampilkan info seluruh elemen list L
    */
    //-------------your code here-------------
    // NIM :1301154118
    if(L.first != Nil){
       address P = L.first;
        if(next(P) == Nil){
            cout << info(P).id;
        }
        else {
            while(P != Nil){
                cout << info(P).id <<" ";
                P = next(P);
            }
            cout<<endl;
        }
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
    // NIM :1301154118

	P = Prec ->next;
        prec ->next = P;
    //----------------------------------------

}
void deleteAfter(address Prec, address &P) {
    /**
    * IS : Prec tidak NULL
    * FS : elemen yang berada di belakang elemen Prec dilepas
    *      dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : 1301154118
    P = Prec-> next;
        prec-> next = P->next;
        P->next = Nil;

    //----------------------------------------
}

