#include<iostream>
#include<conio.h>
using namespace std;

void check_even_or_odd(int n){
    if(n%2==0){
        cout<<"given no is even ";

    }
    else{
       cout<<"given no is odd"; 
    }
}

int main(){
    int n;
    cin>>n;
    check_even_or_odd(n);
    return 0;
}