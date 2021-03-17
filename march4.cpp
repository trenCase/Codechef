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

	ll n ;
	cin >> n  ;

	ll arr[n] = {0} ;

	for (int iter = 0 ; iter < n ; iter++)
	{
		cin >> arr[iter] ;
	}

	sort(arr, arr + n)  ;
	ll surfer = 0 ;

	for (int iter = 0 ; iter < n ; iter++)
	{
		ll temp = arr[iter] - (iter + 1) ;
		if (temp > 0)
		{
			cout << "Second"  ;
			return  ;
		}

		surfer = surfer + abs(temp) ;
	}

	if (surfer % 2 == 0)
	{
		cout << "Second" ;
		return ;
	}
	else
	{
		cout << "First" ;
	}

	return ;
}

int main()
{
	exec() ;


	ll test = 1 ;
	cin >> test ;

	while (test--)
	{

		solution() ;
		cout << '\n' ;
	}

	return 0 ;

}