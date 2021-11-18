#include <iostream>
#include "banker.h"
#include "Player.h"
int main()
{
    //a banker and player are created from the banker and player class
    player player1;
    banker banker1;
   
    int points = 0;

    std::cout << "******Welcome to DesertLand Resort!****** " << std::endl;

    for (int i = 0; i < 5;) {  //game rounds are set to 5 in a for loop
        std::cout << "Press 'h' to see the rules of the card game" << std::endl; //random
        std::cout << "Press 's' to play the " << i + 1 << " round of the simple card game" << std::endl; //5
        std::cout << "Press 'q' to quit" << std::endl; //1
        std::cout << "Input your choice" << std::endl;

        char choice;
        std::cin >> choice; //user input is taken 
        std::cout << "***********************************************************************************\n";

        if (choice == 'h') {
            std::cout << "RULES: \n 1. A player can play against the banker only. \n 2. Both the player and the banker receive a card from the card deck \n 3. The person with the highest card value will be the WINNER. \n 4. Each round has a fixed bet of $10 points. \n NOTE: In the event of a tie, the banker is declared as winner\n----------------------------------------------------------------\n" << std::endl;
        }

        else if (choice == 's') {
            std::cout << "Starting game! \n\nShuffling and Dealing cards:\n" << std::endl;

            int playerCard = player1.randomPlayer(0); //for the player, the randomPlayer function is called from the player class
            std::cout << "*Player card: " << playerCard << "*\n";

            int bankerCard = banker1.randomBanker(0); //for the banker, the randomBanker function is called from the banker class
            std::cout << "*Banker card: " << bankerCard << "*\n";
            i++;

            if (playerCard > bankerCard) {
                 player1.setPlayerWins(); //setPlayerWins function increments the player's wins count by 1 anytime the player wins a round
                 player1.increasePlayerPoints(points); ////increasePlayerPoints is called only when a player wins a round and it adds 10 to their points. its a function from the player class
                 std::cout << "*You win this round*\n**********************************************************************************" << std::endl;
                
            }
            else {
                banker1.setbankerWins();//setBankerWins function increments the banker's wins count by 1 anytime the banker wins.
                player1.decreasePlayerPoints(points);//this function is called from the player class only when a player loses.
                std::cout << "*Banker wins this round*\n**********************************************************************************\n" << std::endl;
                
            }
        }
        else if (choice == 'q') {
            exit(1);
        }


    }
    int c = 'a';
    while (c == 'a') {
        if (player1.getplayerWins() > banker1.getbankerWins()) { //player and banker's wins are compared to see who has more
            std::cout << "***Congratulations! You Win!***\n" << std::endl;

        }
        else {
            std::cout << "---The banker wins. Try again next time :( ---\n" << std::endl;
        }
        std::cout << "***********************************" << std::endl;
        std::cout << "*Thank you for playing !          *" << std::endl;
        std::cout << "*Your total points are:" << player1.getplayerPoints() << "        *" << std::endl;

        std::cout << "*press q and enter to exit        *" << std::endl;
        std::cout << "***********************************" << std::endl;
        std::cin >> c;

    }
}

