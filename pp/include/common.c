//
// Created by user on 8/30/23.
//
#include "common.h"

void show_bytes(unsigned char *p, size_t size) {
    int i;
    for (i = size - 1; i >= 0; --i) {
        printf(" %.2X", p[i]);
    }
    printf("\n");
}

void show_bytes_inline(unsigned char *p, size_t size, char *a) {
    int i;
    for (i = size - 1; i >= 0; --i) {
        sprintf(a + 3 * (size - 1 - i), " %.2X", p[i]);
    }
    a[3 * size] = 0;
}