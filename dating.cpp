// Copyright (2025) Aaron Rivelino All rights reserved.
// Date: March 25 2025
// A dating program using OR logic gates with an if statements
// If the user is either handsome or rich
// they can date the grandparents granddaughter

#include <iostream>
#include <string>

int main() {
    // Initial explanation to the user
    std::cout << "\nRequirements to date our granddaughter\n";

    // Declare user wealth and handsomeness as a string
    std::string userWealth, userHandsomeness;

    // Get user wealth "y" or "n"
    std::cout << "\nAre you rich (y/n): ";
    std::cin >> userWealth;

    // Get user handsomeness "y" or "n"
    std::cout << "Are you handsome (y/n): ";
    std::cin >> userHandsomeness;

    // If not statements to validate the user input
    // "y" or "n" for Wealth and Handsomeness
    if (userWealth != "y" && userWealth != "n") {
        std::cout << "\n" << userWealth <<
        ", is not 'y' or 'n'.\n";
    }

    if (userHandsomeness != "y" && userHandsomeness != "n") {
        std::cout << "\n" << userHandsomeness <<
    ", is not 'y' or 'n'.\n";
    }

    // If statement if any of the answers is "y" or true
    if (userWealth == "y" || userHandsomeness == "y") {
        std::cout << "You can date our granddaughter.\n";

    // Else statement if both of the answers are "n" or false
    } else {
        std::cout << "You cannot date her.\n";
    }
}
