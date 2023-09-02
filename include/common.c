//
// Created by user on 8/30/23.
//
#include "common.h"

int is_little_indian() {
    int i = 1 << sizeof(int) * 8 - 1;
    if (((unsigned char *)&i)[0] == 0x00) {
        return 1;
    } else {
        return 0;
    }
}

void show_bytes(unsigned char *p, size_t size) {
    int i;
    if (is_little_indian()) {
        for (i = size - 1; i >= 0; --i) {
            printf(" %.2X", p[i]);
        }
    } else {
        for (i = 0; i < size; ++i) {
            printf(" %.2X", p[i]);
        }
    }
    printf("\n");
}

void show_raw_bytes(unsigned char *p, size_t size) {
    int i;
    for (i = 0; i < size; ++i) {
        printf(" %.2X", p[i]);
    }
    printf("\n");
}

void show_bits(unsigned char *p, size_t size) {
    int i;
    if (is_little_indian()) {
        for (i = size - 1; i >= 0; --i) {
            printf(" %.8b", p[i]);
        }
    } else {
        for (i = 0; i < size; ++i) {
            printf(" %.8b", p[i]);
        }
    }
    printf("\n");
}

void show_raw_bits(unsigned char *p, size_t size) {
    int i;
    for (i = 0; i < size; ++i) {
        printf(" %.8b", p[i]);
    }
    printf("\n");
}

void show_bytes_inline(unsigned char *p, size_t size, char *a) {
    int i;
    if (is_little_indian()) {
        for (i = size - 1; i >= 0; --i) {
            sprintf(a + 3 * (size - 1 - i), " %.2X", p[i]);
        }
    } else {
        for (i = 0; i < size; ++i) {
            sprintf(a + 3 * i, " %.2X", p[i]);
        }
    }

    a[3 * size] = 0;
}

int logical_rightshift(int a, unsigned k) {
    return (int)((unsigned) a >> k);
}

void show_int(int i) {
    return show_bytes(&i, sizeof(int));
}

void show_unsigned(unsigned u) {
    return show_bytes(&u, sizeof(unsigned));
}

void show_short(short s) {
    return show_bytes(&s, sizeof(short));
}

void show_long(long l) {
    return show_bytes(&l, sizeof(long));
}

void show_float(float f) {
    return show_bytes(&f, sizeof(float));
}

void show_double(double d) {
    return show_bytes(&d, sizeof(double));
}