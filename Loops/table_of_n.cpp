#include<iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter the num whose table is to be printed: ";
    cin>>num;
    for(int i = 1 ; i <= 10; i++) {
        cout<<num<<'*'<<i<<'='<<num*i<<endl;
    }
}