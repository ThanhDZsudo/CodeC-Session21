#include <stdio.h>

int main() {
    FILE *f;
    char line[100];
    if (fgets(line, sizeof(line), f) != NULL) {
        printf("Dong dau tien trong tep la: %s", line);
    } else {
        printf("Tep bt01.txt rong hoac khong co noi dung hop le\n");
    }
    fclose(f);
    return 0;
}
