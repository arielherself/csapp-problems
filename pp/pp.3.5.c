//
// Created by user on 9/3/23.
//
void decode1(long *xp, long *yp, long *zp) {
    register long r8 = *xp;
    register long rcx = *yp;
    register long rax = *zp;
    *yp = r8;
    *zp = rcx;
    *xp = rax;
}