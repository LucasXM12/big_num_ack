#include <stdio.h>
#include <stdlib.h>
#include "big_number.c"

int main()
{
    node num1, num2;

    for (int i = 0; i < SIZE / 2; i++) {
        num1.digs[i] = 17;
        num2.digs[i] = ((i + 1) << 4) + i;
    }

    num1.digs[0] = 0;
    num2.digs[SIZE / 2 - 1] = 255;

    num1.previous = 0;
    num1.next = &num2;

    num2.previous = &num1;
    num2.next = 0;

    print_list(num2);

    return 0;
}
