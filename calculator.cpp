#include <iostream>
using namespace std;

float add(float x, float y);
float multiply(float x, float y);
float modulo(float x, float y);
int main()
{
    float number_1; 
    float number_2; 
    float sum_of_numbers;
    float product_of_numbers;
    float remainder;
    cout << "Enter the first number" << endl;
    cin>>number_1;
    cout << "Enter the second number" << endl;
    cin>>number_2;
    sum_of_numbers=add(number_1, number_2);
    product_of_numbers=multiply(number_1, number_2);
    remainder(number_1, number_2);
    cout<<"sum of two numbers "<<sum_of_numbers<<endl;
    cout<<"product of two numbers"<<product_of_numbers<<endl;
    cout<<"remainder"<<remainder;
    return 0;
}


float add(float x, float y)
{
    return (x+y);
}

float multiply(float x, float y)
{
	return (x*y);
}

float modulo(float x, float y)
{
	if(number_2==0)
		cout<<"INVALID"<<endl;
	else
		return(number_1%number_2);
}

