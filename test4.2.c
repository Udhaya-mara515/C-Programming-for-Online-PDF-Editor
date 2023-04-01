#include <stdio.h>
int balance=1000;
int deposit(int amount) {
    balance += amount;
    printf("Amount deposited: %d\n", amount);
    return balance;
}

int withdraw(int amount) {
    if (balance >= amount) {
        balance -= amount;
        printf("Amount withdrawn: %d\n", amount);
    } else {
        printf("Insufficient balance.\n");
    }
    return balance;
}

int main() {
    balance = deposit(5000);
    balance = withdraw(2000);
    balance = deposit(7000);
    balance = withdraw(5000);

    printf("Current balance: %d\n", balance);
	return 0;
}
