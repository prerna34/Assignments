#include<iostream>
#include<conio.h>

using namespace std;

int createNumberUsingDigit( int numofdigit){
    int num=0;
    for(int i=0;i<numofdigit;i++){
        cout<<"enter the the digit "<<endl;
        int digit;
        cin>>digit;
        num=num * 10 + digit;
        cout<<"Number created so far"<<num<<endl;


    }
    return num;
}


int main(){
    int numofdigit;
    cin>>numofdigit;
    int num=createNumberUsingDigit(numofdigit);
    cout<<num;
}
