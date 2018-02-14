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

    address P;
    //-------------your code here-------------
    P = new elmlist;
    info(P) = x;
    next(P) = NULL;
    //----------------------------------------
    return P;
}

void deallocate(address &P) {
    /**
    * FS : delete element pointed by P
    */
    //-------------your code here-------------
    delete(P);
    //----------------------------------------
}

void insertFirst(List &L, address P) {
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the first element in List L
    */
    //-------------your code here-------------
    if (first(L)==NULL){
        first(L)=P;
    }else{
        next(P)= first(L);
        first(L)=P;
    }
    //----------------------------------------
}

void insertLast(List &L, address P) {
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the last element in List L
    */
    //-------------your code here-------------
    address(Q)=first(L);
    if (first(L)==NULL){
        first(L)=P;
    }else{
        while (next(Q)!= NULL) {
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

    address P;
    //-------------your code here-------------
    P = first(L);
    if (first(L)!=NULL){
            while(first(L)!=NULL && info(P).ID != x.ID){
                next(P)=P;
            }
    }
    //----------------------------------------
    return P;
}

void deleteFirst(List &L, address &P) {
    /**
    * IS : List L may be empty
    * FS : first element in List L is removed and is pointed by P
    */
    //-------------your code here-------------
    if (first(L)==NULL){}
    else{
        P=first(L);
        first(L) = next(first(L));
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
    if (first(L)==NULL){}
    else{
        address(Q)=first(L);
        while (next(next(Q))!=NULL){
            Q=next(Q);
        }
        P=next(Q);
        next(P)=NULL;
    }
    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : view info of all element inside List L,
    *      call the view_data function from my_data.h to print the info
    */
    //-------------your code here-------------
    address Q;
    Q = first(L);
    while (Q != NULL){
        view_data(info(Q));
        cout<<endl;
        Q = next(Q);
    }
    //----------------------------------------
}


void insertAfter(address Prec, address P) {
    /**
    * IS : Prec and P is not NULL
    * FS : element pointed by P is placed behind the element
    *      pointed by pointer Prec
    */
    //-------------your code here-------------
    if(Prec!=NULL){
        P=next(Prec);
        next(Prec)=P;
    }
    //----------------------------------------

}
void deleteAfter(address Prec, address &P) {
    /**
    * IS : Prec is not NULL
    * FS : element which was before behind an element pointed by Prec
    *      is removed and pointed by pointer P
    */
    //-------------your code here-------------
    if (Prec!=NULL){
        P=next(Prec);
        next(Prec)=next(next(Prec));
        next(P)=NULL;
    }
    //----------------------------------------
}

