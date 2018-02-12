#include "list.h"
#include "my_data.h"

void createList(List &L) {
    /**
    * FS : set first(L) with Null
    */
    //-------------your code here-------------
    first(l)=NULL;


    //----------------------------------------
}

address allocate(infotype x) {
    /**
    * FS : return new list element with info = x and next element is Null
    */

    address P;
    //-------------your code here-------------
    address p = new elmlist;
    info(p) = x;
    return p;


    //----------------------------------------
    return P;
}

void deallocate(address &P) {
    /**
    * FS : delete element pointed by P
    */
    //-------------your code here-------------
    delete p;


    //----------------------------------------
}

void insertFirst(List &L, address P) {
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the first element in List L
    */
    //-------------your code here-------------
    next(P) = first(L);
    first(L) = p;



    //----------------------------------------
}

void insertLast(List &L, address P) {
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the last element in List L
    */
    //-------------your code here-------------
    if (first(L) != NULL){
        address Q;
        P = first(L);
        while (next(Q) !=NULL) {
            Q = next(Q);
            next(Q) = P;
        }
    }
    else {
        P = first(L);
        if (first(L) == NULL){
            next(P) = first(L);
            first(L) = P;
        }
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
    P = first(L);
    while ((next(P) != NULL) and (info(P) != x)){
        P = next(P);
    }
    if (info (P) == x) {
        cout<<P<<endl;
    }
    else {
        cout<<"kosong"<<endl;
    }
    //-------------your code here-------------



    //----------------------------------------
    return P;
}

void deleteFirst(List &L, address &P) {
    /**
    * IS : List L may be empty
    * FS : first element in List L is removed and is pointed by P
    */
    //-------------your code here-------------
    if (first(L) != NULL) {
        P = first(L);
        first(L) = next(first(L));
        next(P) = NULL;
    }
    else {
        cout<<"tidak ada data"<<endl;
    }



    //----------------------------------------
}

void deleteLast(List &L, address &P) {
    /**
    * IS : List L may be empty
    * FS : last element in List L is removed and is pointed by P
    */
    //-------------your code here-------------
    address R;
    if ( first(L) == NULL) {
        P = NULL;
    }
    else if (next(first(L))== NULL){
        P = first(L);
        first(L) = NULL;
    }
    else {
        P = first(L);
        while (next(P) != NULL){
            R = P;
            P = next(P)
        }
        next(R) = NULL;
    }
    return p;

    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : view info of all element inside List L,
    *      call the view_data function from my_data.h to print the info
    */
    //-------------your code here-------------
    address (P) = first(L);
    if (first(L) !=NULL){
        do {
            cout<< info(P)<<", ";
            P=next(P);
        } while (P != NULL);
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

    address Q;
    Q = first(L);
    while ( next(Q) != NULL and info(Q) != Prec){
        Q = next (Q);
    }
    if ( next (Q) != NULL ){
        next(P) = next(Q);
        next (Q) = P;
    }
    else {
        cout<<"list kosong"<<endl;
    }
    //----------------------------------------

}
void deleteAfter(List &L, address Prec, address &P) {
    /**
    * IS : Prec is not NULL
    * FS : element which was before behind an element pointed by Prec
    *      is removed and pointed by pointer P
    */
    //-------------your code here-------------
    address Q;
    P = NULL;
    Q = first(L);
    while ((Q != NULL) and (info(Q) != Prec)) {
        Q = next(Q);
    }
    if (Q != NULL){
        if (next(Q) != NULL){
            P = next(Q);
            next (Q) = next(P);
            next(P) = NULL;
        }
        else {
            cout<<"prec di data berakhir"<<endl;
        }
    }
    else {
        cout<<"list kosong"<<endl;
    }


    //----------------------------------------
}

