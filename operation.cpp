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
    address P, Q;
    P = L.first;
    if (P == NULL || P->info.ID >= x.ID) {
        insertFirst(L, allocate(x));
    } else if (info(last(L)).ID<=x.ID) {
        insertLast(L, allocate(x));
    } else {
        while (P != NULL && P->info.ID < x.ID)
        {
            P = P->next;
        }
        P = prev(P);
        insertAfter(L, P, allocate(x));
    }
    //----------------------------------------
}


void deletebyID(List &L, int id_x) {
    /**
    * IS : List L may be empty
    * FS : an element with ID info = id_x is deleted from List L (deallocate)
    */

    //address Prec, P;
    //-------------your code here-------------
    address P,R;
    P = L.first;

    if (L.first==NULL){
        deleteFirst(L,R);
        deallocate(R);
    }else{
        if (P->info.ID == id_x)
        {
            deleteFirst(L, R);
            deallocate(R);
        }
        else if (info(last(L)).ID == id_x)
        {
            deleteLast(L, R);
            deallocate(R);
        }
        else
        {
            while (P != NULL && P->info.ID != id_x)
            {
                P = P->next;
            }
            P = prev(P);
            deleteAfter(L, P, R);
            deallocate(R);
        }
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
    while(P!=NULL){
        if (info(P).score>=80){
            insertLast(L2, allocate(info(P)));
        }
        P = next(P);
    }

    //----------------------------------------
}
