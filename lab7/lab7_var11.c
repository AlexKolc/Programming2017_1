#include <stdio.h>
#include <math.h>

typedef enum Days {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATERDAY,
    SUNDAY
} Days;

typedef struct Square {
    float x1, y1;
    float x2, y2;
    float x3, y3;
    float x4, y4;
    float perimetr;
} Square;

typedef struct Bit {
    unsigned short NumLock: 1;
    unsigned short CapsLock: 1;
    unsigned short ScrollLock: 1;
} Bit;
    
static union {
    unsigned short command;
    struct {
        unsigned short NumLock: 1;
        unsigned short CapsLock: 1;
        unsigned short ScrollLock: 1;
    } bits;
};

int main() {
    Days day;
    Square square;
    day = MONDAY;
    printf("1. Number of day = %d\n", day);
    
    square.x1 = 0.; square.y1 = 0.;
    square.x2 = 1.; square.y2 = 0.;
    square.x3 = 1.; square.y3 = 1.;
    square.x4 = 0.; square.y4 = 1.;
    square.perimetr = 4 * sqrt(pow(square.x2 - square.x1, 2.) + pow(square.y2 - square.y1, 2.));
    printf("2. Perimetr of square = %f\n", square.perimetr);
    
    printf("3. Input new command: ");
    scanf("%x", &command);
    printf("   NumLock is %s\n", (bits.NumLock == 1) ? ("ON") : ("OFF"));
    printf("   CapsLock is %s\n", (bits.CapsLock == 1) ? ("ON") : ("OFF"));
    printf("   ScrollLock is %s\n", (bits.ScrollLock == 1) ? ("ON") : ("OFF"));
    return 0;
}