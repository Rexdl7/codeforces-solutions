#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
	int n; cin >> n; // number of problems
	int p, v, t; // three friends and thier respective capability to solve the problems
	int canSolve = 0;
	for(int i = 0; i<n; i++)
	{
		cin >> p >> v >> t;
		if(p+v+t >= 2)
		{
			canSolve++;
		}
		else
		{
			continue;
		}
	}
	cout << canSolve;
	return 0;
}
