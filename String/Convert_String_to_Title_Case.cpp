// Pending
//https://www.codechef.com/practice/course/strings/STRINGS/problems/TITLECASE?tab=statement
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);

    stringstream ss;
    ss<<s;
    string word;
    while (ss>>word)
    {
        for(int i=0; i<word.size(); i++){
            word[i]-32;
        }
    }

    cout << s << endl;
    
    return 0;
}