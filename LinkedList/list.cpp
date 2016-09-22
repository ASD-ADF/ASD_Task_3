#include "list.h"

void createList(List &L) {
    /**
    * FS : first(L) diset Nil
    */
    //-------------your code here-------------
    // NIM : 1301150440
    L.first = NULL;
    //----------------------------------------
}

address alokasi(infotype x) {
    /**
    * FS : mengembalikan elemen list baru dengan info = x, next elemen = Nil
    */

    address P;
    //-------------your code here-------------
    // NIM : 1301150440
    P = new elmlist;
    info(P) = x;
    P->next = NULL;
    //----------------------------------------
    return P;
}

void dealokasi(address &P) {
    /**
    * FS : menghapus elemen yang ditunjuk oleh P (delete)
    */
    //-------------your code here-------------
    // NIM : 1301150440
	delete (P);
    //----------------------------------------
}

void insertFirst(List &L, address P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen pertama pada List L
    */
    //-------------your code here-------------
    // NIM : 1301150440
	if (L.first == NULL) {
        L.first = P;
	} else {
        P->next = L.first;
        L.first = P;
	}
    //----------------------------------------
}

void insertLast(List &L, address P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen terakhir pada List L
    */
    //-------------your code here-------------
    // NIM : 1301150440
    if (L.first == NULL) {
        L.first = P;
    } else {
        address q = L.first;
        while (q->next != NULL) {
            q = q->next;
        }
        q->next = P;
    }
    //----------------------------------------
}

address findElm(List L, int x) {
    /**
    * IS : List L mungkin kosong
    * FS : mengembalikan elemen dengan info.ID = x.ID,
           mengembalikan Nil jika tidak ditemukan
    */

    address P;
    //-------------your code here-------------
    // NIM : 1301150440
    P = L.first;
    while (P != NULL) {
        if(P->info.id==x) {
            return P;
        } else {
            P = P->next;
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
    // NIM : 1301150440
    P = L.first;
    if (L.first != NULL) {
        if (L.first->next == NULL) {
            L.first = NULL;
            delete P;
        } else {
            L.first = P->next;
            P->next = NULL;
            delete P;
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
    // NIM : 1301150440
    P = L.first;
    address prec;
    if (L.first != NULL) {
        if (L.first->next == NULL) {
            L.first = NULL;
        } else {
            while ((P->next)->next != NULL) {
                P = P->next;
            }
            address prec = P;
            P = P->next;
            prec->next=NULL;
        }
    }
    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : menampilkan info seluruh elemen list L
    */
    //-------------your code here-------------
    // NIM : 1301150440
    address P = L.first;
    while (P != NULL) {
        cout << "ID Mobil: " << P->info.id << endl;
        cout << "Nama Pemilik: " << P->info.pemilik << endl;
        cout << "Nama Mobil: " << P->info.namamobil << endl;
        cout << "Merk: " << P->info.merk << endl;
        cout << "Jenis Mobil: " << P->info.jenis << endl;
        cout << "Warna Mobil: " << P->info.warna << endl;
        cout << "Tahun Pembuatan: " << P->info.tahun << endl;
        cout << endl;
        P = P->next;
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
    // NIM : 1301150440
        P->next=Prec->next;
        Prec->next=P;
    //----------------------------------------

}
void deleteAfter(address Prec, address &P) {
    /**
    * IS : Prec tidak NULL
    * FS : elemen yang berada di belakang elemen Prec dilepas
    *      dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : 1301150440
    List L;
        if ((Prec->next) != NULL) {
            P=Prec->next;
            Prec->next=P->next;
            P->next=NULL;
        }
    //----------------------------------------
}

