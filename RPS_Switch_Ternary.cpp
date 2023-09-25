#include <iostream>
#include <string>
#include <stdlib.h>
#include <unordered_map>


int main() {

    srand(time(NULL));
    int computer_choice = rand() % 3 + 1;
    int user_choice = 0;

    std::string winner= "";

    std::cout << "======Rock Paper Scissors======\n";
    std::cout << "1) Rock\n";
    std::cout << "2) Paper\n";
    std::cout << "3) Scissors\n";

    std::unordered_map<int, std::string> choice_map({{1, "Rock"}, {2, "Paper"}, {3, "Scissors"}});

    std::cin >> user_choice;

    if (user_choice == computer_choice) {
        std::cout << "Tie!";
        return 0;
    } else { 
        switch (user_choice + computer_choice)
        {
        case 3:
            winner = (user_choice == 2) ? "You" : "Computer";
            break;
        case 4:
            winner = (user_choice == 1) ? "You" : "Computer";
            break;
        case 5:
            winner = (user_choice = 3) ? "You" : "Computer";
        } 
    }

    std::cout << "You chose: " << choice_map.at(user_choice) << std::endl;
    std::cout << "Computer chose: " << choice_map.at(computer_choice) << std::endl;
    std::cout << winner << " Won!\n"; 

    return 0;


}