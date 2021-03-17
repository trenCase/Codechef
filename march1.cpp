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
	ll n , h , t ;
	cin >> n >> h >> t ;

	while (n--)
	{
		int temp = 0 ;
		cin >> temp ;
		if ((temp + t) >= h )
		{
			cout << "Yes" ;
			return ;

		}
	}

	cout << "No" ;

}

int main()
{
	exec() ;


	ll test = 1 ;
	// cin >> test ;

	while (test--)
	{

		solution() ;
		cout << '\n' ;
	}

	return 0 ;

}