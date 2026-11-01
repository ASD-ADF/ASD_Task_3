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
    if (findElm(L, x) != nullptr){
        return;
    }

    address P = new elmlist;
    p->info = x;
    p->next = nullptr;
    p->prev = nullptr;

    if (L.first == nullptr || x.ID < L.first->info.ID){
        insertFirst(L, P);
    } else {
        address Prec = L.first;
        while (Prec->next != nullptr && Prec->next->info.ID < x.ID){
            Prec = Prec->next;
        }
        if (Prec == L.last){
            insertLast(L, P);
        } else {
            insertAfter(L, Prec, P);
        }
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
<<<<<<< HEAD
    P = L.first;
    while (P != nullptr && P->info.ID != id_x){
        P = P->next;
    }
    if (P == nullptr){
        return;
    }

    Prec = P->prev;
    if (P == L.first && P == L.last){
        L.first = nullptr;
        L.last = nullptr;
    } else if (P == L.first){
        L.first = P->next;
        L.first->prev = nullptr;
    } else if (P == L.last){
        L.last = Prec;
        L.last->next = nullptr;
    } else {
        Prec->next = P->next;
        P->next->prev = Prec;
    }
    P->next = nullptr;
    P->prev = nullptr;
    deallocate(P);
=======
    Prec = nullptr;
    P = L.first;
>>>>>>> 784cfd11a6c871ca31620a20bc5134a0dbb602b8

    while (P != nullptr && P->info.id != id_x) {
        Prec = P;
        P = P->next;
    }

    if (P != nullptr) {
        if (Prec == nullptr) {
            deleteFirst(L, P); 
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
<<<<<<< HEAD
    P = L.first;
    while (P != nullptr){
        address Q = P->next;

        if (P->info.score > 80){
            if (P == L.first && P == L.last){
                L.first = nullptr;
                L.last = nullptr;
            } else if (P == L.first){
                L.first = P->next;
                L.first->prev = nullptr;
            } else if (P == L.last) {
                L.last = P->prev;
                L.last->next = nullptr;
            } else {
                P->prev->next = P->next;
                P->next->prev = P->prev;
            }
            P->next = nullptr;
            P->prev = nullptr;
            insertLast(L2, P);
        }
        P= Q;
    }
=======
    address Q = L.first;
    address Prec = nullptr; 
    address nextQ;
>>>>>>> 784cfd11a6c871ca31620a20bc5134a0dbb602b8

    while (Q != nullptr) {
        nextQ = Q->next;  

        if (Q->info.score > 80) {
            if (Prec == nullptr) {
                deleteFirst(L, P);
            } else {
                deleteAfter(L, Prec, P);
            }
            insertLast(L2, P);
        } else {
            Prec = Q;
        }

        Q = nextQ;
    }

    //----------------------------------------
}
