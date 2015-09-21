#include <iostream>
#include "tugas.h"

int main()
{
    char choose_menu;
    List L; element *p; element *prec;
    create_list(&L);
    while (choose_menu != '9')
    {
        system("cls");
        menu();
        choose_menu = _getch();
        system("cls");
        switch(choose_menu)
        {
            case '1' : { insert_first(&L,p); break; }
            case '2' : { insert_after(&L,p,prec); break; }
            case '3' : { insert_last(&L,p); break; }
            case '4' : { delete_first(&L,p); break; }
            case '5' : { delete_after(&L,p,prec); break; }
            case '6' : { delete_last(&L,p); break; }
            case '7' : { view_all(&L); break;}
            case '8' : { search_data(&L); break;}
        }
    }
    cout<<"Terminating Program..."<<endl;
    _getch();
    return 0;
}

