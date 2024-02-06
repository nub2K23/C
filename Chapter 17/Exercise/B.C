#include <stdio.h>

struct acc_num {
    char name[25]; int balance;
};

struct bank {
    struct acc_num account;
};

void low_bal(struct bank *, int, int);
void credit_debit(struct bank *, int, int);
int bal_checker(int, int);
void withraw();

int main() {
    struct bank data[250] = {
        { "Sigma", 69000},
        { "Rahul", 10500},
        { "Sourav", 22342},
        { "Prince", 1100},
        // Add more students as needed.
    };
    
    // Testing the functions.
    low_bal(data, 4, 1000);
    credit_debit(data, 4, 500);

    return 0;
}

// Function to print names who have low balance.
void low_bal(struct bank *customer, int numOfCustomers, int targetBalance) {
    printf("Customers who have < ₹1000 in their account: \n");
    for (int i = 0; i <= 4; i++) {
        if (customer[i].account.balance < targetBalance) {
            printf("Account number: %u, Name: %s\nBalance: ₹%d\n\n", customer[i].account, customer[i].account.name, customer[i].account.balance);
        }
    }
}

// Function to manipulate user data.
void credit_debit(int *customer, int acc, int amount) {
    int choice;
    printf("Press '0' to withdraw or '1' to deposit money.\n");
    scanf("%d", &choice);
    switch (choice) {
        case 0:
            withraw();
            break;
        case 1:
            printf("Remaining Bal: %d", *(customer + acc)->account.balance + amount);
            break;
        default:
            printf("Invalid Choice! Please enter a valid option.\n");
            break;
    }
}

// Balance checker after withdrawl.
int bal_checker(int balance, int amount) {
    if (balance - amount < 1000) {
        return 1;
    } else {
        return 2;
    }
}

void withdraw() {
switch (bal_checker(customer[acc].account.balance, amount)) {
    case 1:
        printf("The balance is insufficient for the specified withdrawl.\n");
        break;
    case 2:
        printf("Amount withdrawn = %d, Remaining Bal: %d\n", amount, customer[acc].account.balance - amount);
        break;
    }
}