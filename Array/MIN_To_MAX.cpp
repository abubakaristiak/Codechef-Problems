#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        vector<int> ar(n);
        for(int i=0; i<n; i++){
            cin >> ar[i];
        }
        int mn = *min_element(ar.begin(),ar.end());

        int count = 0;
        for(int i=0; i<n; i++){
            if(ar[i]>mn){
                count++;
            }
        }
        cout << count<<endl;
        
    }
    
    return 0;
}