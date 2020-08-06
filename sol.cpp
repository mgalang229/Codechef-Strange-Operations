#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array;

const int mxN=1e3;
int a[mxN], n, k;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		int sum=0;
		for(int i=0; i<n; ++i) {
			cin >> a[i];
			sum+=a[i];
		}
		if(sum%2==0) {
			if(k==1)
				cout << "odd";
			else
				cout << "even";
		} else 
			cout << "even";
		cout << "\n";
	}
}
