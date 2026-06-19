#include<iostream>
int getdigit(int number);
int sumodddigit(const std::string cardnumber);
int sumevendigit(const std::string cardnumber);
int main() {
    std::string cardnumber;
    int result = 0;
    std::cout << "Enter your card number : ";
    std::cin >> cardnumber;
    result = sumevendigit(cardnumber) + sumodddigit(cardnumber);
    if(result % 10 == 0){
        std::cout << "The card number is valid";
    }else{
        std::cout << "The card number is not valid";
    }
}
int getdigit(int number){
    return number % 10 + (number / 10 % 10);
}
int sumodddigit(const std::string cardnumber){
    int sum = 0;
    for(int i = cardnumber.size() - 1; i >= 0;i -= 2){
        sum += (cardnumber[i] - '0');
    }
    return sum;
}
int sumevendigit(const std::string cardnumber){
    int sum = 0;
    for(int i = cardnumber.size() - 2; i >= 0;i -= 2){
        sum += getdigit((cardnumber[i] - '0') * 2);
    }
    return sum;
}