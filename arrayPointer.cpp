#include<iostream>

int add_number(int *parr);

int main()
{
    int arr[3];
    int i;
    
    for(int i = 0; i < 3; i++)
    {
        std::cin >> arr[i];
    }
    add_number(arr);
    std::cout << "Every array : " << arr[0] << arr[1] << arr[2];

    return 0;
}

int add_number(int *parr)
{
    int i; 
    for(int i = 0; i < 3; i++){
        parr[i]++;
        
    }
    return 0;
}