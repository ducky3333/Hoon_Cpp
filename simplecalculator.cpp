#include<iostream>

void simpleCalculator(int &bai){
    int i;
    
  
    for(i=0; i < bai; i++){

        std::cout << "*";
    }

   
}

int main(){

    int user_input;

    std::cout << "Enter do you want calculate" << std::endl;
    std::cin >> user_input;
    simpleCalculator(user_input);
    std::cout << simpleCalculator << std::endl;
}