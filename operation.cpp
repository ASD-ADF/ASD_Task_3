#include "list.h"
#include "operation.h"
#include "my_data.h"


void insertAndSort(List &L, address P) {
    /**
    * IS : List may be empty
    * PR : insert an element pointed by P into an already sorted-by-ID List L
    *      so that the elements inside List L is still sorted by ID
    *      procedure must also check if such ID is already exists (No Duplicate ID)
    * FS : elements in List L sorted by ID, P is inside List L
    */

    //-------------your code here-------------
    cout<<"your code here"<<endl;

    if(first(L)==NULL){
        first(L)=P;
    }else{
        address Q=first(L);
        bool found=false;
        while((P->info.ID!=Q->info.ID)&&(!found)){
            if(P->info.ID==Q->info.ID){
                found=true;
            }
            Q=next(Q);
        }
        if(found==true){
            cout<<"ID sudah ada, silahkan masukkan ID lain";
        }else{
            if(next(first(L))==NULL){
                if(P->info.ID<first(L)->info.ID){
                    insertFirst(L,P);
                }else if(P->info.ID>first(L)->info.ID){
                    insertLast(L,P);
                }
            }else{                                 //next(first(L))!= NULL
                Q=first(L);
                while(next(Q)->info.ID<P->info.ID){
                    Q=next(Q);
                }
                next(P)=next(Q);
                next(Q)=P;
            }
          }
        }
    //----------------------------------------
}


void deletebyID(List &L, infotype x) {
    /**
    * IS : List L may be empty
    * FS : an element with ID info = x.id is deleted from List L (deallocate)
    */

    address Prec, P;
    //-------------your code here-------------
    cout<<"your code here"<<endl;

    if(first(L)==NULL){
        cout<<"List kosong";
    }else{
        if(next(first(L))==NULL){
            if(first(L)->info.ID==x.ID){
                deleteFirst(L,P);
            }else{
                cout<<"Id tidak ditemukan";
            }
        }else{
            Prec=first(L);
            while(next(Prec)->info.ID!=x.ID){
                Prec=next(Prec);
            }
            if(first(L)->info.ID==x.ID){
                deleteFirst(L,P);
            }else if(next(next(Prec))==NULL){
                deleteLast(L,P);
            }else{
                deleteAfter(Prec,P);
            }
        }
    }


    //----------------------------------------
}
