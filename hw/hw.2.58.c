//
// Created by user on 9/2/23.
//
#include <stdio.h>

int is_little_indian() {
    int i = 1 << sizeof(int) * 8 - 1;
    if (((unsigned char *)&i)[0] == 0x00) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    if (is_little_indian()) {
        printf("Little indian machine detected.\n");
    } else {
        printf("Big indian machine detected.\n");
    }
    return 0;
}