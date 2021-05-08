#include<bits/stdc++.h> 
using namespace std; 
 
#define ll long long

 
void solve() { 

    ll  n, k, x, y ; 

    cin >> n >> k >> x >> y ;

    if(n == k)
    {
        if (x == y)
        {
            cout << "YES" << '\n' ; 
            return ; 
        }
        else 
        {
            cout << "NO" << '\n' ; 
            return ; 
        }
    }

    vector<ll>  city(n,0) ; 

    ll surfer = x ; 

    while(true)
    {
        if(city[surfer] < 0 )
        {
            cout << "NO" << '\n' ; 
            break ; 
        }
        city[surfer] = -1 ; 

        if(city[y] < 0)
        {
            cout << "YES" << '\n' ; 
            break ; 
        }
        surfer = (surfer + k ) % n ; 

    }
 
 return   ; 
 
  }

 int main()
{

 ll t ; 
 cin >> t  ; 

 while(t--)
 {
     solve() ; 
 } 
 
 

 return 0 ;

 
 }