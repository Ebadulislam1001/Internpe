// 2.2 Write a  program that takes three numbers as input to calculate and print the average of the numbers.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "\nEnter the 3 numbers\n";
    cout << "num1 = ";
    cin >> num1;
    cout << "num2 = ";
    cin >> num2;
    cout << "num3 = ";
    cin >> num3;
    double average;
    average = double(num1 + num2 + num3) / 3;
    cout << "average = " << average;
    printf("\n\n");
    return 0;
}