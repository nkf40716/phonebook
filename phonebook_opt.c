#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "phonebook_opt.h"

/* FILL YOUR OWN IMPLEMENTATION HERE! */
entry *findName(char lastName[], entry *pHead)
{
    /* TODO: implement */
    return NULL;
}

entry *append(char lastName[], entry *e)
{
    return NULL;
}

// Optimization By hash
unsigned int BKDRHash(char *str)
{
    unsigned int seed = 131; // 31 131 1313 13131 131313 etc..
    unsigned int hash = 0;

    while (*str) {
        hash = hash * seed + (*str++);
    }

    return (hash & 0x7FFFFFFF);
}

unsigned int _BKDRHash(char lastName[], int hash_table_size)
{

    unsigned int seed = 131;
    unsigned int hash = 0;
    int i = 0;
    while(lastName[i] != '\0')
    {
        hash = hash * seed + lastName[i];
        i++;
    }

    return hash %= hash_table_size;
}