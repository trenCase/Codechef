#include <bits/stdc++.h>
using namespace std ;

#define ll long long
#define m 1000000007




void exec()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;

	freopen("output.txt", "w", stdout);
#endif
}



void solution()
{
	int cx, cy, cs ;
	cx = cy = cs = 0 ;

	char board[3][3] ;

	for (int i = 0 ; i < 3 ; i++)
	{
		for (int j = 0 ; j < 3 ; j++)
		{
			char c ;
			cin >> c ;
			board[i][j] = c ;
			if (c == 'X') cx++ ;
			else if (c == 'O') cy++ ;
			else if (c == '_') cs++ ;
		}
	}

	int wx, wy ;
	wx = wy = 0 ;

	for (int i = 0 ; i < 3 ; i++)
	{
		if (board[i][0] == board[i][1] and board[i][1] == board[i][2])
		{
			if (board[i][1] == 'X')
			{
				wx++ ;
			}
			else if (board[i][1] == 'O')
			{
				wy++ ;
			}

		}
	}

	for (int i = 0 ; i < 3 ; i++)
	{
		if (board[0][i] == board[1][i] and board[1][i] == board[2][i])
		{
			if (board[1][i] == 'X')
			{
				wx++ ;
			}
			else if (board[1][i] == 'O')
			{
				wy++ ;
			}

		}
	}

	if (board[1][1] == board[0][0] and board[1][1] == board[2][2])
	{
		if (board[1][1] == 'X')
		{
			wx++ ;
		}
		else if (board[1][1] == 'O')
		{
			wy++ ;
		}
	}

	if (board[1][1] == board[0][2] and board[1][1] == board[2][0])
	{
		if (board[1][1] == 'X')
		{
			wx++ ;
		}
		else if (board[1][1] == 'O')
		{
			wy++ ;
		}
	}


	if ((wx > 0  and wy > 0 ) or (cx < cy) or (cx - cy > 1))
	{
		cout << 3 ;
	}
	else if (wy == 1 and wx == 0 and cy == cx)
	{
		cout << 1 ;
	}
	else if (wx == 1 and wy == 0 and cx > cy)
	{
		cout << 1;
	}
	else if (wx == 2 and wy == 0 and cs == 0)
	{
		cout << 1;
	}
	else if ((wx + wy == 0) and cs == 0)
	{
		cout << 1;
	}
	else if ((wx + wy == 0) and cs > 0)
	{
		cout << 2 ;
	}
	else
	{
		cout << 3 ;
	}



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



}