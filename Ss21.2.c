#include <stdio.h>

int main() {
    FILE *f;
    char character;
    if ((f = fopen("bt01.txt", "r")) == NULL) {
        printf("Tep bt01.txt khong ton tai hoac khong the mo\n");
        return 1;
    }
    character = fgetc(f);
    if (character != EOF) {
        printf("Ky tu dau tien trong tep la: %c\n", character);
    } else {
        printf("Tep bt01.txt rong\n");
    }
    fclose(f);
    return 0;
}

