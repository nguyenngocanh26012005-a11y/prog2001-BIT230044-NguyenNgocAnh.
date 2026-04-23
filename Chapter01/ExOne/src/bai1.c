#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
} Student;

int main() {
    FILE *f;

    Student s1 = {"Nguyen Ngoc Anh", 20};
    Student s2;

    // Ghi file
    f = fopen("student.dat", "wb");
    fwrite(&s1, sizeof(Student), 1, f);
    fclose(f);

    // Đọc file
    f = fopen("student.dat", "rb");
    fread(&s2, sizeof(Student), 1, f);
    fclose(f);

    // Kiểm tra
    printf("Read from file:\n");
    printf("Name: %s\nAge: %d\n", s2.name, s2.age);

    return 0;
}