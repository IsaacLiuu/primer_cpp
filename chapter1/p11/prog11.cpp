#include <iostream>

int main()
{
    int val_low = 0, val_high = 0;
    std::cout << "Please enter two integer." << std::endl
              << "The prog11 will show you all integer between this two number." << std::endl;
    std::cout << "The lower one is: ";
    std::cin >> val_low;
    std::cout << "The higher one is: ";
    std::cin >> val_high;
    
    std::cout << "The integer between " << val_low << " to " << val_high << " is:" << std::endl;
    int i = val_low;
    while(i <= val_high){
        std::cout << i << std::endl;
        ++i;
    }
    return 0;
}
