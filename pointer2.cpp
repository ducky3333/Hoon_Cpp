#include<iostream>

int swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    return 0;

}
int main()
{
    int i, j;

    i = 3;
    j = 5;

    std::cout << "Before swapping : " << i << j << std::endl;
    swap(i, j);
    std::cout << "After swapping : " << i << j << std::endl;

    return 0;
}