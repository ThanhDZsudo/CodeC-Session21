#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *targetFile;
    char ch;
    sourceFile = fopen("bt01.txt", "r");
    if (sourceFile == NULL) {
        printf("Khong the mo file bt01.txt de doc.\n");
    }
    targetFile = fopen("bt06.txt", "w");
    if (targetFile == NULL) {
        printf("Khong the tao hoac mo file bt06.txt de ghi.\n");
        fclose(sourceFile);
    }
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, targetFile);
    }
    printf("Da sao chep noi dung tu bt01.txt sang bt06.txt thanh cong.\n");
    fclose(sourceFile);
    fclose(targetFile);

    return 0;
}

