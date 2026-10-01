//encapsulation is a way to secure something you want to have limited access to
#include <iostream>
using namespace std;

class Bank{
    private:
        int balance;        //safe only can be accessed inside class
    public: 
        Bank(int initialBalance){
            balance = initialBalance;
        }
    
    void deposite(int amount){
        if(amount > 0){
            balance += amount;
        }
        else{
            cout << "error!\n Try again!";
        }

    }

    double getbalance(){
        return balance;         //a safe way to get balance;
    }
};

int main(){
    Bank b(1000);
    b.deposite(100);
    cout << b.getbalance();
}