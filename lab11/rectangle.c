#include "rectangle.h"
#include <math.h>

Rectangle CreateRectangle(Point p1, Point p2, Point p3, Point p4) {
    Rectangle newRect;
    newRect.point1 = p1;
    newRect.point2 = p2;
    newRect.point3 = p3;
    newRect.point4 = p4;
    return newRect;
}

float FindPerimeter(Rectangle rect) {
    float a, b;
    a = sqrt(pow(rect.point1.x - rect.point2.x, 2.) + pow(rect.point1.y - rect.point2.y, 2.));
    b = sqrt(pow(rect.point2.x - rect.point3.x, 2.) + pow(rect.point2.y - rect.point3.y, 2.));
    return 2 * a + 2 * b;
}

float FindSquare(Rectangle rect) {
    float a, b;
    a = sqrt(pow(rect.point1.x - rect.point2.x, 2.) + pow(rect.point1.y - rect.point2.y, 2.));
    b = sqrt(pow(rect.point2.x - rect.point3.x, 2.) + pow(rect.point2.y - rect.point3.y, 2.));
    return a * b;
}
