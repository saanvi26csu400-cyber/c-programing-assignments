#include <stdio.h>

int main() {
    int n, grade, nextMultiple;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &grade);

        if (grade < 38) {
            printf("%d\n", grade);
        }
        else {
            nextMultiple = ((grade / 5) + 1) * 5;

            if (nextMultiple - grade < 3) {
                printf("%d\n", nextMultiple);
            }
            else {
                printf("%d\n", grade);
            }
        }
    }

    return 0;
}
