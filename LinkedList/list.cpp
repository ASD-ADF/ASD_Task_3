#include <iostream>
#include "list.h"

address alokasi (infotype x)
{
    address p;
    p = new elmlist;
    info(p)=x;
    return p;
}

void baru (infotype *x)
{
    infotype y;
    cout<<"Input data"<<endl;
    cout<<"Nama     : ";
    cin>>y.nama;
    cout<<"ID       : ";
    cin>>y.id;
    cout<<"tglmasuk : ";
    cin>>y.tgl;
    cout<<"Jenis    : ";
    cin>>y.jenis;
    cout<<"Harga    : ";
    cin>>y.harga;
    *x=y;
}
void insertfirst (list *L, address P)
{
    if((*L).first==NULL)
    {
        (*L).first=P;
        next((*L).first)=NULL;


    }
    else
    {
        next(P)=NULL;
        next(P)=(*L).first;
        (*L).first=P;
    }
}
void insertlast(list *L,address P)
{
    address Q;
    Q=(*L).first;
    while(next(Q)!=NULL)
    {
        Q=next(Q);
    }
    next(P)=NULL;
    next(Q)=P;
}
void insertafter(list *L, address P, address S) {
    address Q;
    Q=(*L).first;
    while (info(Q).id!=info(S).id) {
            Q=next(Q);
    }
    next(P)=NULL;
    next(P)=next(Q);
    next(Q)=P;

}
void delfirst(list *L,address *P){
    *P=(*L).first;
    (*L).first=next((*L).first);
    next(*P)=NULL;
    delete P;
}
void dellast(list *L,address *P) {
    address Q;
    Q=(*L).first;
    while(next(next(Q))!=NULL) {
        Q=next(Q);
    }
    *P=next(Q);
    next(Q)=NULL;
    delete P;

}
void delafter(list *L, address *P, address*S){
address Q;
    Q=(*L).first;
    while(Q!=*S) {
        Q=next(Q);
    }
    *P=next(Q);
    next(Q)=NULL;
    delete P;
}

void view(list L)
{
    address Q;
    Q=(L).first;
    while(Q!=NULL)
    {
        cout<<"ID        : "<<info(Q).id<<endl;
        cout<<"Nama      : "<<info(Q).nama<<endl;
        cout<<"TglMasuk  : "<<info(Q).tgl<<endl;
        cout<<"Jenis     : "<<info(Q).jenis<<endl;
        cout<<"Harga     : "<<info(Q).harga<<endl;
        cout<<endl;
        Q=next(Q);
    }
    cout<<"DONE"<<endl;
}

address searchelm(list L, infotype x){
    address Q;
    Q=(L).first;
    while(info(Q).id!=x.id) {
        Q=next(Q);
    }
    return Q;
}
