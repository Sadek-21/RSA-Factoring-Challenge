#include <stdio.h>
#include <stdlib.h>

void factorize(int n);

int main(int argc, char *argv[]) {
    FILE *file;
    int num;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <file>\n", argv[0]);
        return EXIT_FAILURE;
    }

    file = fopen(argv[1], "r");
    if (!file) {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        return EXIT_FAILURE;
    }

    while (fscanf(file, "%d", &num) != EOF) {
        factorize(num);
    }

    fclose(file);
    return EXIT_SUCCESS;
}


void factorize(int n) {
    int i, p, q;
    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            p = i;
            q = n / i;
            printf("%d=%d*%d\n", n, p, q);
            return;
        }
    }
    printf("%d=%d*%d\n", n, n, 1);
}

