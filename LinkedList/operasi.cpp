#include "list.h"
#include "operasi.h"
using namespace std;


address sentinelSearch(List L, infotype x){
    /**
    * IS : List mungkin kosong
    * PR : mencari elemen dengan ID infotype = infotype x menggunakan bantuan sentinel
    * FS : mengembalikan address elemen dengan ID infotype x jika ditemukan,
    *      mengembalikan NULL jika tidak ditemukan
    */
    //-------------your code here-------------
    // NIM :
    address P;
    P = new eLmlist;
    P -> next = NULL;
    P -> info.id = addstuff.id;
    P -> info.nama = addstuff.nama;
    P -> info.divisi = addstuff.jabatan;
    P -> info.gaji = addstuff.gaji;
    return P;

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
    int temp ,ketemu,z;
    temp=NULL;
        if((L.first==NULL)|| (L.first)-> next==NULL) {
            return 0;
        }
        p=next(L.first);
        while (P!= NULL){
            z=P->info ;
            ketemu =0;
            q=L.first;
            while(q!=p){
                if(q->info > P->info&&ketemu==0){
                    z=q -> info ;
                    q ->info = p -> info;
                    ketemu = 1;
                    q = q-> next;
                else {if(ketemu==1) {temp = z;
                z=q ->info;
                q -> info=temp;
                }
                q=q -> next ;
            }
        }
        q -> info=z;
        p=p ->next;
}
}


void deletebyID(List &L, infotype x) {
    /**
    * IS : List L mungkin kosong
    * FS : 1 elemen dengan id info = x.id dihapus dari list (dealokasi)
    */

    address Prec, P;
    //-------------your code here-------------
    // NIM :


    //----------------------------------------
}
