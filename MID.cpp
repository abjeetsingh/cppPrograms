#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int N,X=0,i=1;
        cin>>N;
        int L = pow(10,N-1);
        int U = pow(10,N);

        for (int i = L; i < U; i++)
            if (i%3==0 && i%2!=0 && i%9!=0)
            {cout<<i<<"\n";
            break;}
            
    }
    return 0;
}