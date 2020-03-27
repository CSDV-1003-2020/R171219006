#include <iostream>
using namespace std;
float substract(float x, float y);
float add(float x, float y);
float multiply(float x, float y);
<<<<<<< HEAD
float division(float x, float y);

=======
float modulo(float x, float y);
>>>>>>> origin/R171219005
int main()
{
    float number_1; 
    float number_2; 
    float sum_of_numbers;
    float diff_of_numbers;
    float product_of_numbers;
<<<<<<< HEAD
    float division_of_numbers;

=======
    float remainder;
>>>>>>> origin/R171219005
    cout << "Enter the first number" << endl;
    cin>>number_1;
    cout << "Enter the second number" << endl;
    cin>>number_2;
    sum_of_numbers=add(number_1, number_2);
    diff_of_numbers=substract(number_1, number_2);
    division_of_numbers=division(number_1,number_2);
    product_of_numbers=multiply(number_1, number_2);
    remainder(number_1, number_2);
    cout<<"sum of two numbers "<<sum_of_numbers<<endl;
    cout<<"positive difference of 2 numbers is"<<diff_of_numbers<<endl;
    cout<<"sum of two numbers "<<sum_of_numbers<<endl;
    cout<<"product of two numbers"<<product_of_numbers<<endl;
<<<<<<< HEAD
    cout<<"division of 2 numbers is"<<division_of_numbers;
=======
    cout<<"remainder"<<remainder;
    return 0;
>>>>>>> origin/R171219005
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
float multiply(float x, float y)
{
	return (x*y);
}
float division(float x, float y)
{
if(y=0)
	cout<<"invalid";
else
	return (x/y);
}

float modulo(float x, float y)
{
	if(number_2==0)
		cout<<"INVALID"<<endl;
	else
		return(number_1%number_2);
}

