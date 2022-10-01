/*
     ContestName     =   Shinchu_itachi
   " Walking on the road not taken with my own gutts.. "
*/


#include <bits/stdc++.h>
using namespace std ;



/*---------------------------------------------------------------------------------------------------------------------------------*/

const ll mod = 1e9 + 7 , mod0 = 998244353, mod1 = 1e9 + 9 ;
const ll N = 2e5 + 10  ;


vector<int> prefix_function(string s) {
	int n = s.size();
	vector<int> pi ( n , 0 );
	for ( int i = 1 ; i < n ; i ++) {
		int j = pi[i - 1];
		while ( j > 0 and s.at( i ) != s.at(j))
			j = pi[j - 1];

		if ( s.at(i) == s.at(j)) j ++ ;
		pi[i] = j;
	}

	return pi;
}

vector<int> z_function(string s) {
	int n = (int) s.length();
	vector<int> z(n );
	for (int i = 1, l = 0, r = 0; i < n; ++i) {
		if (i <= r)
			z[i] = min (r - i + 1, z[i - l]);
		while (i + z[i] < n && s[z[i]] == s[i + z[i]])
			++z[i];
		if (i + z[i] - 1 > r)
			l = i, r = i + z[i] - 1;
	}
	return z;
}

void findOcc ( string s , string pat) {
	int n = s.size();
	int m = pat.size();
	string ml = pat + "#" + s;
	vector<int> x = z_function( ml );

	for ( auto i : x ) cout << i << " " << endl;

	for ( int i = 0 ; i < x.size() ; i ++)
		if ( x.at(i) == pat.size())
			cout << i - pat.size() - 1 << endl;


	vector<int> lps = prefix_function( pat );
	int i = 0 , j = 0 ;

	while ( i < n ) {
		if ( s.at(i) == pat.at(j) ) i ++  , j ++ ;
		if ( j == m )  cout << i - j << endl , j = lps[j - 1] ;

		else if ( i < n and s.at( i ) != pat.at(j)) {
			if ( j != 0 ) j = lps[j - 1];
			else i = i + 1 ;
		}
	}


}

vector<int> stringMatch(string &str, string &pat) {
	vector<int> ans;
	int n = str.size();
	int m = pat.size();

	vector<int> lps = prefix_function( pat );


	int k = 0 , l = 0 ;

	while ( k < n ) {
		if ( str.at(k) == pat.at(l)) k ++ , l ++;
		if ( l == m ) ans.push_back(k - l) , l = lps[l - 1];
		else if ( k < n and str.at(k) != pat.at(l)) {
			if ( l != 0) l = lps[l - 1];
			else k = k + 1;
		}

	}

	return ans;
}

void solve() {
	string s , pat; cin >> s;
	//pat = s;
	vector<int> ans = stringMatch( s , s);
	// reverse( pat.begin() , pat.end());
	// vector<int> ans = prefix_function(pat);
	fout ( ans );
	cout << endl;
	// findOcc( s , pat) ;

}



inline void testcases() {
	int test = 1, testcase = 1 ;
	//cin >> test ;

	cout << setprecision(12) ;
	cerr << setprecision(8) ;
	while (test --) {
		// cout << "Case #" << testcase++ << ": ";
		solve () ;
	}
}





int main () {
	fastio();

#ifndef ONLINE_JUDGE
	// freopen("output.txt", "w", stdout);
	// freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
#endif

	auto start = high_resolution_clock::now();

	testcases();

	auto end = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(end - start);

	cerr << "Time : " << duration.count() / 1000 ;
}
