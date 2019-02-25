#include "list.h"
#include "operation.h"
#include "my_data.h"


void insertAndSort(List &L, infotype x) {
    /**
    * IS : List may be empty
    * PR : insert an element pointed by P into an already sorted-by-ID List L
    *      so that the elements inside List L is still sorted by ID
    *      procedure must also check if such ID is already exists (No Duplicate ID)
    * FS : elements in List L sorted by ID, P is inside List L
    */

    //-------------your code here-------------
    if (first(L) != NULL)
    {
        address Q = findElm(L,x);
        if (Q == NULL)
        {
            address P = allocate(x);
            if (info(P).ID < info(first(L)).ID)
            {
                insertFirst(L,P);
            }
            else if (info(P).ID > info(last(L)).ID)
            {
                insertLast(L,P);
            }
            else
            {
                Q = first(L);
                while ((next(Q) != NULL) && (info(next(Q)).ID < info(P).ID))
                {
                    Q = next(Q);
                }
                insertAfter(L,Q,P);
            }
        }
    }
    else
    {
        address P = allocate(x);
        insertFirst(L, P);
    }

}

void savePassedMember(List &L, List &L2){
    address P;
    List temp;
    createList(temp);
    while (first(L) != NULL)
    {
        deleteFirst(L, P);
        if (info(P).score > 80)
        {
            insertLast(L2,P);
        }
        else
        {
            insertLast(temp,P);
        }
    }
    L = temp;
}
