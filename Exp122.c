#include <stdio.h>

int area_triangle(int base, int height) {
    return 0.5 * base * height;
}

int main() {
    int base, height;
    int area;

    printf("Enter base and height: ");
    scanf("%d %d", &base, &height);

    area = area_triangle(base, height);

    printf("The area of the triangle is: %d\n", area);

    return 0;
}
