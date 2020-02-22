#include "list.h"
#include "my_data.h"
#include <iostream>
using namespace std;

void createList(List &L) {
    /**
    * FS : set first(L) and last(L) with Null
    */
    //-------------your code here-------------
    L.first = NULL;
    L.last = NULL;
    //----------------------------------------
}

address allocate(infotype x) {
    /**
    * FS : return new list element with info = x and next element is Null
    */

    address P;
    //-------------your code here-------------
    P = new elmlist;
    info(P).ID = x.ID;
    info(P).name = x.name;
    info(P).rank = x.rank;
    info(P).score = x.score;
    next(P) = NULL;
    prev(P) = NULL;
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
    if (L.first != NULL){
        P->next = L.first;
        prev(L.first) = P;
        L.first = P;
    }else{
        L.first = P;
        L.last = P;
    }
    //----------------------------------------
}

void insertLast(List &L, address P) {
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the last element in List L
    */
    //-------------your code here-------------
    if (L.first!=NULL){
        P->prev = L.last;
        next(L.last) = P;
        L.last = P;
    }else{
        L.last = P;
        L.first = P;
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
    P = L.first;
    if (L.first!=NULL){
        while (P != NULL && info(P).ID != x.ID)
        {
            P = P -> next;
        }
    }else{
        P=NULL;
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
    P = L.first;
    if (L.first!=last(L)){
        L.first = next(P);
        next(P) = NULL;
        prev(L.first)=NULL;
    }else {
        L.first = NULL;
        L.last = NULL;
    }
    //----------------------------------------
}

void deleteLast(List &L, address &P) {
    /**
    * IS : List L may be empty
    * FS : last element in List L is removed and is pointed by P
    */
    //-------------your code here-------------
    P = L.last;
    if (L.last!=first(L)){
        L.last = prev(P);
        prev(P) = NULL;
        next(L.last)=NULL;
    }else {
        L.first = NULL;
        L.last = NULL;
    }
    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : view info of all element inside List L,
    *      call the view_data function from my_data.h to print the info
    */
    //-------------your code here-------------
    address P=first(L);
    if (P==NULL){
        cout<<"Data Tidak Ada.."<<endl;
    }else{
        while (P!=NULL){
            view_data(info(P));
            P = next(P);
        }
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
    P->next = Prec->next;
    P->prev = Prec;
    prev(next(Prec)) = P;
    Prec->next = P;
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
    next(P) = NULL;
    prev(P) = NULL;
    //----------------------------------------
}

