//https://www.codechef.com/practice/course/strings/STRINGS/problems/DIFFCONSEC?tab=statement
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
        string a;
        cin >> a;
        int count = 0; 
        for(int i=0; i<n; i++){
            if(a[i]==a[i+1]){
                count++;
            }
        }
        cout << count<<endl;
    }
    
    return 0;
}