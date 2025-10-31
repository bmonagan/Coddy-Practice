#include <stdio.h>
#include <string.h>

// TODO: Define the BankAccount struct here
struct BankAccount {
    int accountNumber;
    char ownerName[30];
    float balance;
    int transcationCount;
};

// TODO: Write the depositMoney function here
void depositMoney (struct BankAccount *ptr, float amount){
    ptr->balance += amount;
    ptr->transcationCount += 1;
    printf("Deposit successful. New balance: %.2f\n", ptr->balance);

}

// TODO: Write the withdrawMoney function here
void withdrawMoney (struct BankAccount *ptr, float amount){
    if (amount > ptr->balance){
        printf("Insufficient funds. Current balance: %.2f\n", ptr->balance);
    } else {
        ptr->balance = ptr->balance - amount;
        ptr->transcationCount = ptr->transcationCount + 1;
        printf("Withdrawal successful. New balance: %.2f\n", ptr->balance);
    }}

// TODO: Write the displayAccount function here
void displayAccount (struct BankAccount *ptr){
    printf("Account Information:\n");
    printf("Account Number: %d\n", ptr->accountNumber);
    printf("Owner: %s\n", ptr->ownerName);
    printf("Balance: %.2f\n", ptr->balance);
    printf("Transactions: %d\n", ptr->transcationCount);
}

int main() {
    // Read input
    int accountNum;
    char ownerName[30];
    float initialBalance;
    float depositAmount;
    float withdrawAmount;
    
    scanf("%d", &accountNum);
    scanf("%s", ownerName);
    scanf("%f", &initialBalance);
    scanf("%f", &depositAmount);
    scanf("%f", &withdrawAmount);
    
    // TODO: Create BankAccount variable and initialize it
    struct BankAccount account = {accountNum,"",initialBalance,0};
    strcpy(account.ownerName,ownerName);
    
    // TODO: Call displayAccount to show initial state
    displayAccount(&account);
    
    // TODO: Call depositMoney with deposit amount
    depositMoney(&account, depositAmount);
    
    // TODO: Call withdrawMoney with withdrawal amount
    withdrawMoney(&account, withdrawAmount);
    
    // TODO: Call displayAccount to show final state
    displayAccount(&account);
    
    return 0;
}