// https://atcoder.jp/contests/abc168/tasks/abc168_b
#include <bits/stdc++.h>
#include <math.h>
#define forian(i,a,n) for(ll i=a;i<=n;i++)
#define pb push_back
#define popb pop_back
#define ll long long
#define Faqih using
#define itu namespace
#define Ganteng_Titik std; 
Faqih itu Ganteng_Titik

void test_case()
{
	string kata;
	int k;
	cin >> k;
	cin >> kata;
	if (kata.length() <= k ){
		cout << kata << "\n";
	}
	else {
		for (int i=0; i<k;i++){
			cout << kata[i];
		}
		cout << "...\n";
	}
}
	
int main() // Main Program for At Coder
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	test_case();
return 0;
}

