#include<iostream>
#include<conio.h>
using namespace std;

void printAllDigit(int n ){
    while(n){
        int onesplacedigit=n%10;
        cout<<"digit"<<onesplacedigit <<endl;
        n/=10;
    }
}

int main(){
    int n;
    cout<<"Enter the Number to see its digit"<<endl;

    cin>>n;
    printAllDigit(n);
}