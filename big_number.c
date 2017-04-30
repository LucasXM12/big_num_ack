#include "big_number.h"

void print_list(node dig_list) { //Receive the last node
    foreach(dig_list.digs)
        print2n(item);

    if (dig_list.previous)
        print_list(*dig_list.previous);
}
