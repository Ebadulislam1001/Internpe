// 2.3 Write a program to print the area and perimeter of a rectangle.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double lx, bx;
    double area, perimeter;
    cout << "\nEnter the dimensions of the rectangle\n";
    cout << "Length  = ";
    cin >> lx;
    cout << "Breadth = ";
    cin >> bx;
    area = lx * bx;
    perimeter = 2 * (lx + bx);
    cout << "\nArea      = " << area;
    cout << "\nPerimeter = " << perimeter;
    printf("\n\n");
    return 0;
}