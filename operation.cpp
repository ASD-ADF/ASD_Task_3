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
    address P, Prec;
    P=first(L);
    if (P==NULL || info(P).ID > x.ID) {
        insertFirst(L, allocate(x));
    } else if (findElm(L, x)==NULL) {
        while (P != NULL && info(P).ID < x.ID) {
            Prec=P;
            P=next(P);
        }
        insertAfter(L, Prec, allocate(x));
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
    P=first(L);
    if(P==first(L) && id_x == info(P).ID) {
        deleteFirst(L, P);
    } else {
        while (P!=NULL) {
            if (id_x == info(P).ID && first(L) != last(L)) {
                deleteAfter(L, prev(P), P);
            }
        P=next(P);
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
    P=first(L);
    while (P!=NULL){
        if(info(P).Score>80){
            address Prec;
            Prec=allocate(info(P));
            insertLast(L2, Prec);
        }
        P=next(P);
    }
    //----------------------------------------
}
