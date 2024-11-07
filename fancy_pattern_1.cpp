#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int start_num_idx=8-i;
        int num=i+1;
        int cnt_num=num;
        for(int j=0;j<17;j++){
            if(j==start_num_idx && cnt_num>0){
                cout<<num;
                start_num_idx+=2;
                cnt_num--;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}
