//
// Created by user on 8/31/23.
//
#include "../include/common.h"

int tmult_ok(int a, int b) {
    int64_t at = (int64_t) a, bt = (int64_t) b;
    int64_t r = at * bt;
    char ar[26], br[26], rr[26], ao[26], bo[26];
    show_bytes_inline(&a, 4, ao);
    show_bytes_inline(&b, 4, bo);
    show_bytes_inline(&at, 8, ar);
    show_bytes_inline(&bt, 8, br);
    show_bytes_inline(&r, 8, rr);
    printf("tmult_ok:\n  a: %s\n  b: %s\n  a: %s\n  b: %s\n  r: %s\n", ao, bo, ar, br, rr);
    return !!(r >> 31 + ((a >> 31) & (b >> 31)));
}

int main() {
    printf("%d %d\n", tmult_ok(12, 5), tmult_ok(2147483647, 2));
    return 0;
}