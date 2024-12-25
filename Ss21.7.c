#include <stdio.h>

int main() {
    typedef struct {
        char id[20];
        char name[maxNameLength];
        int age;
    } Student;
    void writeToFile(Student *students, int count) {
        FILE *file = fopen(fileName, "w");
        if (file == NULL) {
            perror("Khong the mo file de ghi");
            exit(exitFailure);
        }
        for (int i = 0; i < count; i++) {
            fprintf(file, "%s,%s,%d\n", students[i].id, students[i].name, students[i].age);
        }
        fclose(file);
        printf("\nThong tin sinh vien da duoc luu vao file '%s'.\n", fileName);
	}
    int numStudents;
    printf("Nhap so luong sinh vien: ");
    while (scanf("%d", &numStudents) != 1 || numStudents <= 0) {
        printf("So luong sinh vien phai la so nguyen duong. Vui long nhap lai: ");
        while (getchar() != '\n');
    }
    Student *students = (Student *)malloc(numStudents * sizeof(Student));
    if (students == NULL) {
        perror("Khong the cap phat bo nho");
        exit(exitFailure);
    }
    for (int i = 0; i < numStudents; i++) {
        printf("\nNhap thong tin sinh vien thu %d:\n", i + 1);
        printf("  ID: ");
        scanf("%s", students[i].id);
        printf("  Ho va ten: ");
        getchar();
        fgets(students[i].name, maxNameLength, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0;
        printf("  Tuoi: ");
        while (scanf("%d", &students[i].age) != 1 || students[i].age <= 0) {
            printf("  Tuoi phai la so nguyen duong. Vui long nhap lai: ");
            while (getchar() != '\n');
        }
    }
    writeToFile(students, numStudents);
    free(students);

    return 0;
}

