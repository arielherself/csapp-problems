//
// Created by user on 9/8/23.
//
int var_prod_ele(long n, int A[n][n], int B[n][n], long i, long k) {
    long j;
    int result = 0;

    for (j = 0; j < n; ++j) {
        result += A[i][j] * B[j][k];
    }
    return result;
}