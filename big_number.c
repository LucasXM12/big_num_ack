#include "big_number.h"

void print_list(node* dig_list) { //Receive the last node
    foreach_back(dig_list->digs)
        print2n(item);

    if (dig_list->previous)
        print_list(dig_list->previous);
}

void add_val(node* dig_list, unsigned char val) { //Adds the value in the list (receive the first node)
    short aux;

    for (short i = 0, item = dig_list->digs[i]; i < SIZE / 2; item = dig_list->digs[++i]) {
        aux = item + val;
        dig_list->digs[i] = aux;
        val = aux >> 8;

        if (!val)
            break;
    }

    if (val) {
        if (dig_list->next) {
            add_val(dig_list->next, val);
        } else {
            node* newNode = (node*) malloc(sizeof(node));
            clear_list(*newNode);

            dig_list->next = newNode;
            newNode->previous = dig_list;
            newNode->next = 0;

            add_val(dig_list->next, val);
        }
    }
}
