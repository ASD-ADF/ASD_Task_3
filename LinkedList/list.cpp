#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include "karyawan.h"

using namespace std;

address alokasi (infotype x)
{
    address p=(address)malloc(sizeof(Elmlist));
    info(p)=x;
    return p;
}

void buat_baru(infotype *x)
{
    cout<< "=============INSERT DATA KARYAWAN============= "<<endl;
    infotype k;
    cout<<"Masukkan ID Karyawan  : ";
    cin>>k.idKar;
    cout<<"Masukkan Nama  : ";
    cin>>k.nama;
    cout<<"Masukkan Alamat  : ";
    cin>>k.alm;
    cout<<"Masukkan Jenis Kelamin  : ";
    cin>>k.jk;
    cout<<"Masukkan No. Tlp  : ";
    cin>>k.notlp;
    *x=k;
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

void view(list l)
{
    address Q;
    Q=(l).awal;
    cout<< "=============DATA KARYAWAN============= "<<endl;
    if(Q==NULL)
        cout<<"Data Kosong"<<endl;
    while(Q!=NULL)
    {
        cout<<"ID Karyawan  : " <<info(Q).idKar <<endl;
        cout<<"Nama  : " <<info(Q).nama<<endl;
        cout<<"Alamat  : " <<info(Q).alm<<endl;
        cout<<"Jenis Kelamin  : " <<info(Q).jk<<endl;
        cout<<"No. Tlp  : " <<info(Q).notlp<<endl;
        Q=next(Q);
        cout<<endl<<endl;
    }

    getch();
}
