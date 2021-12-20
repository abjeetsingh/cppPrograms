#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--)
    {
        char first, second, third;
        char x,y,ans;

        cin>>first>>second>>third>>x>>y;

        if(first==x||first==y)
            ans = first;
        else if(second==x||second==y)
            ans = second;
        else
            ans = third;
        cout<<ans<<endl;
    }
    return 0;
}