// link soal: https://codeforces.com/problemset/problem/282/A
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

#define forian(i,a,n) for(ll i=a;i<=n;i++)
#define pb push_back
#define popb pop_back
#define ll long long

//int N; int a=0;
//int arr[110];

void test_case()
{
	int N;
	cin >> N;
	int sum =0;
	string str;
	for (int i=1; i<=N;i++){
		cin >> str;
		if (str == "++X" || str =="X++"){
			sum ++;
		}
		if (str == "--X" || str == "X--"){
			sum-- ;
		}
	}
	cout << sum << "\n";
}

int main() // Main Program for Codeforces
{
	ios::sync_with_stdio(0);
	cin.tie(0);
//	int t;
//	cin >> t;
//	while (t--);
	test_case();
// Type Your Body of Code Here
return 0;
}
