#include <iostream>

/*trying to deal with an input */

int main() {
    int input;
    std::cout << "Enter a number: ";
    std::cin >> input;

    //handling the case when the input is not a number
    if (std::cin.fail()) {
        std::cout << "Invalid input. Please enter a valid number." << std::endl;
        return 1;
    }   

    std::cout << "You entered: " << input << std::endl;
    return 0;
}