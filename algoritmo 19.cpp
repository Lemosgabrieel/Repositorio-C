#include <stdio.h>

int main() {
    int i;

    for (i = 100; i <= 200; i++) {
        if (i % 2 != 0) {
            printf("O numero %d é impar\n", i);
        }
    }

    return 0;
}