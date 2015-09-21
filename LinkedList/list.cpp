#include "list.h"

address alocate(infotype x){
        address p=new elmlist;
        info(p)=x;
        return p;
        }
        
void insertFirst (list *l,address p)
{
    if(first(*l)==nil)
    {
        first(*l)=p;
    }
    else
    {
         p=alocate(x);
        next(p)=nil;
        next(p)=first(*l);
        first(*l)=p;
    }
};

void insertafter(list *l,address p,address prec)
{
    infotype x;
    p=first(*l);
    while(next(q)=nil)
    {
        q=next(q);
    }
    p=alocate(x);
    next(p)=nil;
    next(p)=next(prec);
    next(prec)=p;
}

void insertlast(list *l,adress p,address prec)
{   infotype x;
    address q=first(l*);
    while(next(q)!=nil){
        q=next(q);
    }
    p=alocate(x);
    next(q)=p;
    next(p)=nil;
}

void deletefirst(list *l,address p)
{
    if (next(first(*l))==nil){
        first(*l)=nil;
    }
    else{
        p=first(*l);
        first(*l)=next(p);
        next(p)=nil;
    }
}

void deleteafter(list *l,address p,address prec){
    p=first(*l);

    next(p)=next(prec);
    next(prec)=nil;
    }

void deletelast(list *l,address p){
    address q=first(*l);
    do{
        if (next(q)!=p){
            q=next(q);
        }
    } while(next(q)!=p);
    next(q)=nil;
    }
void viewList (list *l)
{
    address p;
    while((p)!=nil)
    {
        cout<< "NIM          : " <<info (p).nim << endl;
        cout<< "Nama         : " <<info (p).nama << endl;
        cout<< "Kelas        : " <<info (p).kelas<< endl;
        cout<< "Jurusan      : " <<info  (p).jrsn << endl;
        cout<< "Angkatan     : " << info  (p).angkatan<<endl;
        cout << endl;
        p=next(p);
    }

};

void mahasiswa (infotype *x)
{

    cout << "NIM        : "; cin >> (*x).nim;
    cout << "Nama       : "; cin >> (*x).nama;
    cout << "Kelas      : "; cin >> (*x).kelas;
    cout << "Jurusan    : "; cin >> (*x).jrsn;
    cout << "Angkatan   : "; cin >> (*x).angkatan;
};
  
address searchElement(list *l,infotype x){
        address p=first(*l);
    do{
        if (info(p).nim!=(x).nim){
            p=next(p);
            }
        else {
            cout<<info(p).nim;
            cout<<info(p).nama;
            cout<<info(p).kelas;
            cout<<info(p).jrsn;
            cout<<info(p).angkatan;
        }
    } while(next(p)!=nil);
}
