#include <stdio.h>
#include <math.h>

#define PI 3.14159265

float rectangleArea(float length, float width) {
    return length * width;
}

float triangleArea(float base, float height) {
    return 0.5 * base * height;
}

float circleArea(float radius) {
    return PI * pow(radius, 2);
}

int main() {
    int choice;
    printf("Choose the shape:\n");
    printf("1. Rectangle\n");
    printf("2. Triangle\n");
    printf("3. Circle\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            float length, width;
            printf("Enter the length of the rectangle: ");
            scanf("%f", &length);
            printf("Enter the width of the rectangle: ");
            scanf("%f", &width);
            printf("Area of the rectangle: %.2f\n", rectangleArea(length, width));
            break;
        }
        case 2: {
            float base, height;
            printf("Enter the base of the triangle: ");
            scanf("%f", &base);
            printf("Enter the height of the triangle: ");
            scanf("%f", &height);
            printf("Area of the triangle: %.2f\n", triangleArea(base, height));
            break;
        }
        case 3: {
            float radius;
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            printf("Area of the circle: %.2f\n", circleArea(radius));
            break;
        }
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
