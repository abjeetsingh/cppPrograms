#include <iostream> // header file includes every Standard library
#include <vector>
#include <algorithm>
// #include
using namespace std;
int dec(int size,int k)
{
    if(size <= k)
        return 1;
    else if (size>k)
        return 1 + dec(size-k,k);
}


int main() {
    int t;
    cin>>t;
	while(t--)
    {
    int n,k,moves;
    moves = 0;
    cin>>n>>k;
    vector<int> a;
    while (n--)
        {
            int temp;
            cin>>temp;
            a.push_back(temp);
        }
    for (int i:a)
    {
        int cnt = count(a.begin(),a.end(),i);
        cout<<"value of i "<<i<<"\n";
        cout<<"cnt value = "<<cnt<<"\n";
        if (cnt>=k)
        {   while(cnt--)
            a.erase(remove(a.begin(), a.end(), i), a.end());
            moves ++;
        }
        cout<<"move value"<<moves;
    }
    int new_move = dec(a.size(), k);
    moves += new_move;
    cout<<moves<<"\n";   
    }
	return 0;
}