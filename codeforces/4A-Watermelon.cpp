#include <iostream>
using namespace std;

int main(void){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int w; cin >> w;
    if(w%2 == 0 && w != 2){
        cout << "Yes";
    }
    else{
        cout << "NO";
    }
    return 0; 
}
