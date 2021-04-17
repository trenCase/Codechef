/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std ;

#define ll long long

using namespace std;



void exec()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;

	freopen("output.txt", "w", stdout);
#endif
}

void solution()
{
	ll n ; 
	cin >> n ; 
	
	if(n == 1)
	{
	    cout << 20 ; 
	    return ; 
	}
	if(n ==2)
	{
	    cout << 36 ; 
	    return ; 
	}
	if(n ==3)
	{
	    cout << 51 ; 
	    return ; 
	}
	if(n == 4)
	{
	    cout << 60 ; 
	    return ; 
	}
	
	ll cl = n / 4 ; 
	ll ans = cl * 44 ; 
	
	ll rd = n % 4 ; 
	if(rd == 0)
	{
	    ans += 16 ; 
	    cout << ans ; 
	    return ;
	}
	if(rd == 1)
	{
	    ans += 32 ;
	    cout << ans ; 
	    return ; 
	}
	if(rd == 2)
	{
	    ans+=44 ; 
	    cout << ans ; 
	    return ; 
	}
	if(rd ==3)
	{
	    ans+=55 ; 
	    cout << ans ; 
	    return ; 
	}


    return ; 
}




int main()
{
	exec() ;



	ll test = 1  ;
	cin >> test ;

	while (test--)
	{
		solution() ;
		cout << '\n' ;

	}

	return 0 ;


}
