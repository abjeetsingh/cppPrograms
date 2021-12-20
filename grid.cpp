#include<iostream>
#include<stdlib.h>
using namespace std;

void main(){
    int t;
    cin>>t;
    while (t--)
    {
        int N,M,X,Y;
        int travel1=0, travel2=0;
        cin>>N>>M>>X>>Y;
        travel2 = min(N,M);
        int i = min(N,M);
        int j = i;

        while (i != N && j != M)
        {
            if (i<N and j==M)
            {
                travel1++;
                i++;
            }

            else if(j<M && i==N)
            {
                travel1++;
                j++;
            }
            
        }
        
        cout<<"Price is = "<<travel1*X + travel2*Y;    
    }
    
}