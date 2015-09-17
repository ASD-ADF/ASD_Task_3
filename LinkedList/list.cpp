#include<iostream>
#include"list.h"

using namespace std;
address BuatData (absen Buat_absen){
    address P;
    P= new elmlist;
    p->next = NIL;
    p->info.pgw.id_pegawai=Input_absen.pgw.id_pegawai;
    p->info.pgw.nama_pegawai=Input_absen.pgw.nama_pegawai;
    p->info.pgw.jabatan = Input_absen.pgw.jabatan;
    p->info.jam_masuk.hh = Input_absen.jam_masuk.hh;
    p->info.jam_masuk.mm = Input_absen.jam_masuk.mm;
    p->info.jam_masuk.ss = Input_absen.jam_masuk.ss;
    return p;
}

void InputData (absen *Buat_absen) {
    cout<<"Masukkan id. pegawai : ";getline(cin, Buat_absen->pgw.id_pegawai);
    cout<<"Masukkan nama anda   : ";getline(cin, Buat_absen->pgw.nama_pegawai);
    cout<<"Masukkan jabatan anda: ";getline(cin, Buat_absen->pgw.jabatan);
    cout<<"Masukkan jam masuk   : ";getline(cin, Buat_absen->jam_masuk.hh);
    cout<<"Masukkan menit masuk : ";getline(cin, Buat_absen->jam_masuk.mm);
    cout<<"Masukkan detik masuk : ";getline(cin, Buat_absen->jam_masuk.ss);
    cout<<endl<<endl;
}

void Jumlah (list *L) {
    int j=1;
    address Q;
    Q= first(L);
    if(first(L)!= Nil) {
        while (next(Q) != NULL){
            Q=next(Q);
            j+=1;
        }
        return j;
    }
    else return 0;
}


void InsertFirst(list *L, address P) {
    next(P) = (*L).first;
    (*L).first = P;
};

void InsertLast(list *L, address P) {
    address Q;
    Q= L->first;
    if (Q->next == Nil){
        InsertFirst(L,P);
    }
    else {
        while (Q->next != Nil) {
            Q=next(Q);
        }
        Q->next=P;
    }
};

void InsertAfter(list *L, address P) {
    address prec;
    int jum = Jumlah(L);
    int i;
    if (L->first != Nil) {
        cout<<"Pilih posisi mana elemen yang ingin anda input : ";
        cin>>i;
        cin.ignore();
        if (i>0 && i<jum) {
            prec = first(L);
            for (int j=1;j<i-1; j++) {
                prec=next(prec);
            }
            P->next=next(prec);
            next(prec)=P;
        }
    }
    else InsertFirst(L,P);
}

void deleteAfter (list *L, address P) {
    int jum = Jumlah(L);
    int i;
    address Q;
    if (L->first == NULL) {
        InsertFirst(L,P);
    }
    else {
        cout<<"Pilih posisi mana elemen yang ingin anda input : ";
        cin>>i;
        if (i>= && i<jum) {
            Q=L->first;
            for(int j=1; i<i; i++) {
                Q=Q->next;
            }
            P=Q->next;
            Q->next=P->next;
            P->next = Nil;
            delete P;
        }
    }
}
void deleteFirst (list *L, address P) {
    if (((L).first)!=Nil) {
        P=((L).first);
        L->first=P->next;
        P->next=Nil;
        delete P;
    }
}

void deleteLast (list *L, address P) {
    address Q;
    if (L->first == NULL) {
        InsertFirst(L,P);
    }
    else {
        P= L->first;
        while (P->next != Nil) {
            Q = P;
            P = P->next;
        }
        Q->next=NULL;
        delete P;
    }
}

address searchElement(list *L) {
    P=L->first;
    int searchID;
    cout<<"Masukkan id pegawai yang ingin anda cari : ";
    cin>>
    while (P!=Nil) {
        if (P->info.pgw.id_pegawai == searchID)
            return P;
        P=P->next;
    }
    return Nil;
}

void searchData (list *L, address P) {
    int searchID;
    if (L->first == Nil) {
        cout<<"Data kosong";
    }
    else {
        P=searchElement(L);
        cout<<P<<endl<<endl;
        if (P != Nil) {
            cout<<"id pegawai   : ";<<P->info.pgw.id_pegawai<<endl;
            cout<<"Nama Pegawai : ";<<P->info.pgw.nama_pegawai<<endl;
            cout<<"Jabatan      : ";<<P->info.pgw.jabatan;
            cout<<"Jam Masuk    : ";<<P->info.pgw.jam_masuk.hh;
            cout<<"Menit Masuk  : ";<<P->info.pgw.jam_masuk.mm;
            cout<<"Detik Masuk  : ";<<P->info.pgw.jam_jasuk.ss;
        }
    }
}
