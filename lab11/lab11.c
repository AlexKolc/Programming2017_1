#include "rectangle.c"
#include <stdio.h>

int main() {
    float x, y;
    Point point1, point2, point3, point4;
    Rectangle rectangle;
    printf("1. Rectangle\n");
    printf("   Input coordinate 1: ");
    scanf("%f %f", &x, &y);
    point1 = CreatePoint(x, y);
    printf("   Input coordinate 2: ");
    scanf("%f %f", &x, &y);
    point2 = CreatePoint(x, y);
    printf("   Input coordinate 3: ");
    scanf("%f %f", &x, &y);
    point3 = CreatePoint(x, y);
    printf("   Input coordinate 4: ");
    scanf("%f %f", &x, &y);
    point4 = CreatePoint(x, y);

    rectangle = CreateRectangle(point1, point2, point3, point4);
    printf("Perimeter of rectangle: %.5f\n", FindPerimeter(rectangle));
    printf("Square of rectangle: %.5f", FindSquare(rectangle));
    return 0;
}

