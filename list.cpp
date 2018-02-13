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

    address P;
    //-------------your code here-------------

    address P = new elmlist;
    info(P) = data;
    next(P) = NULL;
    return P;

    //----------------------------------------

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
    //-------------your code here-------o------
    next(P) = first(L);
    first(L) = P;


    //----------------------------------------
}

void insertLast(List &L, address P) {
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the last element in List L
    */
    //-------------your code here-------------
    address Q = first(L);
    while(next(Q) != NULL){
        Q = next(Q);
    }
    next(Q) = P;
    Q = NULL;
    P = NULL;
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

    if(first(L) !=NULL){
        P = first(L);
        while(P!= NULL){
            if(info(P).stdnt == x.stdntid){
                return P;
            }
            else{
                P= next(P);
            }
        };
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

    if(first(L) != NULL){
        P = first(L);
        first(L) = next(P);
        deallocate(P);
        next(P) = NULL;
    }


    //----------------------------------------
}

void deleteLast(List &L, address &P) {
    /**
    * IS : List L may be empty
    * FS : last element in List L is removed and is pointed by P
    */
    //-------------your code here-------------
     address Q = first(L);
     while(next(Q)!= P){
        Q = next(Q);
     }
    next(Q) = NULL;
    deallocate(P);


    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : view info of all element inside List L,
    *      call the view_data function from my_data.h to print the info
    */
    //-------------your code here-------------

    address P = first(L);
    cout<<info(P)<<endl;

    while(next(P) !=NULL){
        cout<<info(P)<<endl;
        P = next(P);



    //----------------------------------------
}


void insertAfter(address Prec, address P) {
    /**
    * IS : Prec and P is not NULL
    * FS : element pointed by P is placed behind the element
    *      pointed by pointer Prec
    */
    //-------------your code here-------------
    cout<<"your code here"<<endl;

    //----------------------------------------

}
void deleteAfter(address Prec, address &P) {
    /**
    * IS : Prec is not NULL
    * FS : element which was before behind an element pointed by Prec
    *      is removed and pointed by pointer P
    */
    //-------------your code here-------------
    cout<<"your code here"<<endl;


    //----------------------------------------
}

