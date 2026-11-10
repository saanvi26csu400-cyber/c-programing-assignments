#include <stdio.h>

int solveMeFirst(int a, int b) {
    return a + b;
}

int main() {
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    int result = solveMeFirst(a, b);

    printf("%d\n", result);

    return 0;
}
