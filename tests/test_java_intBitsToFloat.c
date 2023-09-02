//
// Created by user on 9/1/23.
//
#include <stdio.h>
#include <stdint.h>

float intBitsToFloat(unsigned v) {
    /*
     * from https://github.com/openjdk/jdk/blob/cf02cf31da88a5f2934e7195ae5f8a2670f659e3/src/java.base/share/native/libjava/Float.c#L35
     */
    union {
        unsigned i;
        float f;
    } u;
    u.i = v;
    return u.f;
}

void test() {
    union {
        int i;
        float f;
    } u;
    u.i = 18293869298379287;
    printf("%lf\n", u.f);
}

void show_bits(unsigned char *p, size_t size) {
    int i;
    for (i = size - 1; i >= 0; --i) {
        printf(" %.8b", p[i]);
    }
    printf("\n");
}

int main() {
    unsigned prev = 0b01001010010101100100010100000100;
    float result = intBitsToFloat(prev);
    printf("%lf\n", result);
}