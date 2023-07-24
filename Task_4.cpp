// 4. Make a Rock Paper Sessior game in C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string moves[3] = {"Rock", "Paper", "Scissors"};
    printf("\n===== ROCK === PAPER === SCISSORS =====\n\n");
    printf("  First player to score 3 points wins  \n");
    printf("  Enter: 1. for Rock\n");
    printf("         2. for Paper\n");
    printf("         3. for Scissors\n");
    printf("\n=======================================\n\n");
    int playerScore = 0, randomScore = 0;
    srand((unsigned int)time(NULL));

    for (int i = 0; playerScore < 3 && randomScore < 3; i++)
    {
        int randomMove = (rand() % 3) + 1;
        int playerMove;
        printf("\nRound %02d: Enter your move -> ", i + 1);
        cin >> playerMove;
        printf("You chose        -> %s\n", moves[playerMove - 1].c_str());
        printf("Randomizer chose -> %s\n", moves[randomMove - 1].c_str());
        int result = (playerMove - randomMove + 3) % 3;
        if (result == 1)
        {
            playerScore += 1;
        }
        if (result == 2)
        {
            randomScore += 1;
        }
        printf("Score -> %d : %d\n", playerScore, randomScore);
    }
    if (playerScore == 3)
    {
        printf("\nYOU WON THE GAME");
    }
    else
    {
        printf("\nYOU LOST THE GAME");
    }

    printf("\n\n");
    return 0;
}