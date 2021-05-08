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
	ll n , d ;

	cin >> n >> d ;

	vector<int> ageList(n) ;
	for (auto &i : ageList) cin >> i ;

	ll answer ;

	if (d == 1)
	{
		answer = ceil(float(n) / float(d)) ;
		cout << answer << '\n' ;
		return ;
	}

	ll risk = 0 , noRisk = 0 ;

	for (int i : ageList)
	{
		if (i >= 80 or i <= 9)
		{
			risk++ ;
		}
		else
		{
			noRisk++ ;
		}
	}

	answer = (ceil(float(risk) / d) + ceil(float(noRisk) / d)) ;
	cout << answer << '\n';

}

int main()
{
	exec() ;

	ll test ;
	cin >> test ;

	while (test--)
	{
		solution() ;
	}

	return 0 ;
}