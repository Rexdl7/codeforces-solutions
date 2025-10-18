#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n; cin >> n;
	string words[n];
	for(int i=0; i<n; i++)
	{
		cin >> words[i];
		cout << "\n";
	}
	
	for(int i = 0; i<n; i++)
	{
		int len = words[i].length();
		if(len > 10)
		{
			cout << words[i][0] << len-2 << words[i][len-1];
		}
		else
		{
			cout << words[i];
		}
		cout << "\n";
	}
	return 0;
}
