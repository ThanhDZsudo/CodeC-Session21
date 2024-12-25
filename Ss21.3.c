#include <stdio.h>

int main() {
    FILE *f;
    char string[100];
    printf("Nhap mot chuoi bat ky de ghi them vao tep: ");
    fgets(string, sizeof(string), stdin);
    fprintf(f, "%s", string);
    fclose(f);
    printf("Da them chuoi vao tep bt01.txt.\n");
    return 0;
}

