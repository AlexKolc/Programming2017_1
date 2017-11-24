#ifndef LAB11_RECTANGLE_H
#define LAB11_RECTANGLE_H

#include "point.c"

typedef struct {
    Point point1;
    Point point2;
    Point point3;
    Point point4;
} Rectangle;

Rectangle ChangeRectangle(Point, Point, Point, Point);
float FindPerimetr(Rectangle);
float FindSquare(Rectangle);


#endif //RECTANGLE_H
