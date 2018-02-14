#include "list.h"
#include "my_data.h"

void createList(List &L) {
    /**
    * FS : set first(L) with Null
    */
    //-------------your code here-------------

    first(L)=NULL;

    //----------------------------------------
}

address allocate(infotype x) {
    /**
    * FS : return new list element with info = x and next element is Null
    */

    address P=new elmlist;
    //-------------your code here-------------

    info(P)=x;

    //----------------------------------------
    return P;
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


        next(P)=first(L);
        first(L)=P;


    //----------------------------------------
}

void insertLast(List &L, address P) {
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the last element in List L
    */
    //-------------your code here-------------
    address Q;

    if (first(L)==NULL) {
        insertFirst(L, P);
    }
    else {
        Q=first(L);
        while (next(Q)!=NULL) {
            Q=next(Q);
        }
        next(Q)=P;
    }

    //----------------------------------------
}

address findElm(List L, infotype x) {
    /**
    * IS : List L may be empty
    * FS : returns element with info.ID = x.ID,
           return Null if such ID is not found
    */

    address Q;
    //-------------your code here-------------


        Q=first(L);
        while (Q!=NULL){
            if (info(Q).id==x.id){
                return Q;
            }
            Q=next(Q);

    //----------------------------------------

}
}

void deleteFirst(List &L, address &P) {
    /**
    * IS : List L may be empty
    * FS : first element in List L is removed and is pointed by P
    */
    //-------------your code here-------------

    P=first(L);
    if (first(L)==NULL){

    }
    else if (next(P)==NULL){
        first(L)=NULL;
    }
    else {
        first(L)=next(P);
        next(P)=NULL;
    }


    //----------------------------------------
}

void deleteLast(List &L, address &P) {
    /**
    * IS : List L may be empty
    * FS : last element in List L is removed and is pointed by P
    */
    //-------------your code here-------------

    address Q;
    P=first(L);
    if (first(L)==NULL) {

    }
    else if (next(P)==NULL) {
        deleteFirst(L, P);
    }
    else {
        while (next(P)!=NULL) {
            P=next(P);
        }
        Q=first(L);
    }

}


    //----------------------------------------


void printInfo(List L) {
    /**
    * FS : view info of all element inside List L,
    *      call the view_data function from my_data.h to print the info
    */
    //-------------your code here-------------

    address P=first(L);
    while (P!=NULL) {
        view_data(info(P));
        P=next(P);
    }

    //----------------------------------------
}


void insertAfter(List &L, address Prec, address P) {
    /**
    * IS : Prec and P is not NULL
    * FS : element pointed by P is placed behind the element
    *      pointed by pointer Prec
    */
    //-------------your code here-------------

    next(P)=next(Prec);
    next(Prec)=P;
    //----------------------------------------

}
void deleteAfter(List &L, address Prec, address &P) {
    /**
    * IS : Prec is not NULL
    * FS : element which was before behind an element pointed by Prec
    *      is removed and pointed by pointer P
    */
    //-------------your code here-------------


    P=next(Prec);
    next(Prec)=next(P);
    next(P)=NULL;
    }
    //----------------------------------------


