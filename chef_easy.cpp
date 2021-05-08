#include<bits/stdc++.h> 
using namespace std; 
 
#define ll long long

 
void solve() { 

    ll n, k ; 
    cin >> n >> k  ; 

    vector<ll> queries(n,0) ; 
    for(auto &i : queries) cin >> i ; 

    ll rem = 0 ; 
    ll surf = 0 ;
    ll day = 0 ; 

    while(surf < queries.size())
    {
        rem+=queries[surf] ; 
        rem-=k ; 

        if(rem < 0)
        {
            day = surf + 1 ; 
            break ; 
        }

        surf++ ; 
    }

    if(rem == 0 )
    {
        day = n + 1 ; 
    }
    else 
        if (rem > 0)
            {
                day = n + rem / k + 1  ; 
            }
            
    cout << day << '\n' ; 
 
  }

 int main()
{
    ll t ; 
    cin >> t ; 

    while(t--)
    {
        solve() ; 
    }
 

 return 0 ;

 
 }