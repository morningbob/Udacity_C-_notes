#include <Factorial.h>

int Factorial(int n)
{
    int result = 1;

    for (int i = n; i > 0; i--) {
        result *= i;
    }

    return result;
}