#include <stdio.h>
int main(){
    char name[3];
    float price[3];
    int pages[3];
    
    printf("Enter names, prices and no. of pages of 3 books.\n");
    
    for(int i = 0; i <= 2; i++){
        scanf(" %c %f %d", &name[i], &price[i], &pages[i]);
    }
    
    printf("And this what you entered:\n");
    
    for(int i = 0; i <= 2; i++){
        printf("%c %.2f %d\n", name[i], price[i], pages[i]);
    }

    return 0;
}