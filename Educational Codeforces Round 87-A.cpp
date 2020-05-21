// link soal: https://codeforces.com/contest/1354/problem/A
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

#define REP(i,a,n) for(ll i=a;i<=n;i++)
#define ll long long

void solve()
{
	ll a,b,wakeup; long double c,d;
	cin >> a >> b >> c >> d;
	if (b>=a)
	{
		cout << b << "\n";
	}
	else 
	{
		if (c>d){
		long double p = ((a-b)/(c-d));
		ll k = ceil(p);
		wakeup = b + k*((c));
		cout << wakeup << "\n";
	}	
		else
		{
			cout << "-1\n";
		}
	}
	
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)
	solve();

return 0;
}
