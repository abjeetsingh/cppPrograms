#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while (t--)
    {
    int i,count = 0;
    int arr[7];
    for ( i=0;i<7;++i){
        cin>>arr[i];
        if(arr[i] == 1)
            count++;}
    int zeros = 7 -count;
    if(count > zeros )
        cout<<"YES\n";
    else
        cout<<"NO\n";
    }
    return 0;
}