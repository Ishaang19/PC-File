#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    float s, r, l, b, h, area, pi = 3.14;
    printf("\n");
    printf("1. Square\n");
    printf("2. Circle\n");
    printf("3. Rectangle\n");
    printf("4. Cone\n");
    printf("5. Cylinder\n");
    printf("Enter your choice ", n);
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("Enter the side of the square: ");
        scanf("%f", &s);
        area = pow(s, 2);
        break;

    case 2:
        printf("Enter the radius of the circle: ");
        scanf("%f", &r);
        area = 3.14 * pow(r, 2);
        break;

    case 3:
        printf("Enter the length of the rectangle: ");
        scanf("%f", &l);
        printf("Enter the width of the rectangle: ");
        scanf("%f", &b);
        area = l * b;
        break;

    case 4:
        printf("Enter the radius of the cone: ");
        scanf("%f", &r);
        printf("Enter the slant height of the cone: ");
        scanf("%f", &l);
        area = 3.14 * r * l + 3.14 * pow(r, 2);
        break;

    case 5:
        printf("Enter the radius of the cylinder: ");
        scanf("%f", &r);
        printf("Enter the height of the cylinder: ");
        scanf("%f", &h);
        area = 2 * (3.14 * pow(r, 2)) + 3.14 * r * h;
        break;

    default:
        printf("Invalid Input\n");
        break;
    }
    printf("Area: %f\n", area);
    return 0;
}