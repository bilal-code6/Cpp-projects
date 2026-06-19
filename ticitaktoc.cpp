#include<iostream>
#include<ctime>
void drawboard(char *board);
void playermove(char *board, char player);
void computermove(char *board, char computer);
bool checkwinner(char *board, char player, char computer);
bool checktie(char *board);
int main(){
    srand(time(0));
    char board[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'x';
    char computer = 'o';
    bool running = true;
    drawboard(board);
    while(running){
        playermove(board, player);
        drawboard(board);
        if(checkwinner(board, player, computer)){
            running = false;
            break;
        }else if(checktie(board)){
            running = false;
            break;
        }
        
        computermove(board, computer);
        drawboard(board);
        if(checkwinner(board, player, computer)){
            running = false;
            break;
        }
        else if(checktie(board)){
            running = false;
            break;
        }
        
    }

}
void drawboard(char *board){
    std::cout << "     " << "|" << "     " << "|" << "     " << "\n";
    std::cout << board[0] << "    " << "|" << board[1] << "    " << "|" << board[2] << "    " << "\n";
    std::cout << "_____" << "|" << "_____" << "|" << "_____" << "\n";
    std::cout << "     " << "|" << "     " << "|" << "     " << "\n";
    std::cout << board[3] << "    " << "|" << board[4] << "    " << "|" << board[5] << "    " << "\n";
    std::cout << "_____" << "|" << "_____" << "|" << "_____" << "\n";
    std::cout << "     " << "|" << "     " << "|" << "     " << "\n";
    std::cout << board[6] << "    " << "|" << board[7] << "    " << "|" << board[8] << "    " << "\n";
    std::cout << "\n";
}
void playermove(char *board, char player){
    int number;
    while(true){
    std::cout << "Enter your spot (1-9) : ";
    std::cin >> number;
    number--;
    if(number < 0 || number > 9){
        std::cout << "Enter in range\n";
    }else if (board[number] != ' '){
        std::cout << "Space occupied\n";
    }else {
        board[number] = player;
        break;
    }
}
}
void computermove(char *board, char computer){
    while(true){
        int number = (rand() % 9);
        if(board[number] == ' '){
        board[number] = computer;
        break;
    }
}
}
bool checkwinner(char *board, char player, char computer){
    if((board[0] != ' ') && (board[0] == board[1] && board[1] == board[2])){
        if(board[0] == player){
            std::cout << "YOU WON";  
            return true;
        }else if(board[0] == computer){
            std::cout << "You lose";
            return true;
        }
    }else if((board[0] != ' ') && board[0] == board[3] && board[3] == board[6]){
        if(board[0] == player){
            std::cout << "YOU WON";  
            return true;
        }else if(board[0] == computer){
            std::cout << "You lose";
            return true;
        }
    }else if(board[1] != ' ' && board[1] == board[4] && board[4] == board[7]){
        if(board[1] == player){
            std::cout << "YOU WON";
            return true;
        }else{
            std::cout << "YOU LOSE";
            return true;
        }
    }else if(board[2] != ' ' && board[2] == board[5] && board[5] == board[8]){
        if(board[2] == player){
            std::cout << "YOU WON";
            return true;
        }else{
            std::cout << "YOU LOSE";
            return true;
        }
    }
    if((board[3] != ' ') && (board[3] == board[4] && board[4] == board[5])){
        if(board[3] == player){
            std::cout << "YOU WON";  
            return true;
        }else if(board[3] == computer){
            std::cout << "You lose";
            return true;
        }
    }
    if((board[6] != ' ') && (board[6] == board[7] && board[7] == board[8])){
        if(board[6] == player){
            std::cout << "YOU WON";  
            return true;
        }else if(board[6] == computer){
            std::cout << "You lose";
            return true;
        }
    }
    if(board[0] != ' ' &&  board[0] == board[4] && board[4] == board[8]){
        if(board[0] == player){
            std::cout << "YOU WON";  
            return true;
        }else if(board[0] == computer){
            std::cout << "You lose";
            return true;
        }
    }else if(board[2] != ' ' &&  board[2] == board[4] && board[4] == board[6]){
        if(board[2] == player){
            std::cout << "YOU WON";  
            return true;
        }else if(board[2] == computer){
            std::cout << "You lose";
            return true;
        }
    }
    return false;
}
bool checktie(char *board){
    for(int i = 0; i < 9; i++){
        if(board[i] == ' '){
        return false;
    }
    }
    std::cout << "It's a tie";
    return true;
}
