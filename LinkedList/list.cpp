#include "list.h"

void createList(List &L) {
    /**
    * FS : first(L) diset Nil
    */
    //-------------your code here-------------
    // NIM : 1301140057
    first(L) = Nil;

    //----------------------------------------
}

address alokasi(infotype x) {
    /**
    * FS : mengembalikan elemen list baru dengan info = x, next elemen = Nil
    */

    address P;
    //-------------your code here-------------
    // NIM : 1301140057
    P = new elmlist;
    info(P) = x;
    next(P) = Nil;

    //----------------------------------------
    return P;
}

void dealokasi(address &P) {
    /**
    * FS : menghapus elemen yang ditunjuk oleh P (delete)
    */
    //-------------your code here-------------
    // NIM : 1301140057
        P = Nil;
        delete P;

    //----------------------------------------
}

void insertFirst(List &L, address P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen pertama pada List L
    */
    //-------------your code here-------------
    // NIM : 1301140057
    if(first(L) == Nil){
        first(L) = P;
    }
    else{
        next(P) = first(L);
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
    // NIM : 1301140057

    address Q;
    if(first(L) != Nil){
    Q = first(L);
    while(next(Q) != Nil){
        Q = next(Q);
    }
    next(Q) = P;
    }
    else{
        insertFirst(L,P);
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
    infotype informasi = info(P);
    //-------------your code here-------------
    // NIM : 1301140057
    P = first(L);
    while (informasi.id != x.id && next(P) != Nil)
    {
        P = next(P);
        informasi = info(P);

    }
    if (next(P)==Nil && informasi.id!=x.id)
    {
        return Nil;

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
    // NIM : 1301140057
    if(first(L) != Nil){
        P = first(L);
        first(L) = next(P);
        next(P) = Nil;
        dealokasi(P);
    }
    else{
        cout<<"List Kosong"<<endl;
    }



    //----------------------------------------
}

void deleteLast(List &L, address &P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen tarakhir di dalam List L dilepas dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : 1301140057
    if(first(L) != Nil)
    {
        P = first(L);
        if(next(P) != Nil)
        {
            while (next(next(P)) != Nil)
                P = next(P);
            next(P) = Nil;
        }
        else
        {
            first(L) = Nil;
        }
    }

    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : menampilkan info seluruh elemen list L
    */
    //-------------your code here-------------
    // NIM : 1301140057
    address P;

    P = first(L);
    if (first(L) == Nil){
        cout<<"LIST KOSONG";
    }
    else{
        while (P != Nil){
            infotype print = info(P);
            cout<<"ID: "<<print.id<<endl;
            cout<<"Nama: "<<print.nama<<endl;
            cout<<"Alamat: "<<print.alamat<<endl;
            cout<<"Tempat Kerja: "<<print.tempatkerja<<endl;
            if (print.id % 2 != 0){
                cout<<"Transportasi: "<<print.transportasikerja<<endl;
            }
            else{
                cout<<"Profesi: "<<print.transportasikerja<<endl;
            }
            P = next(P);
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
    // NIM : 1301140057
  if (next(Prec) != Nil)
    {
        next(Prec) = next(Prec);
        next(Prec) = P;
    }
    else
    {
        next(Prec) = P;
        next(P) = Nil;
    }


    //----------------------------------------

}
void deleteAfter(address Prec, address &P) {
    /**
    * IS : Prec tidak NULL
    * FS : elemen yang berada di belakang elemen Prec dilepas
    *      dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : 1301140057
    if (next(Prec) != Nil)
    {
        P = next(Prec);
        next(Prec) = next(P);
        dealokasi(P);
    }
    //----------------------------------------
}
infotype inputan(){
    infotype isi;
    cout << "Masukkan ID Pegawai: ";
    cin >> isi.id;
    cout << "Masukkan Nama Pegawai: ";
    cin >> isi.nama;
    cout << "Nama Perusahaan = ";
    cin >> isi.tempatkerja;
    if (isi.id % 2 == 0)
    {
        cout << "Profesi = ";
        cin>> isi.transportasikerja;
    }
    else{
        cout << "Kendaraan untuk kerja = ";
        cin >> isi.transportasikerja;
    }
    return isi;
}
