// write a program in c++ to print sum of two numbers
#include<iostream>
using namespace std;

int main(){
    int num1, num2, sum;
    cout << "Enter the Number 1 and Number 2 : \n";
    cin >> num1 >> num2;

    sum = num1 + num2;
    cout << "The addition of " << num1 << " and " << num2 << " : " <<sum;

    return 0;
}