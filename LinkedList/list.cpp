#include "list.h"

void createList(List &L) {
    /**
    * FS : first(L) diset Nil
    */
    //-------------your code here-------------
    // NIM : 1301154566
    l.first=NULL;

    //----------------------------------------
}

address alokasi(infotype x) {
    /**
    * FS : mengembalikan elemen list baru dengan info = x, next elemen = Nil
    */

    address P;
    //-------------your code here-------------
    // NIM : 1301154566
    adr P = new elemenlist;
    P->info =x;
    P->next = NULL;
    return p;

    //----------------------------------------
    return P;
}

void dealokasi(address &P) {
    /**
    * FS : menghapus elemen yang ditunjuk oleh P (delete)
    */
    //-------------your code here-------------
    // NIM : 1301154566
    delete P;

    //----------------------------------------
}

void insertFirst(List &L, address P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen pertama pada List L
    */
    //-------------your code here-------------
    // NIM : 1301154566
    if (l.first == NULL)
    {
        l.first=P;
    }
    else
    {
        P->next = l.first;
        l.first = P;
    }
    //----------------------------------------
}

void insertLast(List &L, address P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen terakhir pada List L
    */
    //-------------your code here-------------
    // NIM : 1301154566
    if (l.first == NULL )
    {
        l.first = P;
            }
    else
    {
        adr Q = l.first;
        while (Q->next != NULL)
        {
            Q=Q->next;
        }
        Q->next=Q;
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
    // NIM : 1301154566
    adr P;
    if (l.first != NULL)
    {
        P = l.first;
        while (P != NULL)
        {
            if (P->info == x)
            {
                return P;
            }
            P = P->next;
        }
        return NULL;
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
    // NIM : 1301154566
    if (l.first != NULL)
    {
        p = l.first;
        if (P->next == NULL)
        {
            l.first = NULL;
        }
        else
        {
            l.first = P->next;
            P->next = NULL;
        }
    }
    else
    {
        /**
        cout<<" "<<endl;
        **/
    }
    //----------------------------------------
}

void deleteLast(List &L, address &P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen tarakhir di dalam List L dilepas dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : 1301154566
    if (l.first != NULL)
    {
        adr Q = l.first;
        if (Q->next == NULL)
    {
        l.first = NULL;
    }
    else
    {
        while ((Q->next)->next != NULL)
            {
                Q = Q->next;
            }
            P = Q->next;
            Q->next = NULL;
        }
    }
    else
    {
        /**
        cout<<" "<<endl;
        **/
    }
    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : menampilkan info seluruh elemen list L
    */
    //-------------your code here-------------
    // NIM : 1301154566
    adr P;
    P = l.first;
    if (first(l)== NULL)
    {
        cout<< "List Kosong!"<<endl;
    }
    else
    {
        while (P!=NULL)
        {
            cout<<P->info<<" ";
            P = P->next;
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

