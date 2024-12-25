#include <stdio.h>

int main() {
    FILE *f;
    char string[100];
    printf("Nhap mot chuoi bat ky: ");
    fgets(string, sizeof(string), stdin);
    if ((f = fopen("bt01.txt", "w")) == NULL) {
        printf("Khong the tao tep.\n");
    } else {
        printf("%s", string);
        fclose(f);
        printf("Da them chuoi vao tep bt01.txt.\n");
    }
    return 0;
}

