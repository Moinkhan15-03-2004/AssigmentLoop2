#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Digit:";
    cin>>n;
    int sum = 0;
    while(n>=0){
        int lastDigit = n%10;
        if(lastDigit%2==0) {
            sum+=lastDigit;
            n/=10;
        }
        cout<<"The sum of Even digit is:"<<sum<<endl;
        break;
    }
}