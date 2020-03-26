#include <iostream>
using namespace std;
float substract(float x,float y);
float add(float x, float y);
float multiply(float x, float y);
int main()
{
    float number_1; 
    float number_2; 
    float sum_of_numbers;
<<<<<<< HEAD
    float diff_of_numbers;
=======
    float product_of_numbers;
>>>>>>> origin/R171219005
    cout << "Enter the first number" << endl;
    cin>>number_1;
    cout << "Enter the second number" << endl;
    cin>>number_2;
    sum_of_numbers=add(number_1, number_2);
<<<<<<< HEAD
    diff_of_numbers=substract(number_1, number_2);
    cout<<"sum of two numbers "<<sum_of_numbers<<endl;
    cout<<"positive difference of 2 numbers is"<<diff_of_numbers<<endl;
=======
    product_of_numbers=multiply(number_1, number_2);
    cout<<"sum of two numbers "<<sum_of_numbers<<endl;
    cout<<"product of two numbers"<<product_of_numbers<<endl;
>>>>>>> origin/R171219005
}
float add(float x, float y)
{
    return (x+y);
}
<<<<<<< HEAD
float substract(float x, float y)
{
if(x>y)
	return (x-y);
if(y>x)
	return (y-x);
}
=======

float multiply(float x, float y)
{
	return (x*y);
}

>>>>>>> origin/R171219005
