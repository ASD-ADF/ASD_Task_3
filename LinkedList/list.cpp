#include "list.h"

void createList(list *L){
    first(*L) = Nil;
}

address allocate(infotype x){
    address P = new elmlist;
    info(P) = x;
    next(P)=Nil;
    return P;
}

void insertFirst(list *L, address P){
    if(first(*L)==Nil){

        first(*L)=P;
    }

    else{
        next(P) = first(*L);
        first(*L) = P;
    }
}

void insertLast(list *L, address P){
    address Q;
    Q = first(*L);

    while(next(Q) != Nil){
        Q = next(Q);
    }

    next(Q) = P;
    next(P) = Nil;
}

void insertAfter(list *L, address P, address prec){
    address Q;
    Q = first(*L);

    while(next(Q) != Nil and info(Q).id != info(prec).id){
        Q = next(Q);
    }
    next(P) = next(Q);
    next(Q) = P;
}

void deleteFirst(list *L, address P){
   P = first(*L);
   first(*L) = next(first(*L));
   next(P) = NULL;
   free(P);
   delete P;
}

void deleteLast(list *L, address P){
    address Q;
    Q = first(*L);

    while(next(Q) != Nil){
        P = Q;
        Q = next(Q);
    }

    next(P) = NULL;
    free(Q);
    delete Q;
}

void deleteAfter(list *L, address P, address Prec){
    next(Prec) = next(P);
    next(P) = Nil;
    free(P);
    delete P;
}

address searchElement(list *L, infotype x){
    address P;
    bool value = false;

    P = first(*L);

    while(!value and next(P) != NULL){
        if(info(P).id == x.id){
            value = true;
        }else{
            P = next(P);
        }
    }

    if(!value){
        P = Nil;
    }
    return P;
}

void viewList(list L){
    address P;

    P = first(L);
    while((P) != Nil){
        cout<<"ID = "<<info(P).id<<endl;
        cout<<"Nama = "<<info(P).nama<<endl;
        cout<<"Jabatan = "<<info(P).jabatan<<endl;
        cout<<"Departemen = "<<info(P).departemen<<endl;
        cout<<"Gaji = "<<info(P).gaji<<endl<<endl;

        P = next(P);
    }
}

address searchSentinel(list *L, infotype x){
    address P;
    P = allocate(x);

    insertLast(L, P);

    address Q;
    Q = first(*L);

    while(info(Q).id != x.id){
        Q = next(Q);
    }

    if(next(Q) == Nil){
        cout<<"Data ditemukan.";
    } else{
        cout<<"Data tidak ditemukan.";
        Q = Nil;
    }

    return Q;
}



