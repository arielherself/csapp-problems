//
// Created by user on 9/7/23.
//
void proc(long a1, long *a1p,
          int a2, int *a2p,
          short a3, short *a3p,
          char a4, char *a4p, int *t, int *u) {
    *a1p += a1;
    *a2p += a2;
    *a3p += a3;
    *a4p += a4;
    ++(*t);
    ++(*u);
}

void proc_without_alignment(long a1, long *a1p,
          long a2, int *a2p,
          long a3, short *a3p,
          long a4, char *a4p, int *t, int *u) {
    *a1p += a1;
    *a2p += a2;
    *a3p += a3;
    *a4p += a4;
    ++(*t);
    ++(*u);
}

int main() {
    long a1 = 1;
    int a2 = 2, t = 0;
    short a3 = 3;
    char a4 = 4;
    proc(1, &a1, 1, &a2, 1, &a3, 1, &a4, &t, &t);
    return 0;
}