#include <stdio.h>

int main() {
    int i;

    // Using a while loop
    printf("Using a while loop:\n");
    i = 1;
    while (i <= 10) {
        if (i == 5) {
            printf("Found 5! Exiting the loop.\n");
            break; // Exit the while loop when i is 5
        }
        printf("%d ", i);
        i++;
    }

    // Using a do-while loop
    printf("\nUsing a do-while loop:\n");
    i = 1;
    do {
        if (i == 8) {
            printf("Found 8! Exiting the loop.\n");
            break; // Exit the do-while loop when i is 8
        }
        printf("%d ", i);
        i++;
    } while (i <= 10);

    // Using a for loop
    printf("Using a for loop:\n");
    for (i = 1; i <= 10; i++) {
        if (i == 3) {
            printf("Found 3! Exiting the loop.\n");
            break; // Exit the for loop when i is 3
        }
        printf("%d ", i);
    }

    return 0;
}
