#include "list.h"
#include "my_data.h"
#include <iostream>

void createList(List &L)
{
    /**
    * FS : set first(L) with Null
    */
    //-------------your code here-------------
    L.first = NULL;
    //----------------------------------------
}

address allocate(infotype x)
{
    /**
    * FS : return new list element with info = x and next element is Null
    */

    address P;
    //-------------your code here-------------
    P = new elmlist;
    P->info = x;
    P->next = NULL;
    //----------------------------------------
    return P;
}

void deallocate(address &P)
{
    /**
    * FS : delete element pointed by P
    */
    //-------------your code here-------------
    delete P;
    //----------------------------------------
}

void insertFirst(List &L, address P)
{
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the first element in List L
    */
    //-------------your code here-------------
    if (L.first != NULL)
    {
        P->next = L.first;
        (L.first)->prev = P;
        L.first = P;
    }
    else
    {
        L.first = P;
    }
    //----------------------------------------
}

void insertLast(List &L, address P)
{
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the last element in List L
    */
    //-------------your code here-------------
    P->next = L.first;
    P->prev = (L.first)->prev;
    (P->prev)->next = P;
    (L.first)->prev = P;
    //----------------------------------------
}

address findElm(List L, infotype x)
{
    /**
    * IS : List L may be empty
    * FS : returns element with info.ID = x.ID,
           return Null if such ID is not found
    */

    //-------------your code here-------------
    address P = L.first;
    while (P!=NULL)
    {
        if (P->info.id == x.id)
        {
            return P;
        }
        else
        {
            P = P->next;
        }
    }
    return NULL;
    //----------------------------------------
}

void deleteFirst(List &L, address &P)
{
    /**
    * IS : List L may be empty
    * FS : first element in List L is removed and is pointed by P
    */
    //-------------your code here-------------
    P = L.first;
    L.first = (L.first)->next;
    P->next = NULL;
    deallocate(P);
    //----------------------------------------
}

void deleteLast(List &L, address &P)
{
    /**
    * IS : List L may be empty
    * FS : last element in List L is removed and is pointed by P
    */
    //-------------your code here-------------
    address Q = (L.first)->prev;
    (L.first)->prev = Q->prev;
    (Q->prev)->next = L.first;
    Q->next = NULL;
    Q->prev = NULL;
    //----------------------------------------
}

void printInfo(List L)
{
    /**
    * FS : view info of all element inside List L,
    *      call the view_data function from my_data.h to print the info
    */
    //-------------your code here-------------
    if (L.first != NULL)
    {
        address P = L.first;
        while (P != NULL)
        {
            view_data(P->info);
            P = P->next;
        }
    }
    else
    {
        cout<<"LIST NULL"<<endl;
    }
    //----------------------------------------
}


void insertAfter(List &L, address Prec, address P)
{
    /**
    * IS : Prec and P is not NULL
    * FS : element pointed by P is placed behind the element
    *      pointed by pointer Prec
    */
    //-------------your code here-------------
    if ((P != NULL) && (Prec != NULL))
    {
        P->next = Prec->next;
        Prec->next = P;
    }
    //----------------------------------------

}
void deleteAfter(List &L, address Prec, address &P)
{
    /**
    * IS : Prec is not NULL
    * FS : element which was before behind an element pointed by Prec
    *      is removed and pointed by pointer P
    */
    //-------------your code here-------------
    P = Prec->next;
    Prec->next = P->next;
    (P->next)->prev = Prec;
    P->prev = NULL;
    P->next = NULL;
    //----------------------------------------
}
