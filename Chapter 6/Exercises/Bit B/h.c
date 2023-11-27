// Print prefixes for 24 hours of a day
// Author = Rahul Date = 20/11/2023

#include<stdio.h>

int main() {
    int i;

    // Loop through the hours from 1 to 24
    for (i = 1; i <= 24; i++) {
        // Check if it's morning (AM)
        if (i < 12)
            printf("%d:00 AM\n", i);
        // Check if it's noon
        else if (i == 12)
            printf("%d:00 Noon\n", i);
        // Check if it's afternoon or evening (PM)
        else if (i > 12 && i < 24)
            printf("%d:00 PM\n", i);
        // If i is 24, it's midnight
        else
            printf("%d:00 Midnight\n");
    }

    return 0;
}