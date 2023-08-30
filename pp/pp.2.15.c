//
// Created by user on 8/30/23.
//
#include <stdio.h>

int logical_equals(int a, int b) {
    return !(a ^ b);
}

int main() {
    printf("%d %d\n", logical_equals(10, 20), logical_equals(10, 10));
    return 0;
}