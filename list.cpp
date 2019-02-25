#include "list.h"
#include "my_data.h"

void createList(List &L) {
    /**
    * FS : set first(L) with Null
    */
    //-------------your code here-------------
    first(L) = NULL;
    //----------------------------------------
}

address allocate(infotype x) {
    /**
    * FS : return new list element with info = x and next element is Null
    */

    //-------------your code here-------------
    address P = new elmlist;
    P->info = x;
    P->next = NULL;
    P->prev = NULL;
    return P;
    //----------------------------------------
}

void deallocate(address &P) {
    /**
    * FS : delete element pointed by P
    */
    //-------------your code here-------------
    delete P;
    //----------------------------------------
}

void insertFirst(List &L, address P) {
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the first element in List L
    */
    //-------------your code here-------------
    if (first(L) != NULL)
    {
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
    else
    {
        first(L) = P;
    }
    //----------------------------------------
}

void insertLast(List &L, address P) {
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the last element in List L
    */
    //-------------your code here-------------
    next(P)=first(L);
    prev(P)=prev(first(L));
    next(prev(P))=P;
    prev(first(L))=P;
    //----------------------------------------
}

address findElm(List L, infotype x) {
    /**
    * IS : List L may be empty
    * FS : returns element with info.ID = x.ID,
           return Null if such ID is not found
    */
    //-------------your code here-------------
    address P = first(L);
    while (P!=NULL)
    {
        if (info(P).ID == x.ID)
        {
            return P;
        }
        else
        {
            P = next(P);
        }
    }
    return NULL;
    //----------------------------------------
}

void deleteFirst(List &L, address &P) {
    /**
    * IS : List L may be empty
    * FS : first element in List L is removed and is pointed by P
    */
    //-------------your code here-------------
    P=first(L);
    first(L)=next(first(L));
    next(P)=NULL;
    deallocate(P);
    //----------------------------------------
}

void deleteLast(List &L, address &P) {
    /**
    * IS : List L may be empty
    * FS : last element in List L is removed and is pointed by P
    */
    //-------------your code here-------------
    address Q=prev(first(L));
    prev(first(L))=prev(Q);
    next(prev(Q))=first(L);
    next(Q)=NULL;
    prev(Q)=NULL;
    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : view info of all element inside List L,
    *      call the view_data function from my_data.h to print the info
    */
    //-------------your code here-------------
    if (first(L) != NULL)
    {
        address P = first(L);
        while (P!=NULL)
        {
            view_data(info(P));
            P = next(P);
        }

    }
    else
    {
        cout<<"NULL";
    }

    cout<<endl;
    //----------------------------------------
}


void insertAfter(List &L, address Prec, address P) {
    /**
    * IS : Prec and P is not NULL
    * FS : element pointed by P is placed behind the element
    *      pointed by pointer Prec
    */
    //-------------your code here-------------
    infotype x;
    P=allocate(x);
    next(P)=NULL;
    prev(P)=NULL;
    next(P)=next(Prec);
    prev(P)=Prec;
    prev(next(Prec))=P;
    prev(Prec)=P;
     //----------------------------------------

}
void deleteAfter(List &L, address Prec, address &P) {
    /**
    * IS : Prec is not NULL
    * FS : element which was before behind an element pointed by Prec
    *      is removed and pointed by pointer P
    */
    //-------------your code here-------------
    P = next(Prec);
    next(Prec) = next(P);
    prev(next(P)) = Prec;
    prev(P) = NULL;
    next(P) = NULL;
    //----------------------------------------
}
