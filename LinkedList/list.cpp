#include "list.h"

void createList(List &L)
{
    /**
    * FS : first(L) diset Nil
    */
    //-------------your code here-------------
    // NIM : 1301154566
    L.first=NULL;

    //----------------------------------------
}

address alokasi(infotype x)
{
    /**
    * FS : mengembalikan elemen list baru dengan info = x, next elemen = Nil
    */

    address P;
    //-------------your code here-------------
    // NIM : 1301154566
    P= new elmlist;
    P->info =x;
    P->next = NULL;

    //----------------------------------------
    return P;
}

void dealokasi(address &P)
{
    /**
    * FS : menghapus elemen yang ditunjuk oleh P (delete)
    */
    //-------------your code here-------------
    // NIM : 1301154566
    delete P;

    //----------------------------------------
}

void insertFirst(List &L, address P)
{
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen pertama pada List L
    */
    //-------------your code here-------------
    // NIM : 1301154566
    if (L.first == NULL)
    {
        L.first=P;
    }
    else
    {
        P->next = L.first;
        L.first = P;
    }
    //----------------------------------------
}

void insertLast(List &L, address P)
{
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen terakhir pada List L
    */
    //-------------your code here-------------
    // NIM : 1301154566
    if (L.first == NULL )
    {
        L.first = P;
    }
    else
    {
        address Q = L.first;
        while (Q->next != NULL)
        {
            Q=Q->next;
        }
        Q->next=P;
    }
    //----------------------------------------
}

address findElm(List L, infotype x)
{
    /**
    * IS : List L mungkin kosong
    * FS : mengembalikan elemen dengan info.ID = x.ID,
           mengembalikan Nil jika tidak ditemukan
    */

    address P;
    //-------------your code here-------------
    // NIM : 1301154566
    if(L.first !=NULL)
    {
        P=L.first;
        while ((info(P).id != x.id)&& (next(P)!=NULL))
        {
            P = next(P);
        }
        if(info(P).id== x.id)
        {
            return P;
        }
        else
        {
            return NULL;
        }
    }
    //----------------------------------------
    return P;
}

void deleteFirst(List &L, address &P)
{
    /**
    * IS : List L mungkin kosong
    * FS : elemen pertama di dalam List L dilepas dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : 1301154566
    P = L.first;
    if (P->next !=NULL)
    {
        L.first = P->next;
        dealokasi(P);
    }
    else
    {
        L.first = NULL;
        dealokasi(P);
    }
    //----------------------------------------
}

void deleteLast(List &L, address &P)
{
    /**
    * IS : List L mungkin kosong
    * FS : elemen tarakhir di dalam List L dilepas dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : 1301154566
    address Q;
    Q = L.first;
    if (Q->next != NULL)
    {
        while (next(next(Q)) != NULL)
            Q = Q->next;
        P = Q->next;
        Q->next = NULL;
        dealokasi(P);
    }
    else
    {
        L.first = NULL;
        dealokasi(Q);
    }
    //----------------------------------------
}

void printInfo(List L)
{
    /**
    * FS : menampilkan info seluruh elemen list L
    */
    //-------------your code here-------------
    // NIM : 1301154566
    if(L.first!=NULL)
    {
        address P = L.first;
        if(next(P)== NULL)
        {
            cout<<"ID : "<<info(P).id<<endl;
            cout<<"Nama : "<<info(P).nama<<endl;
            cout<<"Kelas : "<<info(P).kelas<<endl;
            cout<<"Kapasitas : "<<info(P).kapasitas<<endl;
            cout<<"Jumlah unit : "<<info(P).jml_unit<<endl;

        }
        else
        {
            while(P!=NULL)
            {
                cout<<"ID : "<<info(P).id<<" ";
                cout<<"Nama : "<<info(P).nama<<" ";
                cout<<"Kelas : "<<info(P).kelas<<" ";
                cout<<"Kapasitas : "<<info(P).kapasitas<<" ";
                cout<<"Jumlah unit : "<<info(P).jml_unit<<" ";
                P=next(P);
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"KOSONG"<<endl;
    }
    //----------------------------------------
}


void insertAfter(address Prec, address P)
{
    /**
    * IS : Prec dan P tidak NULL
    * FS : elemen yang ditunjuk P menjadi elemen di belakang elemen yang
    *      ditunjuk pointer Prec
    */
    //-------------your code here-------------
    // NIM : 1301154566
    if (Prec->next != NULL)
    {
        P->next = next(Prec);
        Prec->next = P;
    }
    else
    {
        Prec->next = P;
        P->next = NULL;
    }
    //----------------------------------------

}
void deleteAfter(address Prec, address &P)
{
    /**
    * IS : Prec tidak NULL
    * FS : elemen yang berada di belakang elemen Prec dilepas
    *      dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : 1301154566
    if (Prec->next != NULL)
    {
        P = next(Prec);
        next(Prec) = next(P);
        dealokasi(P);
    }
    //----------------------------------------
}

