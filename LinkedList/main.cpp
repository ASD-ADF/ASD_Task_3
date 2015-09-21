#include <iostream>

using namespace std;

int main()
{
    address p,q;
    data x;
    list l;
    createlist(&l);
    insertfirst(&l, p);

    cout<<"input data pertama kali : "<<endl;
    cout<<"ID Pemegang Asuransi : ";
    cin>>x.id;
    cout<<"Jumlah Tabungan  Asuransi : ";
    cin>>x.tabungan_asuransi;
    cout<<"Jenis/Kelas Asuransi : ";
    cin>>x.jenis_asuransi;

    p=alokasi(x);
    cout<<"Menu pengolahan data Asuransi Kendaraan : "<< endl;
    cout<<"1. Insert After"<<endl;
    cout<<"2. Insert Last"<<endl;
    cout<<"3. Delete First"<<endl;
    cout<<"4. Delete After"<<endl;
    cout<<"5. Delete Last"<<endl;
    cout<<"pilihan : "
    int plh;
    cin>>plh;
    switch (plh){
        case 1 : insertafter(q,p); break;
        case 2 : insertlast(l,p); break;
        case 3 : deletefirst(l,p); break;
        case 4 : deleteafter(q,p); break;
        case 5 : deletelast(l,p); break;
        default : cout<<"pilihan tidak ada..."; break;
    }
    getch();
}
