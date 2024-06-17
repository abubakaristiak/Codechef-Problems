//https://www.codechef.com/practice/course/arrays/ARRAYS/problems/SEARCHINARR
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin >> n>> x;
    int ar[n];
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }
    bool flag = false;
    for(int i=0; i<n; i++){
        if(ar[i]== x){
            flag = true;
        }
    }
    if(flag==true){
        cout << "YES"<<endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}