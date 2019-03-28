#include <iostream>
#include "calculator.h"

int main(int argc, const char * argv[]) {
    Calculator calc(1000);
    
    int result = calc.sum_of_all_multiples_of_3_and_5_under_border();
    
    std::cout << "The sum of all multiples of 3 and 5 under 1000 is " << result << "\n";
    return 0;
}
