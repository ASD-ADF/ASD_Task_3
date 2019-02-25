#include "list.h"
#include "my_data.h"

void createList(List &L)
{
    /**
    * FS : set first(L) with Null
    */
    first(L) = NULL;
}

address allocate(infotype x)
{
    /**
    * FS : return new list element with info = x and next element is Null
    */

    address P;
    P = new elmlist;
    info(P) = x;
    next(P) = NULL;
    return P;
}

void deallocate(address &P)
{
    /**
    * FS : delete element pointed by P
    */
    delete P;
}

void insertFirst(List &L, address P)
{
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the first element in List L
    */
    if (first(L) == NULL)
    {
        first(L) = P;
    }
    else
    {
        next(P) = first(L);
        first(L) = P;
    }
}

void insertLast(List &L, address P)
{
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the last element in List L
    */
    if (first(L) == NULL)
    {
        insertFirst(L, P);
    }
    else
    {
        address Prec = first(L);
        while(next(Prec) != NULL)
        {
            Prec = next(Prec);
        }
        next(Prec) = P;
    }
}

address findElm(List L, infotype x)
{
    /**
    * IS : List L may be empty
    * FS : returns element with info.ID = x.ID,
           return Null if such ID is not found
    */

    address P = first(L);
    if (P == NULL)
    {
        cout<<"empty list \n";
    }
    else
    {
        while((P != NULL) || (info(P).id != x.id))
        {
            P = next(P);
        }
        if (P == NULL){
            return NULL;
        }
        else if (info(P).id == x.id){
                return P;
        }
    }
}
    void deleteFirst(List &L, address &P)
    {
        /**
        * IS : List L may be empty
        * FS : first element in List L is removed and is pointed by P
        */
        if (P != NULL){
            P = first(L);
            if (next(first(L)) == NULL){
                first(L) = NULL;
            }
            else{
                first(L) = next(P);
                next(P) = NULL;
            }
        }
    }

    void deleteLast(List &L, address &P)
    {
        /**
        * IS : List L may be empty
        * FS : last element in List L is removed and is pointed by P
        */
        P = first(L);
        if (P == NULL){
            cout<<"empty list \n";
        }
        else{
            if (next(first(L)) == NULL){
                deleteFirst(L, P);
            }
            else{
                while(next(next(P)) != NULL){
                    P = next(P);
                }
                next(P) = NULL;
            }
        }
    }


    void printInfo(List L)
    {
        /**
        * FS : view info of all element inside List L,
        *      call the view_data function from my_data.h to print the info
        */
        address P = first(L);
        if (P == NULL){
            cout<<"empty list";
        }
        else{
            while(P != NULL){
                view_data(info(P));cout<<endl;
                P = next(P);
            }
        }
    }


    void insertAfter(List &L, address Prec, address P)
    {
        /**
        * IS : Prec and P is not NULL
        * FS : element pointed by P is placed behind the element
        *      pointed by pointer Prec
        */
        next(P) = next(Prec);
        next(Prec) = P;
    }
    void deleteAfter(List &L, address Prec, address &P)
    {
        /**
        * IS : Prec is not NULL
        * FS : element which was before behind an element pointed by Prec
        *      is removed and pointed by pointer P
        */
        next(Prec) = next(P);
        next(P) = NULL;
    }

