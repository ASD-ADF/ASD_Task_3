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
    address q, prev;

    q = L.first;
    prev = nullptr;

    // cari posisi: berhenti saat q->info >= x
    while (q != nullptr && q->info.ID < x.ID) {
        prev = q;
        q = q->next;
    }

    // cek duplicate: kalau q ada dan ID-nya sama, tolak
    if (q != nullptr && q->info.ID == x.ID) {
        return;
    }

    // lolos pengecekan, baru alokasi
    address P = allocate(x);

    if (prev == nullptr) {
        insertFirst(L, P);
    } else {
        insertAfter(L, prev, P);
    }


    //----------------------------------------
}


void deletebyID(List &L, int id_x) {
    /**
    * IS : List L may be empty
    * FS : an element with ID info = id_x is deleted from List L (deallocate)
    */

    address Prec, P;
    //-------------your code here-------------
    P = L.first;
    while (P != NULL && P->info.ID != id_x) {
        Prec = P;
        P = P->next;
    }
    if (P != NULL) {
        if (P == L.first) {
            deleteFirst(L, P);
        } else if (P == L.last) {
            deleteLast(L, P);
        } else {
            deleteAfter(L, Prec, P);
        }
        deallocate(P);
    }



    //----------------------------------------
}


void savePassedMember(List &L, List &L2){
    /**
    * IS : List L and L2 may be empty
    * FS : any element with score greater than 80 is moved to L2
    */
    address P;
    //-------------your code here-------------
    P = L.first;
    while (P != NULL) {
        address nextP = P->next; // Store the next pointer before deletion
        if (P->info.score > 80) {
            // Remove from L
            if (P == L.first) {
                deleteFirst(L, P);
            } else if (P == L.last) {
                deleteLast(L, P);
            } else {
                address Prec = P->prev;
                deleteAfter(L, Prec, P);
            }
            // Insert into L2
            insertLast(L2, P);
        }
        P = nextP; // Move to the next element
    }


    //----------------------------------------
}
