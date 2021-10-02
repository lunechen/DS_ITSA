#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;

	while(cin >> s){
		int len=s.size();
		int flag=1;
		for (int i=0; i<len/2; i++){
			if (s[i]!=s[len-1-i]){
				flag=0;
				break;
			}
		}
		if (flag) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}