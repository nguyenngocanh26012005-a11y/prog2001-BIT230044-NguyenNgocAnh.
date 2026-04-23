//
// Created by Ngoc Anh on 24/04/2026.
//
#include <stdio.h>

typedef struct {
    char name[50];
    float price;
} Product;

int main() {
    FILE *f;

    Product p[3] = {
        {"Laptop", 1500},
        {"Phone", 800},
        {"Tablet", 600}
    };

    Product p2[3];

    // Ghi file
    f = fopen("product.dat", "wb");
    fwrite(p, sizeof(Product), 3, f);
    fclose(f);

    // Đọc file
    f = fopen("product.dat", "rb");
    fread(p2, sizeof(Product), 3, f);
    fclose(f);

    // In kiểm tra
    printf("Products read from file:\n");
    for(int i = 0; i < 3; i++) {
        printf("%s - %.2f\n", p2[i].name, p2[i].price);
    }

    return 0;
}