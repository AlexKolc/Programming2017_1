#include <stdio.h>
#include <math.h>

int main() {
    float alpha;
    printf("Input alpha: ");
    scanf("%f", &alpha);
    float z1 =  (1 - 2*pow(sin(alpha), 2.))/(1 + sin(2 * alpha));
    float z2 = (1 - tan(alpha))/(1 + tan(alpha));
    printf("z1 = %f\nz2 = %f", z1, z2);
    return 0;
}
