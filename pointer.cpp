#include <iostream>

int change_val(int *pi){
    std::cout<< "----- in the change_val function --- " << std::endl;
    std::cout<< "Value of pi :" << pi << std::endl;
    std::cout << "Value of pi's poinging " << *pi << std::endl;

    *pi = 3;
    std::cout << "--- Function of change_val is ended --- " << std::endl;
    return 0;
 }
 int main()
 {
    int i = 0;

    std::cout << "parameter i's adress :" << &i <<std::endl;
    std::cout << "before Calling Value of i :" << i << std::endl;
    change_val(&i);
    std::cout << "After Calling Value of i : " << i << std::endl;

    return 0;
 }