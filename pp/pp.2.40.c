//
// Created by user on 8/31/23.
//
#include <stdio.h>

int times7(int a) {
    return (a << 3) - a;
}

int times30(int a) {
    // 30 = 8 + 16 + 8 - 2
    return (a << 3) + (a << 3) + (a << 4) - (a << 1);
}

int times28(int a) {
    return (a << 5) - (a << 2);
}

int times55(int a) {
    return (a << 6) - (a << 3) - a;
}

int main() {
    printf("%d %d %d %d\n", times7(1), times28(1), times30(1), times55(1));
    return 0;
}