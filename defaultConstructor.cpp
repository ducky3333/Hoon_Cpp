#include<iostream>

class Date{

    int year_;
    int month_;
    int day_;

    public:
    void ShowDate();

    Date()
    {   
        std::cout << "Default Constructor is HERE ! ! ! " << std::endl;
        year_ = 2023;
        month_ = 7;
        day_ = 12;
    }
    Date(int year, int month, int day) 
    {

        std::cout << "This is the Constructor of the three arguments ! ! !" << std::endl;
        year_ = year;
        month_ = month;
        day_ = day;
    }


};

void Date::ShowDate()
{
    std::cout << "Today is " << year_ << "/" << month_ << "/" << day_ << std::endl;
}

int main(){
    Date day = Date();
    Date day2(2023, 7, 13);

    day.ShowDate();
    day2.ShowDate();

    return 0;
}

