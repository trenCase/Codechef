#include <bits/stdc++.h>
using namespace std ;

#define ll long long
#define m 1000000007




void exec()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;

	freopen("output.txt", "w", stdout);
#endif
}

void solution()
{
	ll n;
	cin >> n ;

	ll ans  = 1 ;
	ll b = 2 ;

	n-- ;
	while (n)
	{
		if (n % 2 == 1)
		{
			ans = (ans * b) % m ;
		}
		n = n / 2 ;
		b = (b * b) % m ;

	}

	cout << ans ;
	return ;
}

int main()
{
	exec() ;

	ll test ;
	cin >> test ;

	while (test--)
	{
		solution() ;
		cout << '\n' ;
	}



}