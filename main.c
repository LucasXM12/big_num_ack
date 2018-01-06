#include <stdio.h>
#include <stdlib.h>
#include "big_number.c"

node* ackemann(unsigned char _m, node* _n) {
    if (!_m) { //m = 0, n + 1
    	add_val(_n, 1);

        return _n;
    } else if (_m > 0 && is_zero(_n)) { //m > 0 and n = 0, A(m - 1, 1)
    	clear_var(*_n);
    	add_val(_n, 1);

    	return ackemann(_m - 1, _n);
    } else { //m > 0 and n > 0, A(m - 1, A(m, n - 1))
    	sub_val(_n, 1);
    	return ackemann(_m - 1, ackemann(_m, _n));
    }
}

int main()
{
    node num;
    clear_var(num);

    for (int c = 0; c < 16; c++)
        add_val(&num, 255);

    sub_val(&num, 255);

    print_list(&num);

    return 0;
}
