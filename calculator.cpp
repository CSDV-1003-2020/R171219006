#include <iostream>
using namespace std;

float add(float x, float y);
int main()
{
    float number_1; 
    float number_2; 
    float sum_of_numbers;
    cout << "Enter the first number" << endl;
    cin>>number_1;
    cout << "Enter the second number" << endl;
    cin>>number_2;
    sum_of_numbers=add(number_1, number_2);
    cout<<"sum of two numbers "<<sum_of_numbers<<endl;
}


float add(float x, float y)
{
    return (x+y);
}
