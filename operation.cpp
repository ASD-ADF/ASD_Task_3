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
    if (first(L)==NULL)
    {
        insertFirst(L,P);
    }
    else if (info(P).id < info(first(L)).id)
    {
        insertFirst(L,P);
    }
    else
    {
        address Q;
        Q = first(L);
        while(info(Q).id<info(P).id)
        {
            Q=next(Q);
        }
        insertAfter(L,Q,P);

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
    if (first(L)==NULL)
    {

    }
    else if (info(first(L)).id==x.id)
    {
        Prec=first(L);
        deleteFirst(L,Prec);
    }
    else
    {
        Prec=first(L);
        while(Prec!=NULL)
        {
            if (info(Prec).id==x.id)
            {
                if (next(Prec)==NULL)
                {
                    deleteLast(L,P);
                }
                else
                {
                P=next(Prec);
                next(Prec)=next(P);
                }
            }
            Prec=next(Prec);
        }
    }


    //----------------------------------------
}
