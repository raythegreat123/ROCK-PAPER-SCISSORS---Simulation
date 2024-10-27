/*
 This is a Rock Paper Scissors Game
 By Ray, a beginner C++ Developer!
 Please feel free to fix any bugs you find
 Or even improve it!

 If you want your improvement to be implemented
 Feel free to let me know through my email:
 raymurimi13@gmail.com

 IGNORE THIS:
  Cxd = !kdx3#jdss&d23s
*/

#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
    char player;
    char computer;

    player = getUserChoice();

    std::cout << "Your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "The Computer's choice: ";
    showChoice(computer);

    chooseWinner(player, computer);

    int end;
    std::cin >> end;

    return 0;
}

char getUserChoice(){
    char player; 

    do
    {
        /* This is the menu that the player will see */

        std::cout << "*******************************\n"; 
        std::cout << "*     Rock-Paper- Scissors    *\n";
        std::cout << "* Choose one of the following *\n";
        std::cout << "*******************************\n";
        std::cout << "*       'r' for rock          *\n";
        std::cout << "*       'p' for paper         *\n";
        std::cout << "*       's' for scissors      *\n";
        std::cout << "*******************************\n";
        std::cout << "    I wish you luck bruv!\n\n";

        std::cin >> player;

    } while (player != 'r' && player != 'p' && player != 's');
    
    return player;
}

char getComputerChoice(){ 
    srand(time(0));
    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1:
        return 'r';

    case 2:
        return 'p';

    case 3:
        return 's';
    
    default:
        break;
    }

    return 0;
}

void showChoice(char choice){
    switch (choice)
    {
    case 'r':
        std::cout << "Rock\n";
        break;

    case 'p':
        std::cout << "Paper\n";
        break;

    case 's':
        std::cout << "Scissors\n";
        break;
    
    default:
        break;
    }
}

void chooseWinner(char player, char computer){
    switch (player)
    {
    case 'r':
        if(computer == 'r'){
            std::cout << "It's a tie!\n\n";
        } else if (computer == 'p') {
            std::cout << "The Computer is the winner of this round!\n\n";
        } else if (computer == 's') {
            std::cout << "The Player is the winner of this round!\n\n";
        }
        break;

    case 'p':
        if(computer == 'r'){
            std::cout << "The Player is the winner of this round!\n\n";
        } else if (computer == 'p') {
            std::cout << "It's a tie!\n\n";
        } else if (computer == 's') {
            std::cout << "The Computer is the winner of this round!\n\n";
        }
        break;

    case 's':
        if(computer == 'r'){
            std::cout << "The Computer is the winner of this round!\n\n";
        } else if (computer == 'p') {
            std::cout << "The Player is the winner of this round!\n\n";
        } else if (computer == 's') {
            std::cout << "It's a tie!\n\n";
        }
        break;
    
    default:
        std::cout << "[VERY RARE] Invalid move(s)\n\n";
        break;
    }
}
