#include<bits/stdc++.h> 
using namespace std; 
 
#define ll long long
ll ans ;
 
void solve() { 

  float bal ; 
  int with ; 

  cin >> with >> bal ; 

    if(with % 5 == 0 and bal > (with+0.50))
    {
        cout << fixed << setprecision(2) << bal - with - 0.50 << '\n' ; 
    }
    else 
    {
        cout << bal << '\n' ; 
    }

  }

 int main()
{


 solve() ; 
 

 return 0 ;

 
 }