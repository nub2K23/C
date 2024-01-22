// Program to calculate the first n terms of the given series.

#include <stdio.h>

void sumofno(int);
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
<<<<<<< HEAD

    int sum = 0;
    for (int j = 1, i = 1; j <= n; j++, i += 2) {
        sum = sum + (i - (i + 1));
    }

    printf("Sum of the first %d terms: %d\n", n, sum);

=======
    sumofno(n);
>>>>>>> ab6941e46a92a917f7b03ad09515f16c27d70aae
    return 0;
}

void sumofno(int n){
    int sum = 0, diff = 0;
    if (n == 0 ){
        printf("Invalid Input.");
    }
    for(int i = 1; i <= n; i++){
        if (i % 2 != 0){
            sum += i;
        } else {
            diff += i;
        }
    }
    printf("Sum of the series: %d", sum - diff);
}