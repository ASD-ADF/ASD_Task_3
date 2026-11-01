#include "list.h"
#include "operation.h"
#include "my_data.h"
 

void insertAndSort(List &L, infotype x) {
    /**
    * IS : List may be empty
    * PR : insert a new element into an already sorted-by-ID List L
    *      so that the elements inside List L is still sorted by ID.
    *      procedure must also check if such ID is already exists (No Duplicate ID).
    *      If new data has duplicate ID, new data is rejected.
    * FS : elements in List L sorted by ID, P is inside List L
    */

    //-------------your code here-------------
    if (findElm(L, x) != nullptr) {
        cout << "Gagal: ID " << x.id << " sudah terdaftar (ID harus unik)!" << endl;
        return;
    }

    address P = allocate(x);
    if (L.first == nullptr) {
        insertFirst(L, P);
    } else if (x.id < L.first->info.id) {
        insertFirst(L, P);
    } else if (x.id > L.last->info.id) {
        insertLast(L, P);
    } else {
        address Q = L.first;
        while (Q != nullptr && Q->info.id < x.id) {
            Q = Q->next;
        }
        insertAfter(L, Q->prev, P);
    }
    cout << "Data berhasil ditambahkan secara terurut." << endl;


    //----------------------------------------
}


void deletebyID(List &L, int id_x) {
    /**
    * IS : List L may be empty
    * FS : an element with ID info = id_x is deleted from List L (deallocate)
    */

    address Prec, P;
    //-------------your code here-------------
    infotype temp;
    temp.id = x_id;
    address P = findElm(L, temp);
    
    if (P == nullptr) {
        cout << "Data dengan ID " << x_id << " tidak ditemukan." << endl;
        return;
    }

    address delP = nullptr;
    if (P == L.first) {
        deleteFirst(L, delP);
    } else if (P == L.last) {
        deleteLast(L, delP);
    } else {
        deleteAfter(L, P->prev, delP);
    }
    deallocate(delP);
    cout << "Data dengan ID " << x_id << " berhasil dihapus." << endl;


    //----------------------------------------
}


void savePassedMember(List &L, List &L2){
    /**
    * IS : List L and L2 may be empty
    * FS : any element with score greater than 80 is moved to L2
    */
    address P;
    //-------------your code here-------------
   address P = L.first;
    while (P != nullptr) {
        address nextP = P->next;
        if (P->info.score > 80) {
            address delP = nullptr;
            if (P == L.first) {
                deleteFirst(L, delP);
            } else if (P == L.last) {
                deleteLast(L, delP);
            } else {
                deleteAfter(L, P->prev, delP);
            }
            insertLast(L2, delP);
        }
        P = nextP;
    }


    //----------------------------------------
}
