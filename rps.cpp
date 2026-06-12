#include<iostream>
#include<ctime>
int i;
char player;
int comp;
int choice;
char userinput();
char compinput();
char winner(char player, char comp);
int main(){
    while(i != 2){
    userinput();  
    compinput();
    winner(player,comp);
    std::cout << "Press 1 to continue\n";
    std::cout << "Press 2 to exit\n";
    std::cout << "Please select : ";
    std::cin >> i;
}
    std::cout << "********** THANKYOU FOR PLAYING **********";
}
char userinput(){
    std::cout << "********** WELCOME YOU TO ROCK PAPER SCISSOR GAME **********\n";
    std::cout << "Enter your choice from below\n";
    std::cout << "r or R for rock\n";
    std::cout << "p or P for paper\n";
    std::cout << "s or S for scissor\n";
    std::cin >> player;
    switch(player){
        case 'r':
        case 'R':
        std::cout << "You Choose Rock\n";
        break;
        case 'p':
        case 'P':
        std::cout << "You Choose Paper\n";
        break;
        case 'S':
        case 's':
        std::cout << "You Choose Scissor\n";
        break;
    }
}
char compinput(){
    srand(time(NULL));
    comp = (rand() % 3);
    switch(comp){
        case 0:
        std::cout << "Comp Choose Rock\n";
        break;
        case 1:
        std::cout << "Comp Choose Paper\n";
        break;
        case 2:
        std::cout << "Comp Choose Scissor\n";
        break;
    }    
}
char winner(char player, char comp){
        switch(player){
            case 'r':
            case 'R':
            if (comp == 0){
                std::cout << "Draw\n";
            }
            else if (comp == 1){
                std::cout << "Comp win\n";
            }
            else if (comp == 2){
                std::cout << "Player won\n";
            }
            break;
            case 'p':
            case 'P':
                if (comp == 0){
                std::cout << "Player won\n";
            }   
                else if (comp == 1){
                std::cout << "Draw\n";
            }
                else if (comp == 2){
                std::cout << "Comp win\n";
            }
             break;
            case 's':
            case 'S':
                if (comp == 0){
                std::cout << "Comp won\n";
            }   
                else if (comp == 1){
                std::cout << "Player won\n";
            }   
                else if (comp == 2){
                std::cout << "Draw\n";
            }
            break;

        }
    }