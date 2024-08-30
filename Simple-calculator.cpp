//Simple calculator


#include<iostream>
using namespace std;

double add(double num1, double num2){
    double addition = num1 + num2;
    cout<<"Addition is : ";
    return addition;
}

double sub(double num1, double num2){
    double subtraction = num1 - num2;
    cout<<"Subtraction is : ";
    return subtraction;
}

double divi(double num1, double num2){
    double division = num1/num2;
    cout<<"Division is : ";
    return division;
}

double multi(double num1, double num2){
    double multiplication = num1*num2;
    cout<<"Multiplication is : ";
    return multiplication;
}

double arOp(int choise, double num1, double num2){
    double result;
    switch(choise){
        case 1:
        result = add(num1, num2);
        break;

        case 2:
        result = sub(num1, num2);
        break;

        case 3:
        result = divi(num1, num2);
        break;

        case 4:
        result = multi(num1, num2);
        break;

        default:
        cout<<"Enter right choise!";
    }

    return result;
}

int main()
{
    double num1, num2;
    int choise;
    cout<<"----: ARITHMETIC OPERATIONS :----"<<endl;
    cout<<"1. Addition"<<endl<<"2. Subtraction"<<endl<<"3. Division"<<endl<<"4. Multiplication"<<endl;
    cout<<"*---------------------------*"<<endl;
    cout<<"Enter your choise : ";
    cin>>choise;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    cout<<arOp(choise, num1, num2);

    return 0;
}