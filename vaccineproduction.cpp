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
	ll d1 , v1 , d2 , v2 , goal ;

	cin >> d1 >> v1 >> d2 >> v2 >> goal ;

	ll answer ;

	if ((d1 == d2) and d1 == 1)
	{
		float prod = v1 + v2 ;
		answer = ceil(float(goal) / prod) ;
		cout << answer ;

		return ;
	}

	ll iter = 1 ;
	float prod = 0  ;
	while (true)
	{
		if (iter >= d1)
		{
			prod += v1 ;
		}
		if (iter >= d2)
		{
			prod += v2 ;
		}
		if (prod >= goal)
		{
			cout << iter << '\n' ;
			break ;
		}
		iter++ ;
	}
}

int main()
{
	exec() ;


	solution() ;

}