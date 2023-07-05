#include<iostream>

// int slave(int master_money, int master_profit)
// {
//     master_money += 10000;
//     return master_money;
// }

// int main(){
//     int master_money = 100000;
//     printf("2023.07.05's property is %d", slave(master_money));
//     return 0;
// }

int sum(int n)
{
    for(int i = 1; i < n; i++)
    {
        n += i;
    }
}
int main()
{
    int n;
    std::cout<< "this is Free Summrizer. Please enter any number" << std::endl;
    std::cin >> n;
    sum(n);
    std::cout << "The Result is" << n << std::endl;
    return 0;
}
    