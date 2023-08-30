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