#include <iostream>
int main()
{
    int sum = 0, val = 10;
    // keep executing the while as long as val is more than or equal to 1
    while(val >= 1){
        sum += val;     // assigns sum + val to sum
        --val;          // miuns 1 to val;
    }
    std::cout << "Sum of 1 to 10 inclusive is "
              << sum << std::endl;
    return 0;
}
