#include <iostream>
#include "list.h"

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
