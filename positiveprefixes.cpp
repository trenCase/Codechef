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
	ll n , k ;
	cin >> n >> k ;

	vector<int> outList(n) ;

	int surf = 0 ;

	for (; surf < outList.size() ; surf++)
	{
		outList[surf] = surf + 1 ;
	}

	if (k == n)
	{
		for (int iter = 0 ; iter < outList.size() ; iter++)
		{
			cout << outList[iter] << " " ;
		}

		return ;
	}

	int iter = 0 ;

	for (; iter < outList.size() ; iter++)
	{
		if (iter >= k )
		{
			outList[iter] = outList[iter] * -1 ;
		}
	}

	for (iter = 0 ; iter < outList.size() ; iter++)
	{
		cout << outList[iter] << " " ;
	}
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