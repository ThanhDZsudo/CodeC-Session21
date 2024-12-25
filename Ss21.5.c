#include <stdio.h>

int main() {
    FILE *f;
    int lineNumber;
    char line[100];
    printf("Nhap so dong vao tep: ");
    scanf("%d", &lineNumber);
    getchar();
    if ((f = fopen("bt05.txt", "w")) == NULL) {
        printf("Khong the tao tep bt05.txt \n");
    }
    for (int i=0; i<lineNumber; i++){
        printf("Nhap noi dung dong thu %d: ", i+1);
        fgets(line, sizeof(line), stdin);
        fprintf(f, "%s", line);
    }
    fclose(f);
    if ((f = fopen("bt05.txt", "r")) == NULL) {
        printf("Khong the mo tep bt05.txt de doc.\n");
    }
    printf("\nNoi dung trong tep bt05.txt:\n");
    while (fgets(line, sizeof(line), f)!=NULL){
        printf("%s", line);
    }
    fclose(f);
    return 0;
}

