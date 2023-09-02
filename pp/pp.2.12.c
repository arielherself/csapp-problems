//
// Created by user on 8/30/23.
//

#include "../include/common.h"

int least_significant_byte(int x) {
    return x & 0xff;
}

int all_but_least_significant_byte_complemented(int x) {
    return x & 0xff | ~x & ~0xff;
}

int least_significant_byte_set_to_one(int x) {
    return x & ~0xff | 0xff;
}

int main() {
    int x = 0x87654321;
    show_bytes(&x, 4);
    int a;
    a = least_significant_byte(x);
    show_bytes(&a, 4);
    a = all_but_least_significant_byte_complemented(x);
    show_bytes(&a, 4);
    a = least_significant_byte_set_to_one(x);
    show_bytes(&a, 4);
    return 0;
}
