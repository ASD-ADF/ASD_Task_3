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
    address P=L.first;
    if (L.first==NULL)
    {
        insertFirst(L,allocate(x));
    }
    else if (P->info.ID > x.ID)
    {
        insertFirst(L,allocate(x));
    }
    else if (L.last->info.ID < x.ID)
    {
        insertLast(L,allocate(x));
    }
    else
    {
        while (P!=NULL && P->info.ID < x.ID)
        {
            P=P->next;
        }
        P=P->prev;
        insertAfter(L,P,allocate(x));
    }
    cout<<endl;
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
    P=L.first;
    if (P->info.ID == id_x)
    {
        deleteFirst(L,P);
        deallocate(P);
    }
    else if (L.last->info.ID == id_x)
    {
        deleteLast(L,P);
        deallocate(P);
    }
    else
    {
        while (P != NULL && P->info.ID != id_x)
        {
            P = P->next;
        }
        P = P->prev;
        deleteAfter(L,P,Prec);
        deallocate(Prec);
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
    address Q=L2.first;
    P=L.first;

    while (P!=NULL)
    {

        if (Q==NULL)
        {
            if (P->info.score>=80)
            {
                insertLast(L2,P);
            }
            P=P->next;
        }
        else
        {
            if (Q->info.ID==P->info.ID)
            {
                Q=Q->next;
            }
            else if (P->info.score>=80)
            {
                insertLast(L2,P);
            }
            P=P->next;
        }
    }

    //----------------------------------------
}
