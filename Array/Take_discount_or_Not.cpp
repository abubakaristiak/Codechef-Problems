#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> ar(n);
        for(int i=0; i<n; i++){
            cin>> ar[i];
        }
        int total_price = accumulate(ar.begin(), ar.end(), 0);
        int discounted_price = 0; 

        for(int i=0; i<n; i++){
            int discounted_value = ar[i]-y;
            if(discounted_value<0) discounted_value = 0;
            discounted_price +=discounted_value;
        }
        int total_cost = x + discounted_price;
        if(total_cost<total_price){
            cout << "COUPON"<<endl;
        }
        else{
            cout<<"NO COUPON"<<endl;
        }
        
    }
    
    return 0;
}