//
// Created by user on 9/4/23.
//
void cond(short a, short *p) {
    if (a && *p < a)
        *p = a;
}

void cond_goto(short a, short *p) {
    if (a == 0) goto L1;
    if (a - *p <= 0) goto L1;
    *p = a;
    L1: return;
}