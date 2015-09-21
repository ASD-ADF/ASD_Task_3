#include "list.h"


using namespace std;

int main()
{
    address p,prec,q = nil;
    infotype x;
    list l;
    string tes;
    int pil,pil1;

    createlist(&l);
    do
    {
        system("cls");
        cout<<"1. Input Data "<<endl;
        cout<<"2. View Data "<<endl;
        cout<<"3. Delete Data "<<endl;
        cout<<"4. Serach Data "<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"\nYour Choice : ";
        cin>>pil;
        switch (pil)
        {
        case 1:
            balik:
            system("cls");
            cout<<"Masukkan ID (MAX 3 digit): ";
            cin>>x.id;
            tes = x.id;
            if (tes.length() > 3)
            {
                cout<<"Panjang Karakter tidak boleh lebih dari 3";
                getch();
                goto balik;
            }
            cout<<"Masukkan Nama : ";
            cin>>x.nama;
            cout<<"Masukkan Alamat : ";
            cin>>x.alamat;
            cout<<"Masukkan Jabatan : ";
            cin>>x.jab;
            cout<<"Masukkan Hobi : ";
            cin>>x.hobi;
            system("cls");
            cout<<"1. Insert First"<<endl;
            cout<<"2. Insert Last"<<endl;
            cout<<"3. Insert After"<<endl;
            cout<<"\nYour Choice : ";
            cin>>pil1;
            switch (pil1)
            {
            case 1:
                p = alokasi(x);
                insertfirst(&l,p);
                break;
            case 2:
                p = alokasi(x);
                insertlast(&l,p);
                break;
            case 3:
                system("cls");
                p = alokasi(x);
                cout<<"Masukkan ID After : ";
                cin>>x.id;
                prec = searchelement(l,x);
                insertafter(&l,p,prec);
                break;
            default :
                cout<<"\nInvalid Input";
                getch();
                break;
            }
            break;
        case 2:
            system("cls");
            viewlist(l);
            getch();
            break;
        case 3:
            system("cls");
            cout<<"1. Delete First"<<endl;
            cout<<"2. Delete Last"<<endl;
            cout<<"3. Delete After"<<endl;
            cout<<"\nYour Choice : ";
            cin>>pil1;
            switch (pil1)
            {
            case 1:
                system("cls");
                deletefirst(&l,&p);
                cout<<"Delete Success";
                getch();
                break;
            case 2:
                system("cls");
                deletelast(&l,&p);
                cout<<"Delete Success";
                getch();
                break;
            case 3:
                system("cls");
                cout<<"Masukkan ID After : ";
                cin>>x.id;
                prec = searchelement(l,x);
                deleteafter(&l,&p,prec);
                cout<<"Delete Success";
                getch();
                break;
            default :
                cout<<"\nInvalid Input";
                getch();
                break;
            }
            break;
        case 4:
            system("cls");
            cout<<"Masukkan ID yang ingin anda cari : ";
            cin>>x.id;
            p = searchelement(l,x);
            cout<<"\nID : "<<info(p).id<<endl;
            cout<<"Nama : "<<info(p).nama<<endl;
            cout<<"Alamat : "<<info(p).alamat<<endl;
            cout<<"Jabatan : "<<info(p).jab<<endl;
            cout<<"Hobi : "<<info(p).hobi<<endl;
            getch();
            break;
        case 5:
            return 0;
            break;
        default:
            system("cls");
            cout<<"invalid Input";
            getch();
            break;
        }
    }
    while (pil != 5);


}
