#include <stdio.h>

int main() {
    int L, R, K, count;

    scanf("%d %d %d", &L, &R, &K);

    count = (R / K) - ((L - 1) / K);

    printf("%d\n", count);

    return 0;
}
