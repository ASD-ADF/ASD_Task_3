#include "list.h"
#include "my_data.h"

using namespace std;
void createList(List &L) {
    /**
    * FS : set first(L) and last(L) with Null
    */
    //-------------your code here-------------
    L.first=NULL;
    L.last=NULL;
    //----------------------------------------
}

address allocate(infotype x) {
    /**
    * FS : return new list element with info = x and next element is Null
    */

    address P;
    //-------------your code here-------------
    P=new elmlist;
    P->info.ID=x.ID;
    P->info.name=x.name;
    P->info.rank=x.rank;
    P->info.score=x.score;
    P->next=NULL;
    P->prev=NULL;
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
    if (L.first==NULL){
        L.first=P;
        L.last=P;
    }else {
        P->next=L.first;
        L.first->prev=P;
        L.first=P;
    }
    //----------------------------------------
}

void insertLast(List &L, address P) {
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the last element in List L
    */
    //-------------your code here-------------
    if (L.first==NULL){
        L.first=P;
        L.last=P;
    }else {
        L.last->next=P;
        P->prev=L.last;
        L.last=P;
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
    P=L.first;
    while (P!=NULL && P->info.ID!=x.ID){
        P=P->next;
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
    if (L.first==L.last){
        P=L.first;
        L.first=NULL;
        L.last=NULL;
    }else if (L.first!=NULL){
        P=L.first;
        L.first=P->next;
        L.first->prev=NULL;
        P->next=NULL;
    }

    //----------------------------------------
}

void deleteLast(List &L, address &P) {
    /**
    * IS : List L may be empty
    * FS : last element in List L is removed and is pointed by P
    */
    //-------------your code here-------------
    if (L.first!=NULL){
        P=L.last;
        L.last=P->prev;
        L.last->next=NULL;
        P->prev=NULL;
    }else if (L.first==L.last){
        P=L.first;
        L.first=NULL;
        L.last=NULL;
    }


    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : view info of all element inside List L,
    *      call the view_data function from my_data.h to print the info
    */
    //-------------your code here-------------
    address P = first(L);
    while (P != NULL)
    {
        cout<<P->info.ID<<" "<<P->info.name<<" "<<P->info.rank<<" "<<P->info.score<<endl;
        P = next(P);
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
    if (L.first!=NULL){
    P->next=Prec->next;
    P->prev=Prec;
    Prec->next->prev=P;
    Prec->next=P;
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

    if (L.first!=NULL){
    P=Prec->next;
    Prec->next = P->next;
    P->next->prev = Prec;
    P->next = NULL;
    P->prev = NULL;
    }

    //----------------------------------------
}

