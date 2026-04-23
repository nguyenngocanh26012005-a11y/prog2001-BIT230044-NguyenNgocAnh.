#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fin, *fout;
    char ch;

    // Tạo file input nếu chưa có
    fin = fopen("input.txt", "w");
    fprintf(fin, "Hello world abc xyz 123");
    fclose(fin);

    // Mở lại để đọc
    fin = fopen("input.txt", "r");
    fout = fopen("output.txt", "w");

    if (fin == NULL || fout == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(fin)) != EOF) {
        if (islower(ch)) {
            ch = toupper(ch);
        }
        fputc(ch, fout);
    }

    fclose(fin);
    fclose(fout);

    printf("Done! Check output.txt\n");

    return 0;
}