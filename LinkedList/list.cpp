#include "list.h"

void insertFirst (list *l,address p)
{
    if(first(*l)==nil)
    {
        first(*l)=p;
    }
    else
    {
        next(p)=first(*l);
        first(*l)=p;
    }
};

void insertafter(list *l,address p,address prec)
{
    address q=first(*l);
    while(next(q)=nil)
    {
        q=next(q);
    }
    next(q)=next(p);
    next(p)=next(q);
}

void insertlast(list *l,adress p,address prec)
{
    address q=first(l*);
    while(next(q)!=nil){
        q=next(q);
    }
    next(q)=p;
    next(p)=nil;
}

void deletefisrt(list *l,address p)
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

void printinfo (list *l)
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
  
