#ifndef MAHASISWA_H
#define MAHASISWA_H

typedef struct
{
    char Nama[50];
    int Nilai_UTS_SDA;
    struct List1* Next;
}List1;

typedef struct
{
    char* Nama;
    int Nilai_UTS_SDA;
    struct List2* Next;
}List2;


void creator_constructor();
void destructor();
void Validator();
void Get_Set();
void PrintObject();

#endif