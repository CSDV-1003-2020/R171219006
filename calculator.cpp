#include <iostream>
using namespace std;
float substract(float x, float y);
float add(float x, float y);
<<<<<<< HEAD
float multiply(float x, float y);
=======
float division(float x, float y);
>>>>>>> origin/R171219004
int main()
{
    float number_1; 
    float number_2; 
    float sum_of_numbers;
<<<<<<< HEAD
    float diff_of_numbers;
<<<<<<< HEAD
=======
    float product_of_numbers;
>>>>>>> origin/R171219005
=======
    float division_of_numbers;
>>>>>>> origin/R171219004
    cout << "Enter the first number" << endl;
    cin>>number_1;
    cout << "Enter the second number" << endl;
    cin>>number_2;
    sum_of_numbers=add(number_1, number_2);
<<<<<<< HEAD
    diff_of_numbers=substract(number_1, number_2);
    division_of_numbers=division(number_1,number_2);
    cout<<"sum of two numbers "<<sum_of_numbers<<endl;
    cout<<"positive difference of 2 numbers is"<<diff_of_numbers<<endl;
<<<<<<< HEAD
=======
    product_of_numbers=multiply(number_1, number_2);
    cout<<"sum of two numbers "<<sum_of_numbers<<endl;
    cout<<"product of two numbers"<<product_of_numbers<<endl;
>>>>>>> origin/R171219005
=======
    cout<<"division of 2 numbers is"<<division_of_numbers;
>>>>>>> origin/R171219004
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
<<<<<<< HEAD
=======

float multiply(float x, float y)
{
	return (x*y);
}

>>>>>>> origin/R171219005
=======
float division(float x, float y)
{
if(y=0)
	cout<<"invalid";
else
	return (x/y);
}
>>>>>>> origin/R171219004
