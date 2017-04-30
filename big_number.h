#include <string.h>

#ifndef BIG_NUMBER_H
#define BIG_NUMBER_H

//Constants:
#define SIZE 4 //Number of digits (nibble on base 16)

//Macros
#define clear_list(list) memset(&list, 0, sizeof(node)) //Clear the list
#define print2n(dig) printf("%X%X", dig >> 4, dig & 0xf) //Print a char as two separate nibble
#define arraylen(array) sizeof(array) / sizeof(*array) - 1 //Calculate the array size
#define foreach(array) for (short i = 0, item = array[i]; i < arraylen(array); item = array[++i]) //Array for each
#define foreach_back(array) for (short i = arraylen(array), item = array[i]; i >= 0; item = array[--i]) //Array for each in the opposite order

typedef struct node_s {
    struct node_s* previous;
    unsigned char digs[SIZE / 2];
    struct node_s* next;
} node;

void print_list(node*);
void add_val(node*, unsigned char);

#endif // BIG_NUMBER_H_
