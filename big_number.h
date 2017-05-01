#include <string.h>

#ifndef BIG_NUMBER_H
#define BIG_NUMBER_H

//Constants:
#define SIZE 4 //Number of digits (nibble on base 16)

//Macros
#define clear_var(var) memset(&var, 0, sizeof(var)) //Fills the variable with zero
#define array_len(array) sizeof(array) / sizeof(*array) //Calculates the array size
#define print2nibble(dig) printf("%X%X", dig >> 4, dig & 0xf) //Print a char as two separate nibbles
#define foreach(array) for (short i = 0, item = *array; i < array_len(array); item = array[++i]) //Array for each
#define foreach_back(array) for (short i = array_len(array) - 1, item; i >= 0 && ((item = array[i]) || 1); --i) //Array for each in the opposite order

typedef struct node_s {
    struct node_s* previous;
    unsigned char digs[SIZE / 2];
    struct node_s* next;
} node;

typedef struct big_num_s {
    node* first;
    node* last;
} big_num;

void print_list(const node*);
void add_val(node*, unsigned char);

#endif // BIG_NUMBER_H_
