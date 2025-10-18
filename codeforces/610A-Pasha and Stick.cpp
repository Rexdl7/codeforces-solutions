#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n; cin >> n; // length of th stick
	if(n%2 != 0)// if odd say no
	{
		cout << 0;
		return 0; // terminate program here
	}
	// 2(l+b) = perimeter -> n, => l+b = n/2
	n = n/2;
	int ans = n-1; // no of ways
	cout << ans/2; // kyoki unique cases count honge only
	return 0;
}