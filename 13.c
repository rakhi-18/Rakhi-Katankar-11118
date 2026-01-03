// Program demonstrating break and continue
#include <stdio.h>
int main() {
    printf("Using break statement:\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 6) {
            break;
        }
        printf("%d ", i);
    }
    printf("\n");

    printf("Using continue statement:\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 6) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}