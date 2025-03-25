#include <stdio.h>
int main() {
    int balance=50000;
    int withdraw;
    printf("enter amount to withdraw");
    scanf("%d" ,&withdraw);
    if(withdraw>balance){
        printf("insufficient balance.current balance %d\n",balance);
    }
    else{
        int account_balance;
        account_balance=balance-withdraw;
        printf("remaining balance:%d\n",account_balance);
    }
    return 0;
}


    
