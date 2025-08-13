#include <stdio.h>

int main() {
    int i;

    // ---------------- FOR LOOP ----------------
    printf("=== FOR LOOP VARIATIONS ===\n");

    // 1. Standard for loop
    for (i = 1; i <= 5; i++) {
        printf("Standard for: %d\n", i);
    }

    // 2. Without initialization in for
    i = 1;
    for ( ; i <= 5; i++) {
        printf("No init for: %d\n", i);
    }

    // 3. Without condition in for (use break inside)
    for (i = 1; ; i++) {
        if (i > 5) break;
        printf("No condition for: %d\n", i);
    }

    // 4. Without increment in for
    for (i = 1; i <= 5; ) {
        printf("No increment for: %d\n", i);
        i++;
    }

    // 5. Without init, condition, increment (infinite style)
    i = 1;
    for (;;) {
        if (i > 5) break;
        printf("Fully empty for: %d\n", i);
        i++;
    }

    // ---------------- WHILE LOOP ----------------
    printf("\n=== WHILE LOOP VARIATIONS ===\n");

    // 1. Standard while loop
    i = 1;
    while (i <= 5) {
        printf("Standard while: %d\n", i);
        i++;
    }

    // 2. While with break to control termination
    i = 1;
    while (1) { // infinite style
        if (i > 5) break;
        printf("While with break: %d\n", i);
        i++;
    }

    // ---------------- DO-WHILE LOOP ----------------
    printf("\n=== DO-WHILE LOOP VARIATIONS ===\n");

    // 1. Standard do-while loop
    i = 1;
    do {
        printf("Standard do-while: %d\n", i);
        i++;
    } while (i <= 5);

    // 2. Do-while that runs at least once even if condition false
    i = 10; // condition will fail, but body runs once
    do {
        printf("Do-while runs once even if false: %d\n", i);
        i++;
    } while (i <= 5);

    return 0;
}
