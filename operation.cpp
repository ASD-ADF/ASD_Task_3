#include "list.h"
#include "operation.h"
#include "my_data.h"

void sorting(List &L, address Prec){
    List L2;
    createList(L2);
    Prec=first(L);
    address Q;
    if (next(first(L))==NULL) {

    }
    else {
    while (first(L)!=NULL){
        deleteFirst(L, Prec);
        if ((first(L2)==NULL) || (info(Prec).id<info(first(L2)).id)) {
            insertFirst(L2, Prec);
        }
        else {
            Q=first(L2);
            while (next(Q)!=NULL) {
                Q=next(Q);
                if (info(next(Q)).id<info(Prec).id){
                    insertAfter(L2, Q, Prec);
                }
            }
            insertLast(L, Prec);

        }
    }
    L=L2;
    }
}

void insertAndSort(List &L, address P) {
    /**
    * IS : List may be empty
    * PR : insert an element pointed by P into an already sorted-by-ID List L
    *      so that the elements inside List L is still sorted by ID
    *      procedure must also check if such ID is already exists (No Duplicate ID)
    * FS : elements in List L sorted by ID, P is inside List L
    */

    //-------------your code here-------------

        insertFirst(L, P);


    //----------------------------------------

    }

void deletebyID(List &L, infotype x) {
    /**
    * IS : List L may be empty
    * FS : an element with ID info = x.id is deleted from List L (deallocate)
    */

    address Prec, P;
    //-------------your code here-------------
    Prec=findElm(L, x);
    if (Prec==first(L)) {
        deleteFirst(L, Prec);
    }
    else if (next(Prec)==NULL) {
        deleteLast(L, Prec);
    }
    else {
        P=first(L);
        while (next(P)!=Prec) {
            P=next(P);
        }
        deleteAfter(L, P, Prec);
    }
    deallocate(Prec);



    //----------------------------------------
}
