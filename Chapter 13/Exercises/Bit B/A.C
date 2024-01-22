#include <stdio.h>

void sign(int [], int *,int *);
void type(int [], int *,int *);

int main() {
    int arr[25];
    int posnum, oddnum, evenum, negnum;
    
    printf("Enter 25 integers: ");
    for(int i = 0; i < 25; i++){
        scanf("%d", &arr[i]);
    }
    
    sign(arr, &posnum, &negnum);
    type(arr, &evenum, &oddnum);
    
    printf("No. of positive elements: %d.\n", posnum);
    printf("No. of negative elements: %d.\n", negnum);
    printf("No. of even elements: %d.\n", evenum);
    printf("No. of odd elements: %d.\n", oddnum);
    
    return 0;
}

void sign(int array[], int *p, int *q) {
    for(int i = 0; i < 25; i++) {
        if(array[i] >= 0){
            (*p)++;
        } else {
            (*q)++;
        }
    }
}

void type(int array[], int *p, int *q) {
    for(int i = 0; i < 25; i++) {
        if(array[i] % 2 == 0) {
            (*p)++;
        } else {
            (*q)++;
        }
    }
}