/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-24 || 01:51:46
 * * * * File    : Leader_of_an_Array.cpp
 */



#include<bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
int main()
{
    fast();
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }    


    vector<int> leaders;
    int mx=v[n-1];
    leaders.push_back(mx);

    for(int i=n-2; i>=0; i--){
        if(v[i]>mx){
            mx=v[i];
            leaders.push_back(v[i]);
        }
        
    }


    for(int i=leaders.size()-1; i>=0; i--){
        cout << leaders[i] << " ";
    }
    
    return 0;


// Alhamdulillah
}