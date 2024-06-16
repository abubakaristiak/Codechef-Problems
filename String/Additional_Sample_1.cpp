//https://www.codechef.com/practice/course/strings/STRINGS/problems/WORDLE
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s,t,m;
        cin >> s >> t;
        for(int i=0; i<5; i++){
            if(s[i]==t[i]){
                cout << "G";
            }
            else{
                cout << "B";
            }

        }
        cout << endl;
    }
    
    return 0;
}