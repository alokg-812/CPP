#include<iostream>
using namespace std;
int sum(int a, int b){
    return a+b;
}
int main() {
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Sum of "<<a<<" and "<<b<<" is: "<<sum(a,b);
}