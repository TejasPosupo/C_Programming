#include <iostream>
#include <string>

int main() {
    std::string n;

    std::cout << "Enter anything: ";
    std::getline(std::cin, n);
    std::cout << "Your input is " << n << std::endl;

    return 0;
}
