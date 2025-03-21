#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "Mahasiswa.h"

void creator_constructor(List1 **L1, char tempname, int *tempscore)
{
    //Creating a NULL list
    *L1 = (List1*) malloc(sizeof(List1));
    (*L1)->Nama = "what";
    (*L1)->Nilai_UTS_SDA = 90;
    (*L1)->Next = NULL;
}
void destructor()
{

}
void Validator()
{

}
void Get_Set()
{
    
}
void PrintObject(List1 **L1)
{
    printf("%s\n", (*L1)->Nama);
    printf("%d", (*L1)->Nilai_UTS_SDA);
}