#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "Mahasiswa.h"

void Initiate(List1 **L1, char *tempname, int tempscore) 
{
    *L1 = (List1*) malloc(sizeof(List1));
    if (*L1 == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    strcpy((*L1)->Nama, tempname);
    (*L1)->Nilai_UTS_SDA = tempscore;
    (*L1)->Next = (*L1);
    (*L1)->Before = (*L1);
}
void creator_constructor(List1 **L1, char *tempname, int tempscore) 
{
    List1 *templist = (List1*) malloc(sizeof(List1));
    if (templist == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    strcpy(templist->Nama, tempname);
    templist->Nilai_UTS_SDA = tempscore;

    if (*L1 == NULL) {
        *L1 = templist;
        templist->Next = templist;
        templist->Before = templist;
    } else {
        List1 *First = *L1;
        while (First->Next != L1) {
            First = First->Next;
        }
        First->Next = templist;
        templist->Before = First;
        templist->Next = *L1;
        (*L1)->Before = templist;
    }

    printf("New data has been added\n");
}

void destructor(int option, List1 **L1)

//void Get_Set()
{
    
}
void PrintObject(List1 *L1) 
{
    if (L1 == NULL) {
        printf("No data\n");
        return;
    }

    List1 *temp = L1;
    do {
        printf("Name: %s\n", temp->Nama);
        printf("Score: %d\n", temp->Nilai_UTS_SDA);
        temp = temp->Next;
    } while (temp != L1);
}