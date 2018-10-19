#ifndef HEAD_H
#define HEAD_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct element
{
    /* the dataType of a schedule
        name - string 100 chars
        phone - xxxxx-xxxx
        adress - string 100 chars
        cep - unsigned int
        birthday - dd/mm/aaaa */
    char name[101];
    char phone[12];
    char adress[101];
    unsigned int cep;
    char birth[11];

}Schedule;


typedef struct list
{
    /* we are setting the list struct
    type represent the value that the menu will receve 
    info represent what is the information contains in the schedule
    and the rest represent the struct of the list*/
    int type;
    void *info;
    struct list *next;
    struct list *before;

}DataType;

void *readFile(char *filename);

#endif