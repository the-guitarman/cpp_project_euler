#ifndef calculator_h
#define calculator_h

class Calculator {
    
public:
    const int border;
    
    Calculator(int b);
    
    int sum_of_all_multiples_of_3_and_5_under_border();
    
protected:
    bool is_multiple_of_3(int x) {
        return x % 3 == 0;
    }
    
    bool is_multiple_of_5(int x) {
        return x % 5 == 0;
    }
};

#endif /* calculator_h */
