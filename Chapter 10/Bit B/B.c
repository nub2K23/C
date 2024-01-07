// Program to find sum of first 25 natural numbers

#include <stdio.h>

int sum(int);

int main() {
    
    int num = 25, num_sum;
    
    num_sum = sum(num);
    
    printf("Sum is: %d", num_sum);

    return 0;
}

int sum(int n) {
    
    int s;
    
    if (n == 0) {
        return 0;
    } else {
        return  s = n + sum (n - 1);
    }
}