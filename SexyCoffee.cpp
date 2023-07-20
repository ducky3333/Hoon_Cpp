#include <iostream>


void kiosk()
{
    
    std::cout << "Welcome to coffee shop. please order here. " << std::endl;
    std::cout << " ***** MENU LIST *****" << std::endl;
    std::cout << "1. Drip coffee" << std::endl;
    std::cout << "2. Cafe Latte" << std::endl;
    std::cout << "3. Tea" << std::endl;
    std::cout << "4. Juice " << std::endl;
    std::cout << "5. EXIT" << std::endl;

}

void kiosk2()
{
    
    std::cout << "Hi again. anything else?" << std::endl;
    std::cout << " ***** MENU LIST *****" << std::endl;
    std::cout << "1. Drip coffee" << std::endl;
    std::cout << "2. Cafe Latte" << std::endl;
    std::cout << "3. Tea" << std::endl;
    std::cout << "4. Juice " << std::endl;
    std::cout << "5. EXIT" << std::endl;

}

int main()
{
    
    const int drip_Coffee = 350;
    const int cafe_Latte = 400;
    const int tea = 300;
    const int Juice = 450;
    int total_price = 0;
    int user_selection;

    kiosk();
    
    
    while(1)
    {
        std::cin >> user_selection;
        if(user_selection == 1)
        {
            total_price += 350;
            kiosk2();
          
            
        }
        else if(user_selection == 2)
        {
            total_price += 400;
            kiosk2();
            
            
        }
        else if(user_selection == 3)
        {
            total_price += 300;
            kiosk2();
            
            
        }
         else if(user_selection == 4)
        {
            total_price += 450;
            kiosk2();
            
            
        }
          else if(user_selection == 5)
        {
            std::cout << "Thank you for visit. have a good day" << std::endl;
            break;
            
        }
        else
        {
            std::cout << "input Failed. Tryagain. " << std::endl;
        } 
    
        
    }
    std::cout << "It will be " << total_price << " Yen" << std::endl;
    
}