#include "list.h"

void createList(List &L)
{
    /**
    * FS : first(L) diset Nil
    */
    //-------------your code here-------------
    // NIM : 1301154398
    first(L) = NULL;

    //----------------------------------------
}

address alokasi(infotype x)
{
    /**
    * FS : mengembalikan elemen list baru dengan info = x, next elemen = Nil
    */

    address P;
    //-------------your code here-------------
    // NIM : 1301154398
    P = new elmlist;
    p -> info() = x;
    p -> next() = NULL;

    //----------------------------------------
    return P;
}

void dealokasi(address &P)
{
    /**
    * FS : menghapus elemen yang ditunjuk oleh P (delete)
    */
    //-------------your code here-------------
    // NIM : 1301154398
    remove(P);


    //----------------------------------------
}

void insertFirst(List &L, address P)
{
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen pertama pada List L
    */
    //-------------your code here-------------
    // NIM : 1301154398
    if (first(L) == NULL)
    {
        first(L) = P;
    }
    else
    {
        P -> next() = first(L);
        first(L) = P;
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
    // NIM : 1301154398
    if (first(L) = NULL)
    {
        first(L) = P;
    }
    else
    {
        address q = first(L);
        while (q -> next != NULL)
        {
            q = q -> next();
        }
    }
    q = next = P;

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
    // NIM :1301154398
    if (first(L) != NULL)
    {
        P = first(L);
        while (P != NULL)
        {
            if (P -> info() == x)
            {
                return P;
            }
            P = P -> next();
        }
        return NULL;
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
    // NIM :1301154398
    if (first(L) != NULL)
    {
        P = first(L);
        if (P -> next == NULL)
        {
            first(L) = NULL;
        }
    }
    else
    {
        first(L) = P -> next();
        P -> next() = NULL;
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
    // NIM :1301154398
    if (first(L) != NULL)
    {
        address q = first(L);
        if (q -> next == NULL)
        {
            first(L) = NULL;
        }
    }
    else
    {
        while ((q -> next) -> next != NULL)
        {
            q = q -> next();
        }
        P = q _> next();
        q -> next() = NULL;

        //----------------------------------------
    }

    void printInfo(List L)
    {
        /**
        * FS : menampilkan info seluruh elemen list L
        */
        //-------------your code here-------------
        // NIM :1301154398
        if (first(L) != NULL)
        {
            address P = first(L);
            while (P != NULL)
            {
                cout << info(P) << endl;
                P = next(P);
            }
        }
        else
        {
            cout << "No List!" << endl;
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
        // NIM :1301154398
        next(P) = next(Prec);
        next(Prec) = P;

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
        // NIM :1301154398
        P = next (Prec);
        next(Prec) = next(P);
        next(P) = NULL;
        return P;

        //----------------------------------------
    }

