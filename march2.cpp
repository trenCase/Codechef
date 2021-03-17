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
	string s1 ;
	cin >> s1 ;

	ll r = s1.size() ;
	ll ans = 0 ;

	for (int iter = 0 ; iter < r ; iter++)
	{
		if (s1[iter] == '1' and s1[iter + 1] != '1')
		{
			ans++ ;
		}
	}

	cout << ans ;
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