#include "big_number.h"

void print_list(const node* _node) { //Prints from received node in reverse order
    foreach_back(_node->digs)
        print2nibble(item);

    if (_node->previous)
        print_list(_node->previous);
}

void add_val(node* _node, unsigned char _val) { //Adds the value in the list starting with the received node
    foreach (_node->digs) {
        unsigned short sum = item + _val;
        _node->digs[i] = sum;
        _val = sum >> 8;

        if (!_val)
            break;
    }

    if(_val) {
        if (_node->next) {
            add_val(_node->next, _val);
        } else {
            node* newNode = (node*) malloc(sizeof(node));
            clear_var(*newNode);

            _node->next = newNode;
            newNode->previous = _node;

            add_val(newNode, _val);
        }
    }
}

void sub_val(node* _node, unsigned char _val) {
    foreach(_node->digs) {
        if (item * power(256, i)  >= _val) {
            _node->digs[i] = (item * power(256, i) - _val) / powers(256, i);
            return;
        }

        _val -= item;
        _node->digs[i] = 0;
    }
}

char is_zero(node* _node) {
    foreach (_node->digs)
        if (item)
            return 0;

    if (_node->next)
        return is_zero(_node->next);

    return 1;
}


