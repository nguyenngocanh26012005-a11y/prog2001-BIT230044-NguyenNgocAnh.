#include <stdio.h>

int main() {
    FILE *f;

    char name[50];
    int age;

    // Tạo file mẫu để test
    f = fopen("input.txt", "w");
    fprintf(f, "NguyenNgocAnh 20");
    fclose(f);

    // Đọc bằng fscanf
    f = fopen("input.txt", "r");
    if (f == NULL) {
        printf("Cannot open file!\n");
        return 1;
    }

    fscanf(f, "%s %d", name, &age);
    fclose(f);

    printf("Name: %s\nAge: %d\n", name, age);

    return 0;
}