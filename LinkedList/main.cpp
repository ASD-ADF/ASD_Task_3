#include <iostream>
#include "list.h"

using namespace std;

int main()
{
    infotype x;
    listl l;
    address p,prec;
    char plh,pilih;
    
    do{
    cout<<"menu: \n";
    cout<<"1. insert \n";
    cout<<"2. delete \n";
    cout<<"3. view \n";
    cout<<"4. search \n";
    cout<<"input pilihan menu: ";
    cin>>pilih;

    if (pilih=='1'){
    cout<<"menu insert: \n";
    cout<<"1. first \n";
    cout<<"2. after \n";
    cout<<"3. last \n";
    cout<<"pilih menu: ";
    cin>>pilih;
    
    if (pilih=='1'){
    cout << " " << endl;
    insertFirst(&l,p);
    mahasiswa(&x);
    insertfirst(&l,p);
    }
    
    else if(pilih=='2'){
        mahasiswa (&x);
        insertafter(&l,p,prec);
    }
    else if(pilih=='3'){
        mahasiswa (&x);
        insertlast(&l,p);
    }
    
    else if(pilih=='2'){
        cout<<"menu delete: \n";
        cout<<"1. first \n";
        cout<<"2. after \n";
        cout<<"3. last \n";
        cout<<"pilih menu: ";
        cin>>pilih;
        if (pilih=='1'){
            deletefirst(&l,p);
        }
        else if(pilih=='2'){
            deleteafter(&l,p,prec);
        }
        else if(pilih=='3'){
            deletelast(&l,p);
        }
    }
 
    else if(pilih=='3'){
    cout<<"ingin lihat inputan?";
    cin>>plh;
    if (plh=='y') {
        viewList(&l);
    }
    else{
        cout<<"terimakasih";
    }
    }
    
    else if(pilih=='4'){
    cout<<"cari nim: ";
    cin>>(x).nim;
    searchElement(&l,x);

    if (next(p)==nil){
        cout<<"data tidak ada";
        }
}
    cout<<"apakah ada yang ingin dilakukan lagi?(y/n)";
    cin>>plh;
    } while (plh!='n');
    return 0;
}
