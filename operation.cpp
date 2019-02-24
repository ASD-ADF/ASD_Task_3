#include "list.h"
#include "operation.h"
#include "my_data.h"


void insertAndSort(List &L, infotype x)
{
    /**
    * IS : List may be empty
    * PR : insert a new element into an already sorted-by-ID List L
    *      so that the elements inside List L is still sorted by ID.
    *      procedure must also check if such ID is already exists (No Duplicate ID).
    *      If new data has duplicate ID, new data is rejected.
    * FS : elements in List L sorted by ID, P is inside List L
    */
    address P;
    P = allocate(x);
    if (first(L)== NULL)
    {
        insertFirst(L,P);
    }
    else
    {
        address Q = findElm(L, info(P));
        if (Q == NULL)
        {
            address last = first(L);
            while (next(last)!= NULL)
            {
                last = next(last);
            }

            if (info(P).id <= info(first(L)).id)
            {
                insertFirst(L,P);
            }
            else if (info(P).id >= info(last).id)
            {
                insertLast(L,P);
            }
            else
            {
                Q = first(L);
                while (info(next(Q)).id < info(P).id)
                {
                    Q = next(Q);
                }
                insertAfter(L,Q,P);
            }
        }
        else
        {
            cout << "DP\n";
        }
    }
}


void deletebyID(List &L, int id_x)
{
    /**
    * IS : List L may be empty
    * FS : an element with ID info = id_x is deleted from List L (deallocate)
    */
    address Prec, P;
    infotype x;
    x.id = id_x;
    P = findElm(L, x);
    if (P == NULL)
    {
        cout << "ID tidak ditemukan.\n";
    }
    else
    {
        if (P == first(L))
        {
            deleteFirst(L, P);
        }
        else if (next(P) == NULL)
        {
            deleteLast(L, P);
        }
        else
        {
            Prec = first(L);
            while(next(Prec) != P)
            {
                Prec = next(Prec);
            }
            deleteAfter(L, Prec, P);
        }
    }
}


void savePassedMember(List &L, List &L2)
{
    /**
    * IS : List L and L2 may be empty
    * FS : any element with score greater than 80 is moved to L2
    */
    if(first(L) != NULL)
    {
        address P, akhir, sebelum;
        P = first(L);
        akhir = first(L);
        while (P != NULL)
            {
                if (info(P).score > 79)
                {
                    if(P == first(L))
                    {
                        deleteFirst(L, P);
                        insertFirst(L2, P);
                    }
                    else
                    {
                        sebelum = first(L);
                        while (next(sebelum) != P)
                        {
                            sebelum = next(sebelum);
                        }
                        deleteAfter(L, sebelum, P);
                        insertLast(L2, P);
                    }
                }
                P = next(P);
            }
    }
}
