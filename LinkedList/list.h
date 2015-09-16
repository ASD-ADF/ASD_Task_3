#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
//Created By Hizas, Hasan, Dhiva, and Elsa

struct mhs
{
    int id;
    string nama;
    string lahir;
    string kelas;
    string telpon;
};
struct node
{
    mhs info;
    node *next;
}*head,*p1,*p2;

char c_menu,c_submenu;

node *allocate();
//Menu
void main_menu();
void insert_menu();
void delete_menu();

//Inputing Data
void inserting(node *pointer);

//Search, used in Insert After and Delete After
node *search_Element_ID(int ID);

//Insert
void insert_first(node *p);
void insert_last(node *p, node *q);
void insert_after(node  *p, node *prec);

//Delete
void delete_first(node *p);
void delete_last(node *p, node *q);
void delete_after(node *p, node *prec);

//View
void view_data(node *p);


#endif // LIST_H_INCLUDED
