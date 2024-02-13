#include <iostream>

//Write a function charToDecimal() that accepts a character as an argument and returns
//the ASCII value of that character (in base 10). Call your function, passing in the character
//‘a’ and output the returned value

int charToDecimal(char charIn) {
    return int(charIn);
}

int main() {
    std::cout << "Decimal Value of [K]: " << charToDecimal('K') << std::endl;
    std::cout << "Decimal Value of [k]: " << charToDecimal('k') << std::endl;
    std::cout << "Decimal Value of [a]: " << charToDecimal('a') << std::endl;
    std::cout << "Decimal Value of [A]: " << charToDecimal('A') << std::endl;
    std::cout << "Decimal Value of [7]: " << charToDecimal('7') << std::endl;
    return 0;
}
