#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,c;
        cin>> a>> b>>c;

        if(a<b && a<c){
            cout <<"ALICE"<<endl;
        }
        else if(b<a && b<c){
            cout<<"BOB"<<endl;
        }
        else{
        cout <<"CHARLIE"<<endl; 
        }
    }
    
    return 0;
}







#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int a,b,c;
        cin >> a>>b>>c;
        int a_1 = 400/a;
        int b_1 = 400/b;
        int c_1 = 400/c;
        vector<int>v = {a_1,b_1,c_1};
        int mx = *max_element(v.begin(),v.end());
        if(mx == a_1){
            cout <<"ALICE"<<endl;
        }
        else if(mx == b_1){
            cout<<"BOB"<<endl;
        }
        else if(mx==c_1){
            cout <<"CHARLIE"<<endl;
        }

    }
    
    return 0;
}