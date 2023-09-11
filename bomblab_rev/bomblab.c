//
// Created by user on 9/8/23.
// This code aims to mimic the essential logic of "bomb-lab". Some components like the detection of Ctrl-C are not implemented.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Hex decoder Python helper:
 *     decoder = lambda s : bytes.fromhex(''.join(s.split(' '))).decode()
 */

void explode_bomb() {
    printf("\nBOOM!!!\nThe bomb has blown up.\n");
    exit(1);
}

void read_six_numbers(int target[6]) {
    for (int i = 0; i < 6; ++i) {
        scanf("%d", target + i);
    }
}

int func4(int edi, int esi, int edx) {
    int ecx = ((edx - esi) + ((edx - esi >> 31) & 1) >> 1) + esi;
    if (ecx == edi) {
        return 0;
    } else if (ecx < edi) {
        return 2 * (unsigned) func4(edi, ecx + 1, edx) + 1;
    } else {
        return 2 *  func4(edi, esi, ecx - 1);
    }
}

/**
  * Constant
  * 0x402400 42 6f 72 64 65 72 20 72
  *          65 6c 61 74 69 6f 6e 73
  *          20 77 69 74 68 20 43 61
  *          6e 61 64 61 20 68 61 76
  *          65 20 6e 65 76 65 72 20
  *          62 65 65 6e 20 62 65 74
  *          74 65 72 2e
  */
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
    if (s <= 1)  explode_bomb();
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

void phase_4() {
    int i1, i2;
    int s = scanf("%d %d", &i1, &i2);
    if (s != 2)  explode_bomb();
    if (i1 > 14)  explode_bomb();
    if (func4(i1, 0, 14) != 0)  explode_bomb();
    if (i2 != 0)  explode_bomb();
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

    printf("Halfway there!\n");
    phase_4();

    printf("So you got that one.  Try this one.\n");
    return 0;
}
