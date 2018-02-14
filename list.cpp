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
    cout<<"your code here"<<endl;
    P=(address)malloc(sizeof(elmlist));
         info(P)=x;
         next(P)=NULL;


    //----------------------------------------
    return P;
}

void deallocate(address &P) {
    /**
    * FS : delete element pointed by P
    */
    //-------------your code here-------------
    delete(P)


    //----------------------------------------
}

void insertFirst(List &L, address P) {
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the first element in List L
    */
    //-------------your code here-------------
    P->next = L.First;
    L.First  = P;

    //----------------------------------------
}

void insertLast(List &L, address P) {
    /**
    * IS : List L may be empty
    * FS : element pointed by P became the last element in List L
    */
    //-------------your code here-------------
     address Q = L.First;
     if (Q == NULL){
         insertFirst(L,P);
      }else{
         while(Q->next != NULL)
             Q = Q->next;
         Q->next = P;
        P->next = NULL;
     };


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
    P = L.First;
     while (P != NULL && (P->info.id) != x.id){
         P = P->next;
     };


    //----------------------------------------
    return P;
}

void deleteFirst(List &L, address &P) {
    /**
    * IS : List L may be empty
    * FS : first element in List L is removed and is pointed by P
    */
    //-------------your code here-------------
    if (L.First != NULL){
             P = L.First;
            L.First = P->next;
             P->next = NULL;
             deallocate(P);
        }



    //----------------------------------------
}

void deleteLast(List &L, address &P) {
    /**
    * IS : List L may be empty
    * FS : last element in List L is removed and is pointed by P
    */
    //-------------your code here-------------
    if (L.First != NULL){
             if(L.First->next == NULL){
                 deleteFirst(L,P);
             }else{
                 address temp = L.First;
                 while(temp->next->next != NULL)
                     temp = temp->next;
                P = temp->next;
                 temp->next = NULL;
                 deallocate(P);
             };
         }



    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : view info of all element inside List L,
    *      call the view_data function from my_data.h to print the info
    */
    //-------------your code here-------------
   address p = L.First;
     while (p != NULL){
         cout<<"-----------------------"<<endl;
         cout<<"ID: "<<p->info.id<<endl;
         cout<<"Name: "<<p->info.name<<endl;
         cout<<"NIM: "<<p->info.nim<<endl;
         cout<<"Score: "<<p->info.score<<endl;
         cout<<"------------"<<endl;
         p = p->next;
     };


    //----------------------------------------
}


void insertAfter(address Prec, address P) {
    /**
    * IS : Prec and P is not NULL
    * FS : element pointed by P is placed behind the element
    *      pointed by pointer Prec
    */
    //-------------your code here-------------
    next(P) = next(Prec);
    next(Prec) = P;

    //----------------------------------------

}
void deleteAfter(address Prec, address &P) {
    /**
    * IS : Prec is not NULL
    * FS : element which was before behind an element pointed by Prec
    *      is removed and pointed by pointer P
    */
    //-------------your code here-------------
    if (Prec != NULL)
     {
 		P = Prec->next;
 		Prec->next = Prec->next->next;
 	}


    //----------------------------------------
}

