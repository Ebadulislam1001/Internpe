// 2.4 Write a  program to print an American flag on the screen.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    printf("\nAmerican Flag\n");
    for (int i = 0; i < 15; i++)
    {
        printf("\n ");
        for (int j = 0; j < 48; j++)
        {
            if (i >= 9 || j >= 12)
            {
                printf("=");
            }
            else if ((i + j) % 2 == 1 || j == 11)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
    }
    printf("\n\n");
    return 0;
}