#include <iostream>
using namespace std;
float substract(float x, float y);
float add(float x, float y);
float division(float x, float y);
float greater(float x, float y);
int main()
{
    float number_1; 
    float number_2; 
    float sum_of_numbers;
    float diff_of_numbers;
    float division_of_numbers;
    float greater_number;
    cout << "Enter the first number" << endl;
    cin>>number_1;
    cout << "Enter the second number" << endl;
    cin>>number_2;
    sum_of_numbers=add(number_1, number_2);
    diff_of_numbers=substract(number_1, number_2);
    division_of_numbers=division(number_1,number_2);
    greater_number=greater(number_1,number_2);
    cout<<"sum of two numbers "<<sum_of_numbers<<endl;
    cout<<"positive difference of 2 numbers is"<<diff_of_numbers<<endl;
    cout<<"division of 2 numbers is"<<division_of_numbers;
    return 0;
}
float greater(float x, float y)
{
if(x>y)
	cout<<number_1<<" is greater than :"<<number_2;
else
	cout<<number_2<<" is greater than :"<<number_1;
}
float add(float x, float y)
{
    return (x+y);
}
float substract(float x, float y)
{
if(x>y)
	return (x-y);
if(y>x)
	return (y-x);
}
float division(float x, float y)
{
if(y=0)
	cout<<"invalid";
else
	return (x/y);
} 
