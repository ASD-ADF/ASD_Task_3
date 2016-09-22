#include "list.h"

void createList(List &L) {
    /**
    * FS : first(L) diset Nil
    */
    //-------------your code here-------------
    // NIM : 1301150435
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
    // NIM : 1301150435

    P = new elmlist;
    info(P) = x;
    next(P) = NULL;


    //----------------------------------------
    return P;
}

void dealokasi(address &P)
{
    /**
    * FS : menghapus elemen yang ditunjuk oleh P (delete)
    */
    //-------------your code here-------------
    // NIM : 1301150435

    delete(P);


    //----------------------------------------
}

void insertFirst(List &L, address P)
{
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen pertama pada List L
    */
    //-------------your code here-------------
    // NIM : 1301154267  // ERROR KETIKA MELAKUKAN MERGE, SEHINGGA EDIT MANUAL OLEH KETUA
    if (first(L) == NULL)
    {
        first(L) = P;
    } else
    {
        next(P) =first(L);
        first(L) = P;
    }


    //----------------------------------------
}

void insertLast(List &L, address P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen terakhir pada List L
    */
    //-------------your code here-------------
    // NIM : 1301154267   // ERROR KETIKA MELAKUKAN MERGE, SEHINGGA EDIT MANUAL OLEH KETUA
    address Q;

    if (first(L) == NULL)
    {
        first(L) = P;
    } else
    {
        Q = first(L);
        while (next(Q) != NULL)
        {
            Q=next(Q);
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
    // NIM : 1301154239
    if(first(L) == NULL)
        return NULL;
    else
    {
        P = first(L);
        while (info(P).id != x.id && next(P) != NULL)
        {
            P=next(P);
        }
        if(info(P).id != x.id)
        {
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
    // NIM : 1301154141
    if (first(L) == NULL)
    {
        cout <<"MAAF LIST KOSONG"<<endl;
    } else
    {
    P = first(L);
    first(L) = next(P);
    next(P) = NULL;

    cout <<"Data Berhasil Di Hapus"<<endl;
    }


    //----------------------------------------
}

void deleteLast(List &L, address &P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen tarakhir di dalam List L dilepas dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : 1301154141
    if (first(L) == NULL)
    {
        cout << "MAAF LIST KOSONG";
    } else
    {
    address Q;
    Q = first(L);
    while (next(next(Q)) != NULL)
    {
        Q = next(Q);
    }
    P = next(Q);
    next(Q) = NULL;

    cout <<"Data Berhasil Dihapus"<<endl;
    }
    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : menampilkan info seluruh elemen list L
    */
    //-------------your code here-------------
    // NIM : 1301154239
    address P;

     if(first(L) != NULL)
    {
        P = first(L);
        if (next(P) == NULL)
        {
            cout <<"Kode Dosen  : ";
            cout <<info(P).id<<endl;
            cout <<"Nama Dosen  : ";
            cout <<info(P).nama<<endl;
            cout <<"Mata Kuliah : ";
            cout <<info(P).matkul<<endl;
            cout <<"Masa Kerja  : ";
            cout <<info(P).masakerja<<endl;
            cout <<"Asal        : ";
            cout <<info(P).asal<<endl;
        }
        else
        {
            while (P != NULL)
            {
                cout <<"Kode Dosen  : ";
                cout <<info(P).id<<endl;
                cout <<"Nama Dosen  : ";
                cout <<info(P).nama<<endl;
                cout <<"Mata Kuliah : ";
                cout <<info(P).matkul<<endl;
                cout <<"Masa Kerja  : ";
                cout <<info(P).masakerja<<endl;
                cout <<"Asal        : ";
                cout <<info(P).asal<<endl;
                P = next(P);
                cout << endl;
                getch();
            }
        }
    }
    else
    {
        cout <<"LIST KOSONG"<<endl;
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
    // NIM : 1301154267   // ERROR KETIKA MELAKUKAN MERGE, SEHINGGA EDIT MANUAL OLEH KETUA

    next(P) = next(Prec);
    next(Prec) = P;


    //----------------------------------------

}
void deleteAfter(address Prec, address &P) {
    /**
    * IS : Prec tidak NULL
    * FS : elemen yang berada di belakang elemen Prec dilepas
    *      dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : 1301154141

    P = next(Prec);
    next(Prec) = next(P);
    next(P) = NULL;


    //----------------------------------------
}

