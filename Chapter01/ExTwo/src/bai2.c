//
// Created by Ngoc Anh on 24/04/2026.
//
#include <stdio.h>

int main() {
    FILE *f;

    int arr[5] = {1, 2, 3, 4, 5};
    int arr2[5];

    // Ghi file
    f = fopen("array.dat", "wb");
    fwrite(arr, sizeof(int), 5, f);
    fclose(f);

    // Đọc file
    f = fopen("array.dat", "rb");
    fread(arr2, sizeof(int), 5, f);
    fclose(f);

    // In ra kiểm tra
    printf("Array read from file:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}