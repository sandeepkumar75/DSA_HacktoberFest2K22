#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
	int pow(int x, int n, int d);
};

ll M;
ll mod(ll x) {
	return (((x % M) + M) % M);
}

ll mul(ll x, ll y) {
	return mod(mod(x) * mod(y));
}

ll modPow(int a, int b) {
	ll res = 1;
	while (b) {
		if (b & 1)
			res = mul(a, res);
		a = mul(a, a);
		b >>= 1;
	}
	return res;
}


int Solution::pow(int x, int n, int d) {
	M = d;
	if (x == 0) return 0;
	if (n == 0) return 1LL;
	if (n == 1) return mod(x);
	return modPow(x, n);
}

int main() {
	Solution ob;
	int x, n, d; cin >> x >> n >> d;
	cout << ob.pow(x, n, d) << '\n';
	return 0;
}
