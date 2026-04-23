//
// Created by Ngoc Anh on 24/04/2026.
//
#include <stdio.h>

int main() {
    FILE *f;
    int num = 999;
    int readNum;

    // Mở file
    f = fopen("data.dat", "wb+");

    // Di chuyển tới vị trí 20 byte
    fseek(f, 20, SEEK_SET);

    // Ghi số
    fwrite(&num, sizeof(int), 1, f);

    // Quay lại vị trí 20 để đọc
    fseek(f, 20, SEEK_SET);

    fread(&readNum, sizeof(int), 1, f);

    printf("Value read: %d\n", readNum);

    // Lấy vị trí con trỏ
    long pos = ftell(f);
    printf("Pointer position: %ld\n", pos);

    fclose(f);

    return 0;
}