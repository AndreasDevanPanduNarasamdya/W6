#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "Mahasiswa.h"
#include "Mahasiswa.c"

int main() 
{
    List1 *myList = NULL;

    // Initialize list with first node
    Initiate(&myList, "John", 85);

    // Add more nodes
    creator_constructor(&myList, "Alice", 90);
    creator_constructor(&myList, "Bob", 75);

    // Print the linked list
    printf("Printing Linked List:\n");
    PrintObject(myList);

    return 0;
}