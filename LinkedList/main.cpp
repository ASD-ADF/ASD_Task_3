#include "list.h"

int main()
{
    //
    head = NULL;
    start :
    system("cls");
    main_menu();
    c_menu = _getch();
    system("cls");
    //
    switch (c_menu)
    {
        case '1'    :
        {
            menu1 :
            insert_menu();
            c_submenu = _getch();
            system("cls");
            switch(c_submenu)
            {
                case '1' : insert_first(p1); goto start;
                case '2' : insert_last(p1,p2); goto start;
                case '3' : insert_after(p1,p2); goto start;
                case '4' : goto start;
                default  : goto menu1;
            }
        }
        case '2'    :
        {
            menu2 :
            delete_menu();
            c_submenu = _getch();
            system("cls");
            switch(c_submenu)
            {
                case '1' : delete_first(p1); goto start;
                case '2' : delete_last(p1,p2); goto start;
                case '3' : delete_after(p1,p2); goto start;
                case '4' : goto start;
                default  : goto menu2;
            }
        }
        case '3'    :
        {
            view_data(p1);
            goto start;
        }
        case '4'    :
        {
            break;
        }
        default  : { goto start; }
    }
    cout<<"Exit..."<<endl;
    return 0;
}
