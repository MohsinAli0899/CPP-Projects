#include<iostream>
#include<conio.h>
using namespace std;
/*First a function which will take weight and height as an input 
and will calculate the BMI ratio and then assign you the category*/
void CalculatorBMI()
{
    system("cls");
    double weight;
    double height;

    cout<<endl<<endl;
    cout<<"\tDetails to Calculate BMI"<<endl;
    cout<<endl<<"1. Enter your Weight (in Kilograms): ";
    cin>>weight;
    cout<<"2. Enter your Height (in Meters): ";
    cin>>height;

    double bmi = weight/(height*height);

    cout<<endl<<endl;
    cout<<"********************************"<<endl;
    cout<<"Your Body Mass Index is: "<<bmi<<endl;
    cout<<"********************************"<<endl;
    if(bmi < 18.5)
    {
        cout<<"You are Underweight";
    }
    else if(bmi >= 18.5 && bmi <=25)
    {
        cout<<"You are Perfectly Healthy";
    }
    else if(bmi >= 25 && bmi <=29.9)
    {
        cout<<"You are Overweight";
    }
    else if(bmi >= 30 && bmi <=34.9)
    {
        cout<<"You are in Obesity Class 1";
    }
    else if(bmi >= 35 && bmi <=39.9)
    {
        cout<<"You are in Obesity Class 2";
    }
    else if(bmi >= 40)
    {
        cout<<"You are in Obesity Class 3";
    }
    cout<<endl<<"********************************"<<endl;
    cout<<"Press any Key to go back to Menu";
    getch();
}
/*Basic Rules and different categories according to the calculated BMI*/
void rules()
{
    system("cls");
    cout<<"\t\t"<<"Instructions"<<endl;
    cout<<endl<<"**********************************************************";
    cout<<endl<<"1. BMI is less than 18.5: You are Underweight";
    cout<<endl<<"2. BMI is between 18.5 and 24.9: You are Perfectly Healthy";
    cout<<endl<<"3. BMI is between 25.0 and 29.9: You are Overweight";
    cout<<endl<<"4. BMI is between 30.0 and 34.9: You are in Obesity Class 1";
    cout<<endl<<"5. BMI is between 35.0 and 39.9: You are in Obesity Class 2";
    cout<<endl<<"6. BMI is greater than 40: You are in Obesity Class 3";
    cout<<endl<<"***********************************************************"<<endl;
    cout<<endl<<"Press any Key to go back to Menu";
    getch();
}
int main()
{
    do
    {
       system("cls");
        cout<<"------------BMI Calculator-------------"<<endl;
        cout<<"1. Calculate BMI"<<endl;
        cout<<"2. Rules to calculate BMI"<<endl;
        cout<<"3. Exit Program"<<endl;
        cout<<"Select Option: ";
        char op = getche();     //Asks which operation the user would like to do
        if (op == '1')
        {
            CalculatorBMI();
        }
        else if(op == '2')
        {
            rules();
        }
        else if(op == '3')
        {
            exit(0);
        }
    } while (1);
    return 0;
}