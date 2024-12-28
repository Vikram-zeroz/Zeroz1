#include <stdio.h>
#include <math.h>

int area_triangle(int *base, int *height) {
    return 0.5 * (*base) * (*height);
}

int main() {
    int base, height, area;

    printf("Enter base and height of triangle: ");
    scanf("%d %d", &base, &height);

    area = area_triangle(&base, &height);

    printf("The area of triangle is %d\n", area);

    return 0;
}
