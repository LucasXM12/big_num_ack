#ifndef BIG_NUMBER_H
#define BIG_NUMBER_H

//Constants:
#define SIZE 2032 //Number of digits (nibble on base 16)

//Macros
#define print2n(dig) printf("%X%X", dig >> 4, dig & 0xf) //Print a char as two separate nibble
#define arraylen(array) sizeof(array) / sizeof(*array) - 1 //Calculate the array size
#define foreach(array) for (short i = arraylen(array), item = array[i]; i >= 0; item = array[--i]) //Array for each

typedef struct node_s {
    struct node_s* previous;
    unsigned char digs[SIZE / 2];
    struct node_s* next;
} node;

void add(node);
void print_list(node);

#endif // BIG_NUMBER_H_
