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


	int x ;
	cin >> x ;

	int d = ceil(log(x) / log(2)) ;

	string s1 = bitset<64>(x).to_string() ;
	string a = bitset<64>(0).to_string() ;
	string b = bitset<64>(0).to_string() ;

	int f1 = s1.find('1')  ;
	a[f1] = '1' ;

	for (int iter = f1 + 1 ; iter < 64 ; iter++)
	{
		if (s1[iter] == '0')
		{
			a[iter] = '1' ;
			b[iter] = '1' ;
		}
		if (s1[iter] == '1')
		{
			a[iter] = '0' ;
			b[iter] = '1' ;
		}
	}


	unsigned long a1 = bitset<64>(a).to_ulong() ;
	unsigned long b1 = bitset<64>(b).to_ulong() ;

	ll ans = a1 * b1  ;

	cout << ans ;



}




int main()
{
	exec() ;



	ll test = 1  ;
	cin >> test ;

	while (test--)
	{
		solution() ;
		cout << '\n' ;

	}

	return 0 ;


}