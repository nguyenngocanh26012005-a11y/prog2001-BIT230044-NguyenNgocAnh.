#include <stdio.h>
#include <direct.h>

int main() {
    FILE *f1, *f2, *fout;
    char ch;

    printf("Current dir: %s\n", _getcwd(NULL, 0));

    // Tạo file1
    f1 = fopen("file1.txt", "w");
    fprintf(f1, "Hello from file1\n");
    fclose(f1);

    // Tạo file2
    f2 = fopen("file2.txt", "w");
    fprintf(f2, "Hello from file2\n");
    fclose(f2);

    // Mở lại để đọc
    f1 = fopen("file1.txt", "r");
    f2 = fopen("file2.txt", "r");
    fout = fopen("merge.txt", "w");

    if (fout == NULL) {
        printf("KHONG TAO DUOC FILE!\n");
        return 1;
    }

    while ((ch = fgetc(f1)) != EOF) {
        fputc(ch, fout);
    }

    while ((ch = fgetc(f2)) != EOF) {
        fputc(ch, fout);
    }

    fclose(f1);
    fclose(f2);
    fclose(fout);

    printf("Da tao merge.txt thanh cong!\n");

    return 0;
}