#include <stdio.h>
#include <stdlib.h>
#include "big_number.c"

int main()
{
    node num;
    clear_var(num);

    big_num bg;

    bg.first = &num;
    bg.last = &num;

    for (int i = 1; i <= 258; i++)
        add_val(&num, 255);

    print_list(num.next);

    return 0;
}
