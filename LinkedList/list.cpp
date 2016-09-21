#include "list.h"
infotype x;

void createList(List &L)
{
    /**
    * FS : first(L) diset Nil
    */
    //-------------your code here-------------
    // NIM : 1301154160
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
    // NIM :1301154160
    P = new elmlist;
    P->info = x;
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
    // NIM : 1301154160
    P = NULL;
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
    // NIM : 1301154160

    if (P != NULL)
    {
        if (L.first != NULL)
        {
            P->next = L.first;
            L.first = P;

        }
        else
        {
            L.first = P;
        }
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
    // NIM : 1301154160

    if (P != NULL)
    {
        address Q;
        Q = L.first;
        while (Q->next != NULL)
            Q = Q->next;
        Q->next = P;
        P->next = NULL;
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
    // NIM : 1301154160

    P = L.first;
    infotype z = info(P);
    while (P->next != NULL && z.id!= x.id)
        P = P->next;
    if ( z.id == x.id)
        return P;
    else
        return NULL;


    //----------------------------------------
}


void deleteFirst(List &L, address &P)
{
    /**
    * IS : List L mungkin kosong
    * FS : elemen pertama di dalam List L dilepas dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : 1301154160
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
    // NIM : 1301154160

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
    // NIM : 1301154160
    if (first(L) != NULL)
    {
        address P = first(L);
        while(P != NULL)
        {
            infotype asd = info(P);
            cout << "ID = " << asd.id<< endl;
            cout << "NIM = " << asd.nim<< endl;
            cout << "Kelas = " << asd.kelas<< endl;
            if (asd.id % 2 == 0)
                cout << "Profession = " << asd.transprofession<< endl;
            else
                cout << "Transportation = " << asd.transprofession<< endl;
            P = next(P);
        }

    }
    else
    {
        cout << "List KOSONG!" << endl;
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
    // NIM : 1301154160
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
    // NIM : 1301154160
    if (Prec->next != NULL)
    {
        P = next(Prec);
        next(Prec) = next(P);
        dealokasi(P);
    }

    //----------------------------------------
}

infotype isiInfotype(){

            infotype asd;
            cout << "ID = ";
            cin >> asd.id;
            cout << "NIM = ";
            cin >> asd.nim;
            cout << "Class = ";
            cin >> asd.kelas;
            if (asd.id % 2 == 0)
                cout << "Profession = ";
            else
                cout << "Transportation = ";
            cin >> asd.transprofession;


        return asd;

}
