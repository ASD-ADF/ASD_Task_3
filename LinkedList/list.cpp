#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include "security.h"
using namespace std;
address allocate (infotype x)
{
    address p=(address)malloc(sizeof(Elmlist));
    info(p)=x;
    return p;
}
void buat_baru(infotype *x)
{
    cout<< "ooo INSERT DATA SECURITY ooo"<<endl;
    infotype s;
    cout<<"Masukkan ID Security  : ";
    cin>>s.ids;
    cout<<"Masukkan Nama  : ";
    cin>>s.nama;
    cout<<"Masukkan Alamat  : ";
    cin>>s.alamat;
    cout<<"Masukkan No. Tlp  : ";
    cin>>s.notlp;
    cout<<"Masukkan Jenis Kelamin  : ";
    cin>>s.jk;

    *x=s;
}

void insertfirst (list *l, address p)
{
    if((*l).awal==NULL)
    {
        (*l).awal=p;
        next((*l).awal)=NULL;


    }
    else
    {
        next(p)=NULL;
        next(p)=(*l).awal;
        (*l).awal=p;
    }
}
void insertlast(list *l,address p)
{
    address Q;
    Q=(*l).awal;
    while(next(Q)!=NULL)
    {
        Q=next(Q);
    }
    next(p)=NULL;
    next(Q)=p;
}
void insertafter(list *l, address p, address s)
{
    address Q;
    Q=(*l).awal;
    while (info(Q).ids!=info(s).ids)
    {
        Q=next(Q);
    }
    next(p)=NULL;
    next(p)=next(Q);
    next(Q)=p;

}
void deletefirst(list *l,address *p)
{
    *p=(*l).awal;
    (*l).awal=next((*l).awal);
    next(*p)=NULL;
    delete p;
}
void deletelast(list *l,address *p)
{
    address Q;
    Q=(*l).awal;
    while(next(next(Q))!=NULL)
    {
        Q=next(Q);
    }
    *p=next(Q);
    next(Q)=NULL;
    delete p;

}
void deleteafter(list *l, address *p, address s)
{
    address Q,P;
    P=(*l).awal;
    while(info(P).ids!=info(s).ids)
    {
        P=next(P);
    }
    Q=next(P);
    next(P)=next(Q);
    next(Q)=NULL;
    delete Q;

}

void view(list l)
{
    address Q;
    Q=(l).awal;
    cout<< "ooo DATA KARYAWAN ooo"<<endl;
    if(Q==NULL)
        cout<<"NULL"<<endl;
    while(Q!=NULL)
    {
        cout<<"ID Security  : " <<info(Q).ids <<endl;
        cout<<"Nama  : " <<info(Q).nama<<endl;
        cout<<"Alamat  : " <<info(Q).alamat<<endl;
        cout<<"No. Tlp  : " <<info(Q).notlp<<endl;
        cout<<"Jenis Kelamin  : " <<info(Q).jk<<endl;
        Q=next(Q);
        cout<<endl<<endl;
    }

    getch();
}
void cariid(infotype *x)
{
    cout<< "ooo CARI DATA SECURITY ooo "<<endl;
    cout<<"Masukkan ID Security yang dicari : ";
    cin>>(*x).ids;
}
address cari(list l,infotype x)
{
    address Q;
    Q=(l).awal;
    while(Q!=NULL)
    {
        if(info(Q).ids==x.ids)
            return Q;
        else
            Q=next(Q);
    }
    return NULL;
}


