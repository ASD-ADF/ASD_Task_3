#include "list.h"
#include <iostream>
using namespace std;

address createaelement (stuff addstuff)
(
 address P;
 P = new elmlist;
 P -> next - NULL;
 P -> info.id = addstuff.id;
 P -> info.nama= adsstuff.nama;
 P -> info.divisi= adsstuff.jabatan;
 P -> info.gaji = addstuff.gaji;
 return P;
 )

 void createKaryawan (stuff *addstuff)
 {
     cout<<"masukkan ID : ";
     cin>>addstuff->id;
     cout<<"masukkaan nama : ";
     cin>> addstuff -> nama;
     cout<<"masukkan divisi : ";
     cin>>adstuff -> divisi;
     cout<<"masukkan gaji : ";
     cin>>addstuff ->gaji;
     cout<<endl;
}

int count element (list*L)
{
    int count = 1;
    addres Q;
    Q = L -> first;
    if (L->first==NULL)
    {
        return 0;
    }
    while (Q->next != NULL)
    {
        Q = Q -> next;
        count ++;
    }
    return count;
}

void createList(List &L) {

L.first = NULL;
}

address alokasi(infotype x) {
    /**
    * FS : mengembalikan elemen list baru dengan info = x, next elemen = Nil
    */

    address P;
    //-------------your code here-------------
    // NIM :
    P= new elmlist;
    P -> info = x;
    P -> next = NULL;
    //----------------------------------------
    return P;
}

void dealokasi(address &P) {
    /**
    * FS : menghapus elemen yang ditunjuk oleh P (delete)
    */
    //-------------your code here-------------
    // NIM :

	delete P;
    //----------------------------------------
}

void insertFirst(List &L, address P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen pertama pada List L
    */
    //-------------your code here-------------
    // NIM :
	if (L -> first != NULL)
    {
        P = L -> first;
    }
    else
    {
        P->next = L -> first;
        L -> first = P;
    }

    //----------------------------------------
}

void insertLast(List &L, address P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen terakhir pada List L
    */
    //-------------your code here-------------
    // NIM :
    if (L -> first == NULL)
            L->first =P;
    else
    {
        addres Q;
        Q = L -> first;
        while (next (Q) != NULL)
        Q = next (Q);
        P -> next = NULL;
        Q -> next = P;
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
    // NIM :
    P = L-> first;
    while ((info(p).id != x.id) && (next(P)!= NULL))
    {
        P= next (P);
    }
        if ((next(p)== NULL) && (info(P).id != x.id))
        {
            return NULL;
        }
        else
        {
            return P;
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
    // NIM :



    //----------------------------------------
}

void deleteLast(List &L, address &P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen tarakhir di dalam List L dilepas dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM :



    //----------------------------------------
}

void printInfo(List *L) {
    /**
    * FS : menampilkan info seluruh elemen list L
    */
    //-------------your code here-------------
    // NIM :
    address P;
    P = L ->first;
    int i = 1;

    while (P != NULL)
    {
        cout<<"karyawan ke"<<i<<endl;
        i++;
        cout<<"ID     : "<<(P->info).id<<endl;
        cout<<"nama   : "<<(P->info).nama<<endl;
        cout<<"Divisi : "<<(P->info).jabatan<<endl;
        cout<<"jabatan: "<<(P-> info).gaji<<endl;
        P = P-> next;
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
        prec=alokasi(x);
        P=L.first->next;
        if (P->next=NULL) (
            prec -> next=P;
            L.first-> next=prec;)
        else (
        cout<<"insert gagal karena next (P) tidak NULL";

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

