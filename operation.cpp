#include "list.h"
#include "operation.h"
#include "my_data.h"

bool same_ID(List L, address P)
{
    address Q = L.First;
    while (Q != NULL)
    {
        if ((P->info.id == Q->info.id))
        {
            return true;
        }
        Q = Q->next;
    }
    return false;
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
    if (L.First == NULL)
        insertFirst(L,P);
    else
    {
        bool same = same_ID(L,P);
        if (same == true)
            cout<<"ID tidak boleh sama"<<endl;
        else
        {
            if (P->info.id < L.First->info.id)
                insertFirst(L,P);
            else
                {
                    address Q = L.First;
                    while (Q->next != NULL && P->info.id > Q->next->info.id)
                        Q = Q->next;
                    insertAfter(Q,P);
                }
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
    if (L.First != NULL)
        {
            Prec = L.First;
            P = findElm(L,x);
            if (P == L.First)
                deleteFirst(L,P);
            else if (P->next == NULL)
                deleteLast(L,P);
            else
                while (Prec->next != P)
                    Prec = Prec->next;
                deleteAfter(Prec,P);
        }
    //----------------------------------------
}
