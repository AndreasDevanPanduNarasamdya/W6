#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "Mahasiswa.h"
#include "Mahasiswa.c"

int main()
{
    List1 *L1;
    List2 L2;
    int tempscore;
    char* tempname;

    creator_constructor(&L1, &tempname, &tempscore);
    PrintObject(&L1);

    return 0;
}