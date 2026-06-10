#include<iostream>
#include<iomanip>
double balance = 10000;
double amount;
double towithdraw;
int choice;
void optoperform();
void switchop(int choice);
double checkbalance();
double makedeposit(double amount);
double makewithdraw(double towithdraw);
int main(){
    int i = 1;
    do{
    optoperform();
    switchop(choice);
    std::cout << "Press 4 to perform more operation" << "\n";
    std::cout << "Press 5 to exit" << "\n";
    std::cin >> choice;
    }while(choice != 5);
    std::cout << "THANK YOU";
} 

void optoperform(){
    std::cout << "********** WELCOME TO OUR BANK **********" << "\n";
    std::cout << "Press 1 to check your balance" << "\n";
    std::cout << "Press 2 to make a deposit" << "\n";
    std::cout << "Press 3 to withdraw cash" << "\n";
    std::cout << "Enter your choice : ";
    std::cin >> choice;
}
void switchop(int choice){
    switch(choice){
    case 1:
        checkbalance();
        break;
    case 2:
        makedeposit(amount);
        break;
    case 3:
        makewithdraw(towithdraw);
        break;
    case 4:
        switchop(choice);
        break;
    default:
        std::cout << "Enter right choice" << "\n";
    }
}
double checkbalance(){
    std::cout << "Your Balance is " << std::setprecision(2)<< std::fixed << balance <<  "\n";
}
double makedeposit(double amount){
    std::cout << "Enter the amount you want to deposit : ";
    std::cin >> amount;
    balance += amount;
    std::cout << "Your updated balance is : " << balance << "\n";
}
double makewithdraw(double towithdraw){
    std::cout << "Enter the amount you want to withdraw : ";
    std::cin >> towithdraw;
    balance -= towithdraw;
    std::cout << "Your remaining amount is : " << balance << "\n"; 
}