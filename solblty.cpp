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
	ll x, a , b ;
	cin >> x >> a >> b  ;

	ll ans =  ((100 - x) * b * 10) + (a * 10) ;

	cout << ans;



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