#ifndef MAHASISWA_H
#define MAHASISWA_H

typedef struct
{
    char *Nama;
    int Nilai_UTS_SDA;
    struct List *Next;
    struct List1 *Before;
}List1;

typedef struct
{
    char *Nama;
    int Nilai_UTS_SDA;
    struct List2 *Next;
    struct List2 *Before;
}List2;

char alphabet[26] = {"A" "B" "C" "D" "E" "F" "G" "H" "I" "J" "K" "L" "M" "N" "O" "P" "Q" "R" "S" "T" "U" "V" "W" "X" "Y" "Z"};


void creator_constructor();
void destructor();
void Validator();
void Get_Set();
void PrintObject();

#endif