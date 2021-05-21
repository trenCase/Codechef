#include <bits/stdc++.h>
using namespace std ;

#define ll long long




void exec()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;

	freopen("output.txt", "w", stdout);
#endif
}

void solution()
{
	ll n, x , k ;
	cin >> n >> x >> k  ;

	if ((x - 0) % k == 0 )
	{
		cout << "yes"  ;
		return ;
	}
	else
	{
		if ((x - (n + 1)) % k == 0)
		{
			cout << "yes" ;
			return ;
		}
	}

	cout << "no" ;
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