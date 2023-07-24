// 2.1 Write a  program to print the area and perimeter of a circle.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double pi = 2 * acos(0.0);
    double radius, perimeter, area;
    while (true)
    {
        printf("\nEnter the radius (or -1 to exit) : ");
        cin >> radius;
        if (radius < 0)
            break;
        perimeter = 2 * pi * radius;
        area = pi * radius * radius;
        printf("Perimeter = %.14f\n", perimeter);
        printf("Area      = %.14f\n", area);
    }
    printf("\n\n");
    return 0;
}