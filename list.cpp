#include "list.h"
#include "my_data.h"

void createList(List &L) {
    /**
    * FS : set first(L) with Null
    */
    //-------------your code here-------------
    first(L) = NULL;
    //last(L) = NULL;
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
    //prev(P) = NULL;
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
    if(first(L) != NULL){
        next(P) = first(L);
        //prev(first(L)) = P;
        first(L) = P;
    }else{
        first(L) = P;
        //last(L) = P;
    }
    //----------------------------------------
}

void insertLast(List &L, address P) {
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the last element in List L
    */
    //-------------your code here-------------
    address Q;
    if (first(L) == NULL){
        insertFirst(L,P);
    }else{
        Q = first(L);
        while(next(Q) != NULL){
            Q = next(Q);
        }
        next(Q) = P;
    }
//    if(last(L) != NULL){
//        prev(P) = last(L);
//        next(last(L)) = P;
//        last(L) = P;
//    }else{
//        first(L) = P;
//        last(L) = P;
//    }
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
    while(P != NULL){
        if(info(P).ID == x.ID){
            return P;
        }else{
            P = next(P);
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
    P = first(L);
    if(next(P) != NULL){
        first(L) = next(P);
        next(P) = NULL;
    }else{
        first(L) = NULL;
    }
//    if(first(L) != last(L)){
//        P = first(L);
//        first(L) = next(P);
//        next(P) = NULL;
//        prev(first(L)) = NULL;
//    }else{
//        P = first(L);
//        first(L) = NULL;
//        last(L) = NULL;
//    }
    //----------------------------------------
}

void deleteLast(List &L, address &P) {
    /**
    * IS : List L may be empty
    * FS : last element in List L is removed and is pointed by P
    */
    //-------------your code here-------------
    address Q = first(L);
    if(next(first(L)) != NULL){
        while(next(next(Q)) != NULL){
            Q = next(Q);
        }
        P = next(Q);
    }else{
        deleteFirst(L,P);
    }
//    if(first(L) != last(L)){
//        P = last(L);
//        last(L) = prev(P);
//        prev(P) = NULL;
//        next(last(L)) = NULL;
//    }else{
//        P = last(L);
//        first(L) = NULL;
//        last(L) = NULL;
//    }
    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : view info of all element inside List L,
    *      call the view_data function from my_data.h to print the info
    */
    //-------------your code here-------------
    if(first(L) == NULL){
        cout<<"[List Kosong]"<<endl;
    }else{
        address P = first(L);
        while(P != NULL){
            view_data(info(P));
            P = next(P);
        }
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
    if((P != NULL) && (Prec != NULL))
    {
        next(P) = next(Prec);
        next(Prec) = P;
    }
//    if(Prec != NULL){
//        next(P) = next(Prec);
//        next(Prec) = P;
//        prev(P) = Prec;
//        prev(next(P)) = P;
//    }

    //----------------------------------------

}
void deleteAfter(List &L, address Prec, address &P) {
    /**
    * IS : Prec is not NULL
    * FS : element which was before behind an element pointed by Prec
    *      is removed and pointed by pointer P
    */
    //-------------your code here-------------
    if(Prec != NULL)
    {
        P = next(Prec);
        next(Prec) = next(P);
        next(P) = NULL;
    }
//    if(Prec != NULL){
//        P = next(Prec);
//        next(Prec) = next(P);
//        next(prev(P)) = Prec;
//        next(P) = NULL;
//        prev(P) = NULL;
//    }
    //----------------------------------------
}

