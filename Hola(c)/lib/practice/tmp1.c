#include <stdio.h>

int main(void) {
    FILE *fp;
    int number;

    fp = fopen("no.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    while (!feof(fp)) {
        fscanf(fp, "%d", &number);
        printf("%d\n", number);
    }

    fclose(fp);

    return 0;
}
