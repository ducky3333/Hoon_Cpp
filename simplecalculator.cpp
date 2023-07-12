#include<iostream>
#include<string.h>

int simpleCalculator(int bai){

    int bai;
    bai *= bai;
}

int main(){

    int user_input;

    std::cout << "Enter do you want calculate" << std::endl;
    std::cin << user_input;
    simpleCalculator(user_input);
    std::cout << simpleCalculator << std::endl;
}