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
    address P = allocate(x);
    if (first(L) == NULL || info(first(L)).ID > x.ID)
    {
        insertFirst(L,P);
    }
    else
    {
        address Q =  first(L);
        while ( next(Q) != NULL && x.ID >= info(next(Q)).ID )
        {
            Q = next(Q);
        }
        if (info(Q).ID != x.ID)
        {
            insertAfter(L,Q,P);
        }
        else
        {
            insertLast(L,P);
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
    P = first(L);
        if (id_x == info(P).ID)
        {
            deleteFirst(L,P);
        }
        else if ( info(last(L)).ID == id_x)
        {
            deleteLast(L,P);
        }
        else
        {
            address Q;
            while (next(Q) != NULL && info(next(Q)).ID != id_x)
            {
                Q = next(Q);
            }
            Prec = Q;
            deleteAfter(L, Prec,P);
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
    P = first(L);
    address Q = P;
    while (Q != NULL)
    {
        P = Q;
        if ( info(P).score > 80)
        {
            insertAndSort(L2, info(P));
            Q = next(Q);
            if (prev(P) == NULL)
            {
                deleteFirst(L,P);
            }
            else
            {
                deleteAfter(L,prev(P), P);
            }
        }
        else
        {
            Q = next(Q);
        }
    }

    //----------------------------------------
}
