#include "list.h"
#include "operation.h"
#include "my_data.h"


void insertAndSort(List &L, address P)
{
    /**
    * IS : List may be empty
    * PR : insert an element pointed by P into an already sorted-by-ID List L
    *      so that the elements inside List L is still sorted by ID
    *      procedure must also check if such ID is already exists (No Duplicate ID)
    * FS : elements in List L sorted by ID, P is inside List L
    */
    if (first(L) == NULL)
    {
        insertFirst(L, P);
        return;
    }
    address X = findElm(L, info(P));


    if (X == NULL)
    {
        address Q = first(L);
        address Prec = first(L);
        while (next(Q) != NULL)
        {
            Q = next(Q);
        }
        if (info(P).id < info(first(L)).id)
        {
            insertFirst(L,P);
        }
        else if (info(P).id > info(Q).id)
        {
            insertLast(L,P);
        }
        else
        {
            while (info(next(Prec)).id < info(P).id)
            {
                Prec = next(Prec);
            }
            cout<<info(Prec).id<<endl;
            insertAfter(L, Prec, P);
        }
    }
    else
    {
        cout<<" ID Sudah Terdaftar "<<endl;
    }
}


void deletebyID(List &L, infotype x)
{
    /**
    * IS : List L may be empty
    * FS : an element with ID info = x.id is deleted from List L (deallocate)
    */

    address P;
    P = findElm(L,x);
    address Prec = first(L);
    if (P == NULL)
    {
        cout<<"ID Not Found!"<<endl;
    }
    else if (next(P) == NULL)
    {
        deleteLast(L,P);
    }
    else if(P == first(L))
    {
        deleteFirst(L,P);
    }
    else
    {
        cout<<"sapi"<<endl;
        cout<<info(P).id<<endl<<info(Prec).id<<endl;
        while (next(Prec) != P)
        {
            Prec = next(Prec);
        }
        cout<<"stlh while"<<info(next(Prec)).id<<endl;
        deleteAfter(L,Prec,P);
    }
}
