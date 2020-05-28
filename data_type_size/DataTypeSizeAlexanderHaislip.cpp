//created by Alexander Haislip, May 28th 2020
#include <iostream>
#include <string>

int main()

{

    double amount;
    char letter;
    int number;
    float long_Number;


	std::cout << "A double is stored in " << sizeof(double) << " bytes\n";

    std::cout << "A char is stored in " << sizeof(char) << " bytes\n";

    std::cout << "An int is stored in " << sizeof(int) << " bytes\n";
    
    std::cout << "A float is stored in " << sizeof(float) << " bytes\n";
    
    
    std::cout << "Variable amount is stored in " << sizeof(amount) << " bytes\n";
    
    std::cout << "Variable letter is stored in " << sizeof(letter) << " bytes\n";

    std::cout << "Variable number is stored in " << sizeof(number) << " bytes\n";
               
	std::cout << "Variable long_Number is stored in " << sizeof(long_Number) << " bytes\n";


}
