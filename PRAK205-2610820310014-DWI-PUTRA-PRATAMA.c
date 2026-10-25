#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float perimeter, area;

    scanf("%f %f", &a, &b);

    c = sqrt(b * b - a * a);

    perimeter = a + b + c;
    area = 0.5 * a * c;

    printf("Alas = %.0f cm\n", c);
    printf("Tinggi = %.0f cm\n", a);
    printf("Keliling = %.0f cm\n", perimeter);
    printf("Luas = %.0f cm^2\n", area);

    return 0;
}