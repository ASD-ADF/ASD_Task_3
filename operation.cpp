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
    infotype searchKey;
    searchKey.id = x.id;
    if (findElm(L, searchKey) != nullptr) {
        cout << "ID sudah terdaftar!" << endl;
        return;
    }

    address P = allocate(x);

    if (L.first == nullptr || x.id < L.first->info.id) {
        insertFirst(L, P);
        return;
    }

    if (x.id > L.last->info.id) {
        insertLast(L, P);
        return;
    }

    address Q = L.first;
    while (Q->next != nullptr && Q->next->info.id < x.id) {
        Q = Q->next;
    }

    insertAfter(L, Q, P);
    //----------------------------------------
}


void deletebyID(List &L, int id_x) {
    /**
    * IS : List L may be empty
    * FS : an element with ID info = id_x is deleted from List L (deallocate)
    */

    address Prec, P;
    //-------------your code here-------------
    infotype searchKey;
    searchKey.id = id_x;
    P = findElm(L, searchKey);

    if (P != nullptr) {
        if (P == L.first) {
            deleteFirst(L, P);
        } else if (P == L.last) {
            deleteLast(L, P);
        } else {
            Prec = P->prev;
            deleteAfter(L, Prec, P);
        }
        deallocate(P);
    } else {
        cout << "ID tidak ditemukan!" << endl;
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
    address current = L.first;
    while (current != nullptr) {
        address nextNode = current->next;
        if (current->info.score > 80) {
            if (current == L.first) {
                deleteFirst(L, P);
            } else if (current == L.last) {
                deleteLast(L, P);
            } else {
                address Prec = current->prev;
                deleteAfter(L, Prec, P);
            }
            insertAndSort(L2, P->info);
            deallocate(P);
        }
        current = nextNode;
    }
    //----------------------------------------
}
