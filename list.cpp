#include "list.h"
#include "my_data.h"

void createList(List &L)
{
    /**
    * FS : set first(L) with Null
    */
    //------------- -------------
    first(L) = NULL;
    last(L) = NULL;



    //----------------------------------------
}

address allocate(infotype x)
{
    /**
    * FS : return new list element with info = x and next element is Null
    */

    address P;
    //------------- -------------
    P = new elmlist;
    info(P) = x;
    next(P) = NULL;
    prev(P) = NULL;

    //----------------------------------------
    return P;
}

void deallocate(address &P)
{
    /**
    * FS : delete element pointed by P
    */
    //------------- -------------

    delete P;

    //----------------------------------------
}

void insertFirst(List &L, address P)
{
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the first element in List L
    */
    //------------- -------------
    if(first(L) != NULL)
    {
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
    else
    {
        first(L) = P;
        last(L) = P;
    }


    //----------------------------------------
}

void insertLast(List &L, address P)
{
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the last element in List L
    */
    //------------- -------------

    if (first(L) != NULL)
    {
        prev(P) = last(L);
        last(L) = P;
        next(last(L)) = P;
    }
    else
    {
        first(L) = P;
        last(L) = P;
    }

    //----------------------------------------
}

address findElm(List L, infotype x)
{
    /**
    * IS : List L may be empty
    * FS : returns element with info.ID = x.ID,
           return Null if such ID is not found
    */

    address P;
    //------------- -------------

    P = first(L);
    while(P != NULL)
    {
        if(info(P).ID == x.ID)
        {
            return P;
        }
        P = next(P);
    }

    //----------------------------------------
    return P;
}

void deleteFirst(List &L, address &P)
{
    /**
    * IS : List L may be empty
    * FS : first element in List L is removed and is pointed by P
    */
    //------------- -------------
    if (first(L) != NULL)
    {
        P = first(L);
        if (first(L) != last(L))
        {
            first(L) = next(P);
            prev(first(L)) = NULL;
            next(P) = NULL;
        }
        else
        {
            first(L) = NULL;
            last(L) = NULL;
        }
    }



    //----------------------------------------
}

void deleteLast(List &L, address &P)
{
    /**
    * IS : List L may be empty
    * FS : last element in List L is removed and is pointed by P
    */
    //------------- -------------
    if (last(L) != NULL)
    {
        P = last(L);
        if (first(L) != last(L))
        {
            last(L) = prev(P);
            next(last(L)) = NULL;
            prev(P) = NULL;
        }
        else
        {
            first(L) = NULL;
            last(L) = NULL;
        }
    }
    //----------------------------------------
}

void printInfo(List L)
{
    /**
    * FS : view info of all element inside List L,
    *      call the view_data function from my_data.h to print the info
    */
    //------------- -------------
    address P = first(L);
    if (P != NULL)
    {
        while (P!=NULL)
        {
            view_data(info(P));
            P = next(P);
        }
    }
    else
    {
        cout << "KOSONG";
    }
    cout << endl;
    //----------------------------------------
}


void insertAfter(List &L, address Prec, address P)
{
    /**
    * IS : Prec and P is not NULL
    * FS : element pointed by P is placed behind the element
    *      pointed by pointer Prec
    */
    //------------- -------------
    if ((Prec != NULL) && (P != NULL))
    {
        if (next(Prec) != NULL)
        {
            next(P) = next(Prec);
            prev(next(P)) = P;
            next(Prec) = P;
            prev(P) = Prec;
        }
        else
        {
            insertLast(L, P);
        }
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
    //------------- -------------
    if ((Prec != NULL) && (next(Prec) != NULL))
    {
        P = next(Prec);
        if (next(P) != NULL)
        {
            next(Prec) = next(P);
            prev(next(P)) = Prec;
            next(P) = NULL;
            prev(P) = NULL;
        }
        else
        {
            deleteLast(L, P);
        }
    }
    //----------------------------------------
}

