// Returning an Array through a function.

#include <stdio.h>

int *fun(int *);                                        // int *fun is used because we are returning base address of the Array through the function.

int main() {
    int max, *p, i;
    
    p = fun(&max);                                      // The pointer 'p' gets assigned the base address of the Array 'arr';

    for (i = 0; i < max; i++) {
        printf("%d ", p[i]);                            // Elements of the Array 'arr' get accessed through the pointer 'p'.
    }

    return 0;
}

int *fun(int *num) {
    static int arr[] = {10, 20, 30, 40, 50};            // 'arr' has been declared static so that it remains alive even when control returns 
                                                        //  to the main program.

    *num = sizeof(arr) / sizeof(arr[0]);                // Assigning the size of Array to the Address of 'max'.

    return arr;                                         // Base address of Array 'arr' is returned through the function.
}



/*  Important Points:

(a) 'arr' has been declared as static to ensure that it remains alive when control returns from 'fun()' and we can access it in 'main()'.

(b) When we attempt to return the array 'arr' from 'fun()' what gets returned is only it's base address. Hence return type of 'fun()' in 'int *'.

(c) Since a function can return only one value, the address of array is returned explicitly through 'return' statement, whereas the array size is returned 
    through 'num' using a call by reference.

(d) The number of elemnts in the array is obtsained by dividing the array size by size of it's 0th element.

*/