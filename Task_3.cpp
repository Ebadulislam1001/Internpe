// 3. Make a Number Guessing  game in C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    srand((unsigned int)time(NULL));
    int number = (rand() % 100) + 1;
    int guess = 0;
    do
    {
        cout << "\nEnter your Guess : ";
        cin >> guess;
        if (guess < number)
            cout << "Your guess is too low\n";
        else if (guess > number)
            cout << "Your guess is too high\n";
        else
            cout << "\nYour guess is right";
    } while (guess != number);

    cout << "\n\n";
    return 0;
}