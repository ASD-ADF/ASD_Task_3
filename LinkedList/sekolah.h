#ifndef SEKOLAH_H_INCLUDED
#define SEKOLAH_H_INCLUDED

#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

#define nil NULL
#define info(p) (p)-> info
#define next(p) (p)-> next
#define first(l) ((l).first)

address allocate(infotype x);
void data_pelajar(infotype *x);
void view (list *l);

#endif // SEKOLAH_H_INCLUDED
