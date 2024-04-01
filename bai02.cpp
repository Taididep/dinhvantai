#include <stdio.h>
#include <math.h>

int checkSoChinhPhuong(int num) {
    int squareRoot = sqrt(num);
    return (squareRoot * squareRoot == num);
}

void xuatSoChinhPhuong(int n) {
    int dem = 0;
    printf("Cac so chinh phuong nho hon %d la: ", n);
    for (int i = 1; i < n; i++) {
        if (checkSoChinhPhuong(i)) {
            printf("%d ", i);
            dem++;
        }
    }
    printf("\nTong so chinh phuong la: %d\n", dem);
}

int main() {
    int n = 50;

    xuatSoChinhPhuong(n);
    
    return 0;
}

