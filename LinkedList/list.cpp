#include <iostream>
#include "list.h"

address allocate (infotype a)
{
    address p;

    p=new element_list;
    info(p)=a;
    return p;
}

void create_new (infotype *a)
{
    infotype b;

    cout<<"MENU INPUT DATA"<<endl;
    cout<<"==============="<<endl;
    cout<<"Nama MK : ";
    cin>>b.name;
    cout<<"Kode MK (5 digit) : ";
    cin>>b.id;
    cout<<"Nama Dosen MK : ";
    cin>>b.namelec;
    cout<<"SKS : ";
    cin>>b.sks;
    cout<<"Shift : ";
    cin>>b.shift;
    *a=b;
}

void insert_first (list *L, address p)
{
    if((*L).first==NULL)
    {
        (*L).first=p;
        next((*L).first)=NULL;
    }
    else
    {
        next(p)=NULL;
        next(p)=(*L).first;
        (*L).first=p;
    }
}

void insert_after(list *L, address p, address s)
{
    address q;

    q=(*L).first;
    while (info(q).id!=info(s).id)
    {
        q=next(q);
    }
    next(p)=NULL;
    next(p)=next(q);
    next(q)=p;
}

void insert_last(list *L,address p)
{
    address q;

    q=(*L).first;
    while(next(q)!=NULL)
    {
        q=next(q);
    }
    next(p)=NULL;
    next(q)=p;
}

void delete_first(list *L,address *p)
{
    *p=(*L).first;
    (*L).first=next((*L).first);
    next(*p)=NULL;
    delete p;
}

void delete_after(list *L, address *p, address*s)
{
    address q;

    q=(*L).first;
    while(q!=*s)
    {
        q=next(q);
    }
    *p=next(q);
    next(q)=NULL;
    delete p;
}

void delete_last(list *L,address *p)
{
    address q;

    q=(*L).first;
    while(next(next(q))!=NULL)
    {
        q=next(q);
    }
    *p=next(q);
    next(q)=NULL;
    delete p;
}

void view_data(list L)
{
    address q;

    q=(L).first;
    while(q!=NULL)
    {
        cout<<"===================="<<endl;
        cout<<"Nama MK : "<<info(q).name<<endl;
        cout<<"Kode MK (5 digit) : "<<info(q).id<<endl;
        cout<<"Nama Dosen MK : "<<info(q).namelec<<endl;
        cout<<"SKS : "<<info(q).sks<<endl;
        cout<<"Shift : "<<info(q).shift<<endl;
        cout<<"===================="<<endl;
        q=next(q);
    }
    cout<<"=====SELESAI====="<<endl;
}

address search_data(list L, infotype a)
{
    address q;

    q=(L).first;
    while(info(q).id!=a.id)
    {
        q=next(q);
    }
    return q;
}

void find_data (infotype *a)
{
    cout<<"CARI DATA MATA KULIAH"<<endl;
    cout<<"====================="<<endl;
    cout<<"Masukkan Kode MK : ";
    cin>>(*a).id;
}
