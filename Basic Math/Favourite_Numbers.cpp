#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if(n%2==0 && n%7==0){
            cout <<"Alice"<<endl;
        }
        else if(n%2==1 && n%9==0){
            cout << "Bob"<<endl;
        }
        else{
            cout << "Charlie"<<endl;
        }
    }
    
    return 0;
}