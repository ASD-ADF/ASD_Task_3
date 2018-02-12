#include "list.h"
#include "operation.h"
#include "my_data.h"


void insertAndSort(List &L, address P) {
    /**
    * IS : List may be empty
    * PR : insert an element pointed by P into an already sorted-by-ID List L
    *      so that the elements inside List L is still sorted by ID
    *      procedure must also check if such ID is already exists (No Duplicate ID)
    * FS : elements in List L sorted by ID, P is inside List L
    */

    //-------------your code here-------------

    if (first(L) == NULL) {
        first(L) = P;
        return;
    }

    address Q = findElm(L,info(P));

    if (Q != NULL) {
        cout<< "ID is already exists (No Duplicate ID)"<<endl;
        return;
    }

    if (Q == NULL) {
        address last = first(L);
        while (next(last) != NULL) {
            last = next(last);
        }

        if (info(P).id < info(first(L)).id) {
            insertFirst(L,P);
        }
        else if (info(P).id > info(last).id) {
            next(last) = P;
        }
        else {
            address R = first(L);
            while (info(next(R)).id < info(P).id) {
                R = next(R);
            }
            insertAfter(L,R,P);
            }
        }

    //----------------------------------------
}


void deletebyID(List &L, infotype x) {
    /**
    * IS : List L may be empty
    * FS : an element with ID info = x.id is deleted from List L (deallocate)
    */

    address Prec, P;
    //-------------your code here-------------
    P = findElm(L,x);
    if (P == NULL) {
        cout<< "ID not found"<<endl;
    }
    else {
        Prec = first(L);
        while (next(Prec) != P) {
            Prec = next(Prec);
        }
        next(Prec) = next(P);
        next(P) = NULL;
        cout<< "Delete succeed"<<endl;
    }
    //----------------------------------------
}
