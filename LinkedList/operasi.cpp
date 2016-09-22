#include "list.h"
#include "operasi.h"


address sentinelSearch(List L, infotype x){
    /**
    * IS : List mungkin kosong
    * PR : mencari elemen dengan ID infotype = infotype x menggunakan bantuan sentinel
    * FS : mengembalikan address elemen dengan ID infotype x jika ditemukan,
    *      mengembalikan NULL jika tidak ditemukan
    */
    //-------------your code here-------------
    // NIM : 1301154141
    address P;
    if (first(L) == NULL){
        return NULL;
    }
    else{
        P = first(L);
        while (info(P).id != x.id && next(P) != NULL){
            P = next(P);
        }
        if (info(P).id == x.id ){
            return P;
        }
        else{
            return NULL;
        }
    }

    //----------------------------------------

}

void insertionSort(List &L){
    /**
    * IS : List mungkin kosong
    * PR : mengurutkan elemen di dalam List L menggunakan algoritma insertion sort
    * FS : elemen di dalam List L terurut
    */

    //-------------your code here-------------
    // NIM :


    //----------------------------------------
}


void deletebyID(List &L, infotype x) {
    /**
    * IS : List L mungkin kosong
    * FS : 1 elemen dengan id info = x.id dihapus dari list (dealokasi)
    */

    address Prec, P = NULL;
    //-------------your code here-------------
    // NIM : 1301154239

    if(first(L) == NULL)
    {
        cout << "LIST MASIH KOSONG";
    } else
    {
       Prec = first(L);
       while ((info(Prec).id != x.id) && (next(Prec) != NULL))
       {
           Prec=next(Prec);
       }
       if (next(Prec) != NULL){

            P = first(L);
            while (next(P) != Prec)
            {
                P = next(P);
            }
            if (next(Prec) != NULL)
            {
                next(P) = next(Prec);
                next(Prec) = NULL;
                cout <<"Data yang akan dihapus"<<endl;
                cout <<"ID Dosen         : "<<info(Prec).id<<endl;
                cout <<"Nama Dosen       : "<<info(Prec).nama<<endl;
                cout <<"Mata Kuliah      : "<<info(Prec).matkul<<endl;
                cout <<"Masa Kerja       : "<<info(Prec).masakerja<<endl;
                cout <<"Asal             : "<<info(Prec).asal<<endl;
                cout <<"Address Elmement : "<<Prec<<endl;
                dealokasi(Prec);
                cout <<"data berhasil dihapus"<<endl;
            } else {
                next(P) = NULL;
                dealokasi(Prec);
            }
       } else {
            cout <<"Data yang akan dihapus"<<endl;
       cout <<"ID Dosen         : "<<info(Prec).id<<endl;
       cout <<"Nama Dosen       : "<<info(Prec).nama<<endl;
       cout <<"Mata Kuliah      : "<<info(Prec).matkul<<endl;
       cout <<"Masa Kerja       : "<<info(Prec).masakerja<<endl;
       cout <<"Asal             : "<<info(Prec).asal<<endl;
       cout <<"Address Elmement : "<<Prec<<endl;
       first(L) = P;
       dealokasi(Prec);
       cout << "Data berhasil di hapus";
       }


    //----------------------------------------
}
}
