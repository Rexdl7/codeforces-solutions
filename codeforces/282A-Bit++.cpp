#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n, x(0); cin >> n;
	string str;
	while(n--)
	{
		cin >> str;
		if(str[1] == '+'){
			++x;
		}
		else{
			--x;
		}
	}
	cout << x;
}