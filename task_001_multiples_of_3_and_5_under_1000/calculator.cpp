#include <stdio.h>
#include "calculator.h"

Calculator::Calculator(int b) : border(b) {
    
}

int Calculator::sum_of_all_multiples_of_3_and_5_under_border() {
    int result = 0;
    
    for (int i = 1; i < border; i++) {
        if (is_multiple_of_3(i) || is_multiple_of_5(i)) {
            result += i;
        }
    }
    
    return result;
}
