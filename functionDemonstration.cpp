#include<iostream>
using namespace std;

int add(int a, int b){
    int sum;
    sum = a+b;
    cout << "The sum is:" << sum << endl; 

    return sum;
}

int main(){

    int num1, num2;

    cout << "Enter the first number" << endl;
    cin >> num1 ;

    cout << "Enter the second number" << endl;
    cin >> num2;

    add(num1, num2);

    return 0;
}