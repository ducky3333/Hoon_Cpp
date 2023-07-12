// #include<iostream>

// int max_number(int *parr);

// int main()
// {
//     int arr[10];
//     int i;
     
//     std::cout << "please enter 10 Any numbers\n"; 
//     for(int i = 0; i < 10; i++)
//     {
       
//         std::cin >> arr[i];
//     }
    

//     std::cout << "The Max number you have entered is :" << max_number(arr);

//     return 0;
// }

// int max_number(int *parr)
// {
//     int i; 
//     int max = parr[0];
//     for(int i = 0; i < 10; i++){
//         {
//             if(parr[i] > max) 
//             {
//                  max = parr[i]++;
//             }
//         } 
//     }
//     return max;
// }

#include<iostream>

using namespace std;

int scan(int* prr)
{
	cout << "값 10개를 입력하시오" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> prr[i];
	}
	return 0;
}

int cal(int* prr, int* ptac)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (prr[i] > prr[j])
			{
				ptac[i]++; cout << " " << ptac[i] << " (" << i << ") ";
			}
		}
		cout << endl;
	}
	return 0;
}

int main()
{
	int arr[10];
	int stac[10] = {0,};
	scan(arr);
	cal(arr,stac);
	for (int j = 0; j < 10; j++) {
		for (int i = 0; i < 10; i++) {
			if (stac[i] == j) {
				cout << arr[i]<<" ";
			}
		}
	}
}