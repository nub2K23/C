// Example of using nested structures.
#include <stdio.h>
int main() {
    struct address {
        char phone[15];
        char city[25];
        int pin;
    };
    
    struct employee {
        char name[25];
        struct address a;
    };
    
    struct employee e1 = {"Ligma", "1234567891", "Bhonsor", 751069};
    
    printf("Name = %s, Phone = %s\n", e1.name, e1.a.phone);
    printf("City = %s, Pin= %d\n", e1.a.city, e1.a.pin);
    
    return 0;
}