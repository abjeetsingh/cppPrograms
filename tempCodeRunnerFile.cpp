#include <iostream> // header file includes every Standard library
#include <set>
#include <algorithm>
// #include
using namespace std;
int dec(int size,int k){
    if(size==0)
        return 0;
    else if(size <= k)
        return 1;
    else if (size>=k)
        return 1 + dec(size-k,k);
    
}


int main() {
    int t;
    cin>>t;
	while(t--){
        int n,k,moves;
        moves = 0;
        cin>>n>>k;

        set<int> a;
        while (n--)
        {
            int temp;
            cin>>temp;
            a.insert(temp);
        }
        for (int i=a.begin(); i<a.end(); ++i)
        {
            int cnt = count(a.begin(),a.end(),i);
            if (cnt>=k)
            {
                a.erase(remove(a.begin(), a.end(), i), a.end()); 
                moves ++;
            }
        }
        int new_move = dec(a.size(), k);
        moves += new_move;
    cout<<moves<<"\n";   
    }
	return 0;
}