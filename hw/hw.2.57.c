//
// Created by user on 9/2/23.
//
#include "../include/common.h"

void show_short(short s) {
    return show_bytes(&s, sizeof(short));
}

void show_long(long l) {
    return show_bytes(&l, sizeof(long));
}

void show_double(double d) {
    return show_bytes(&d, sizeof(double));
}

int main() {
    show_short(123);
    show_long(123);
    show_double(123.0);
    return 0;
}