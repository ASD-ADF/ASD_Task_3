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
    address C, P, Prec;
    P = findElm(L, x);
    C = first(L);
    Prec = first(L);
    while (next(C) != NULL)
    {
        C = next(C);
    }
    if (P != NULL)
    {
        cout << "Duplikat";
    }
    else if (first(L) == NULL)
    {
        insertFirst(L, P);
    }
    else if (info(P).id <= info(first(L)).id)
    {
        insertFirst(L, P);
    }
    else if (info(P).id >= info(C).id)
    {
        insertLast(L, P);
    }
    else
    {
        Prec = first(L);
        while (info(Prec).id <= info(P).id)
        {
            Prec = next(Prec);
        }
        insertAfter(L, Prec, P);
    }
}


void deletebyID(List &L, int id_x)
{
    /**
    * IS : List L may be empty
    * FS : an element with ID info = id_x is deleted from List L (deallocate)
    */
    address Prec, P, X;
    infotype numpang = id_x;
    X = allocate(numpang);
    P = findElm(L, info(X).id);
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
    address P;
}
