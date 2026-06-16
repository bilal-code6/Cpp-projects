#include<iostream>
#include<cctype>
int main(){
    std::string questions[] = {"What is the capital of India ?", "Which language is mainly used for Android development?" ,
          "How many bits are there in 1 byte?", "Which symbol is used for the AND operator in C++?"};
    std::string options[][4] = {{"A. Mumbai", "B. Delhi", "C. Kolkata", "D. Chennai"},
                                {"A. Java", "B. HTML", "C. CSS", "D. SQL"}, {"A. 4", "B. 16", "C. 8", "D. 32"},
                            {"A. |", "B. ^", "C. &&", "D. %"}};
    int size = sizeof(questions)/sizeof(questions[0]);
    char anskey[] = {'B','A','C','C'};
    char guess;
    double score = 0;
    for(int i = 0; i < size; i++){
        std::cout << questions[i] << "\n";
            for(int j = 0; j < sizeof(options)/sizeof(options[0]); j++){
                std::cout << options[i][j] << "\n";
                 }
                std::cout << "Enter your guess " << "\n";
                std::cin >> guess;
                guess = toupper(guess);    
                if(guess == anskey[i]){
                    std::cout << "Correct" << "\n";
                    score++;
                }else {
                    std::cout << "Wrong" << "\n";
                    std::cout << "Correct is " << anskey[i] << "\n";
                }
                }
                std::cout << "Score is " << score << "\n";
                std::cout << "Result " << (score/(double)size)*100 << "%";
}