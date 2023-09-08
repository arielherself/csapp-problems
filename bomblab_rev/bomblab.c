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
    return 0;
}
