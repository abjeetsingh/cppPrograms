#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int N,M; // N is hills and M is valley
        cin>>N>>M;
        string str;
        if (N>M)
        {
            str += "010";
            N--;
            while(N--)
                str += "10";
        }
        else if(M>N)
        {
            str += "101";
            M--;
            while (M--)
                str += "01";
        }
        if(N==M){
            str += "010";
            N--;
            while(N--)
                str += "10";
            str += '1';
        }
        cout<<str.length()<<endl;
        cout<<str<<endl;
        
        
    }
    
}