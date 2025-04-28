class Factorial {
    public:
        static unsigned long long GetFactorial(int input);
    };
    src/Factorial.cpp
    #include "Factorial.h"
    unsigned long long Factorial::GetFactorial(int input) 
    {
        unsigned long long factorial = 1;
        for(int i = 1; i <= input; ++i)
        {
            factorial *= i;
        }
        return factorial;
    }