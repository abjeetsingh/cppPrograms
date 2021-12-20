#include<stdlib.h>
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int ao, be; // alice wins for odd and shows a, bob wins even and show b
        cin>>ao;
        cin>>be;

        if((ao+be)%2 == 0)
            cout<<"Bob"<<endl;
        else
            cout<<"Alice"<<endl;
    }
}