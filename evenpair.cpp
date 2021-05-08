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
	ll x , y ;
	cin >> x >> y ;

	ll answer = 0 ;

	int oddy , eveny ;

	if (y % 2 == 0)
	{
		eveny = y / 2 ;
		oddy = eveny ;
	}
	else
	{
		eveny = y / 2 ;
		oddy = y - eveny ;
	}

	int oddx , evenx ;
	if (x % 2 == 0)
	{
		evenx = x / 2 ;
		oddx = evenx ;
	}
	else
	{
		evenx = x / 2 ;
		oddx = x - evenx ;
	}


	answer = (evenx * eveny) + (oddx * oddy) ;

	cout << answer ;

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

	return 0 ;
}