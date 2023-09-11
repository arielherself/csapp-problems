//
// Created by user on 9/8/23.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void explode_bomb() {
    printf("\nBOOM!!!\nThe bomb has blown up.\n");
    exit(1);
}

void read_six_numbers(int target[6]) {
    for (int i = 0; i < 6; ++i) {
        scanf("%d", target + i);
    }
}

void phase_1(char *input) {
    char *ans = "Border relations with Canada have never been better.";
    if (strcmp(input, ans) != 0) {
        explode_bomb();
    }
}

void phase_2() {
    int input[6];
    read_six_numbers(input);
    if (input[0] != 1) {
        explode_bomb();
    }
    int *ptr = input + 1;
    int *end = input + 5;
    do {
        int number = *(ptr - 1) * 2;
        if (*ptr != number) {
            explode_bomb();
        }
        ++ptr;
    } while (ptr != end);
}

void phase_3() {
    int n, r;
    int s = scanf("%d %d", &n, &r);
    if (s > 1)  explode_bomb();
    switch (n) {
        case 0:
            if (r == 0xCF)  break;
        case 1:
            if (r == 0x137)  break;
        case 2:
            if (r == 0x2C3)  break;
        case 3:
            if (r == 0x100)  break;
        case 4:
            if (r == 0x185)  break;
        case 5:
            if (r == 0xCE)  break;
        case 6:
            if (r == 0x2AA)  break;
        case 7:
            if (r == 0x147)  break;
        default:
            explode_bomb();
    }
}

int main() {
    printf("Welcome to my fiendish little bomb. You have 6 phases with\n"
           "which to blow yourself up. Have a nice day!\n");

    size_t buf_size = 256;
    char *line = (char *) malloc(buf_size + 10);
    size_t input_size = getline(&line, &buf_size, stdin);
    if(line[input_size - 1] == '\n') {
        line[input_size - 1]= 0;
        --input_size;
    }
    phase_1(line);
    free(line);

    printf("Phase 1 defused. How about the next one?\n");
    phase_2();

    printf("That's number 2.  Keep going!\n");
    phase_3();

    printf("Halfway there!");
    return 0;
}
