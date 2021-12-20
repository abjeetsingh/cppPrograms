#include<stdlib.h>
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n; // this is the number of rounds
    cin>>n; 
    int sum1=0,sum2=0; // for comutative score
    int maxi=0;
    while (n--)
    {
        int t;
        cin>>t;
        sum1= sum1+t;
        cin>>t;
        sum2= sum2+t;
        int temp = sum1-sum2;
        if (abs(maxi)<abs(temp))
            maxi = temp;
    }
    if(maxi>=0)
        cout<<1<<" "<<maxi;
    else
        cout<<2<<" "<<abs(maxi);
    return 0;
}