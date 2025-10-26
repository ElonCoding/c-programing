#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    long long* balance;
    int n;
} Bank;

Bank* bankCreate(long long* balance, int balanceSize) {
    Bank* bank = (Bank*)malloc(sizeof(Bank));
    bank->n = balanceSize;
    
    // Allocate memory for balance array
    bank->balance = (long long*)malloc(balanceSize * sizeof(long long));
    
    // Copy balance values
    for (int i = 0; i < balanceSize; i++) {
        bank->balance[i] = balance[i];
    }
    
    return bank;
}

bool bankTransfer(Bank* obj, int account1, int account2, long long money) {
    // Check if both accounts are valid
    if (account1 < 1 || account1 > obj->n || account2 < 1 || account2 > obj->n) {
        return false;
    }
    
    // Check if account1 has enough balance
    // Convert to 0-indexed
    int idx1 = account1 - 1;
    int idx2 = account2 - 1;
    
    if (obj->balance[idx1] < money) {
        return false;
    }
    
    // Perform transfer
    obj->balance[idx1] -= money;
    obj->balance[idx2] += money;
    
    return true;
}

bool bankDeposit(Bank* obj, int account, long long money) {
    // Check if account is valid
    if (account < 1 || account > obj->n) {
        return false;
    }
    
    // Deposit money (convert to 0-indexed)
    obj->balance[account - 1] += money;
    
    return true;
}

bool bankWithdraw(Bank* obj, int account, long long money) {
    // Check if account is valid
    if (account < 1 || account > obj->n) {
        return false;
    }
    
    int idx = account - 1;
    
    // Check if account has enough balance
    if (obj->balance[idx] < money) {
        return false;
    }
    
    // Withdraw money
    obj->balance[idx] -= money;
    
    return true;
}

void bankFree(Bank* obj) {
    free(obj->balance);
    free(obj);
}