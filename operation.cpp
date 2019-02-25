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

    //-------------your code here-------------
    address P;
    address Q;
    P = allocate(x);
    if (L.first == NULL)
    {
        insertFirst(L, P);
    }
    else
    {
        Q = findElm(L, P->info);
        if (Q == NULL)
        {
            address last = L.first;
            while ((last->next) != NULL)
            {
                last = last->next;
            }
            if ((P->info.id) <= (L.first->info).id)
            {
                insertFirst(L, P);
            }
            else if ((P->info.id) >= (last->info).id)
            {
                insertLast(L, P);
            }
            else
            {
                Q = first(L);
                while (((Q->next)->info).id < (P->info).id)
                {
                    Q = Q->next;
                }
                insertAfter(L,Q,P);
            }
        }
        else
        {
            cout << "ID DOUBLE"<<endl;
        }
    }
    //----------------------------------------
}

void deletebyID(List &L, int id_x)
{
    /**
    * IS : List L may be empty
    * FS : an element with ID info = id_x is deleted from List L (deallocate)
    */

    address Prec, P;
    //-------------your code here-------------
    infotype x;
    x.id = id_x;
    P = findElm(L, x);
    if (P != NULL)
    {
        if (P == L.first)
        {
            deleteFirst(L, P);
        }
        else if (P->next == NULL)
        {
            deleteLast(L, P);
        }
        else
        {
            Prec = L.first;
            while(Prec->next != P)
            {
                Prec = Prec->next;
            }
            deleteAfter(L, Prec, P);
        }
    }
    else
    {
        cout<<"ID NOT FOUND"<<endl;
    }
    //----------------------------------------
}


void savePassedMember(List &L, List &L2)
{
    /**
    * IS : List L and L2 may be empty
    * FS : any element with score greater than 80 is moved to L2
    */
    address P;
    //-------------your code here-------------
    List Ltmp;
    createList(Ltmp);
    while (L.first != NULL)
    {
        deleteFirst(L, P);
        if (P->info.score > 80)
        {
            insertAndSort(L2, P->info);
        }
        else
        {
            insertAndSort(Ltmp, P->info);
        }
    }
    L = Ltmp;
    //----------------------------------------
}
