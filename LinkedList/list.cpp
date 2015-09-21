#include "list.h"


void createlist(list *l){
    first(*l) = NULL;
};

void dealokasi(address p){
    free(p);
};

address alokasi(data x){
    address p;
    p=(address)malloc(sizeof(elmlist));
    dat(p)=x;
    next(p)=NULL;
    return p;
};

void insertfirst(list *l, address p){
    if(first(*l)==NULL){
        first(*l)=p;
    }
    else{
        next(p)=first(*l);
        first(*l)=p;
    }
};

void insertlast(list *l, address p){
    address q=first(*l);
    while (next(q)!=NULL){
        q=next(q);
    }
    next(q)=p;
};

void insertafter(address q, address p){
    next(p)=next(q);
    next(q)=p;
};

void deletefirst(list *l, address p){
    if (next(first(*l))==NULL){
        first(*l)=NULL;
    }
    else {
        p=first(*l);
        first(*l)=next(p);
        next(p)=NULL;
    }
    dealokasi(p);
};

void deletelast(list *l, address p){
    address q;
    p=first(*l);
    while ((next(p))!=NULL){
        q=p;
        p=next(p);
    }
    next(q)=NULL;
    dealokasi(p);
};

void deleteafter(address q, address *p){
    next(q)=next(*p);
    next(*p)=NULL;
    dealokasi(*p);
};

void printinfo(list l){
    address p;
    while (p!=NULL){
        cout<<"ID : "<<data(p).id<<endl;
        cout<<"Tabungan asuransi : "<<data(p).tabungan_asuransi<<endl;
        cout<<"jenis asuransi : "<<data(p).jenis_asuransi<<endl;
        p=next(p);
    }
};
