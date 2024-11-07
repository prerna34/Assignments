#include<iostream>
#include<conio.h>

using namespace std;
float KMtoMiles(float KM){
    float _1kmmiles = 0.621371;
    float miles =KM *_1kmmiles;
    return miles;
}
 
 int main(){
    float KM
    ;
    cout<<"tell me the km";
    cin>>KM;

    float miles=KMtoMiles(KM);
    cout<<"miles  "<<miles<<endl;

 }