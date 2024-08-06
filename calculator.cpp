#include <iostream>

int main() {

    int choice;
    double fNum, sNum;

    do {
        std::cout << "WELCOME TO CALCULATOR\n";
        std::cout << "Please select an operation (exit -> 0)\n";
        std::cout << "1. Add\n";
        std::cout << "2. Subtract\n";
        std::cout << "3. Multiply\n";
        std::cout << "4. Divide\n";

        std::cin >> choice;

        if(choice == 0) break;
        else if(choice < 0 || choice > 4) {
            std::cout << "Invalid Input\n";
            continue;
        }

        std::cout << "Enter first number: ";
        std::cin >> fNum;
            
        std::cout << "Enter second number: ";
        std::cin >> sNum;

        double result;

        switch(choice) {
            
            case 1:
                result = fNum + sNum;
                break;

            case 2:
                result = fNum - sNum;
                break;

            case 3:
                result = fNum * sNum;
                break;

            case 4:
                if(sNum == 0) {
                    std::cerr << "Cannot Divide by Zero\n";
                    continue;
                }
                result = fNum / sNum;
                break;

            default:
            std::cout << "Unknown error occured.\n"
        }

        std::cout << "Result of the operation is: " << result << "\n";

    } while(choice != 0);

    std::cout << "THANK YOU\n";

    return 0;
}