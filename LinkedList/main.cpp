#include "list.h"


int main()
{
    int pil;
    infotype x, y;
    address P, Q;
    list L;
    createList(&L);

    while(pil != 10){
        cout<<"1. Insert first"<<endl;
        cout<<"2. Insert after"<<endl;
        cout<<"3. Insert last"<<endl;
        cout<<"4. Delete first"<<endl;
        cout<<"5. Delete after"<<endl;
        cout<<"6. Delete last"<<endl;
        cout<<"7. View list"<<endl;
        cout<<"8. Search element"<<endl;
        cout<<"9. Search sentinel"<<endl;
        cout<<"Pilih: "; cin>>pil;

        switch(pil){

    case 1:
        cout<<"ID           : "; cin>>x.id;
        cout<<"Nama         : "; cin>>x.nama;
        cout<<"Jabatan      : "; cin>>x.jabatan;
        cout<<"Departemen   : "; cin>>x.departemen;
        cout<<"Gaji         : "; cin>>x.gaji;

        P = allocate(x);
        insertFirst(&L, P);
        cout<<endl;
        cout<<"Insert complete.";
        break;

    case 2:
        cout<<"ID           : "; cin>>x.id;
        cout<<"Nama         : "; cin>>x.nama;
        cout<<"Jabatan      : "; cin>>x.jabatan;
        cout<<"Departemen   : "; cin>>x.departemen;
        cout<<"Gaji         : "; cin>>x.gaji;

        cout<<"Dimasukan setelah ID: "; cin>>y.id;
        if(searchElement(&L, y) != Nil){
            insertAfter(&L, allocate(x), allocate(y));
            cout<<endl;
            cout<<"Insert complete.";
        }else{
            cout<<"Data tidak ada.";
        }
        break;

    case 3:
        cout<<"ID           : "; cin>>x.id;
        cout<<"Nama         : "; cin>>x.nama;
        cout<<"Jabatan      : "; cin>>x.jabatan;
        cout<<"Departemen   : "; cin>>x.departemen;
        cout<<"Gaji         : "; cin>>x.gaji;

        insertLast(&L, allocate(x));
        cout<<endl;
        cout<<"Insert complete.";

        break;

    case 4:
        cout<<"ID           : "; cin>>x.id;
        deleteFirst(&L, allocate(x));
        cout<<endl;
        cout<<"Delete complete.";

        break;

    case 5:
        cout<<"ID: "; cin>>x.id;
        P = allocate(x);
        cout<<"Dimasukan setelah ID: "; cin>>x.id;
        Q = allocate(x);

        deleteAfter(&L, P, Q);
        cout<<endl;
        cout<<"Delete complete.";

        break;

    case 6:
        cout<<"ID: "; cin>>x.id;
        deleteFirst(&L, allocate(x));
        cout<<endl;
        cout<<"Delete complete.";

        break;

    case 7:
        viewList(L);
        break;

    case 8:
        cout<<"ID: "; cin>>x.id;
        P = searchElement(&L, x);

        if(P != Nil){
            cout<<"ID           = "<<info(P).id<<endl;
            cout<<"Nama         = "<<info(P).nama<<endl;
            cout<<"Jabatan      = "<<info(P).jabatan<<endl;
            cout<<"Departemen   = "<<info(P).departemen<<endl;
            cout<<"Gaji         = "<<info(P).gaji<<endl;
        }else{
            cout<<"Data tidak ditemukan.";
        }
        break;
    case 9:
        cout<<"ID: "; cin>>x.id;
        P = searchSentinel(&L, x);

        if(P != Nil){
            cout<<"ID           = "<<info(P).id<<endl;
            cout<<"Nama         = "<<info(P).nama<<endl;
            cout<<"Jabatan      = "<<info(P).jabatan<<endl;
            cout<<"Departemen   = "<<info(P).departemen<<endl;
            cout<<"Gaji         = "<<info(P).gaji<<endl;
        }

        break;
        }
    }
    return 0;
}
