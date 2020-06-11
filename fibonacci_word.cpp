// soal dari Hacker Rank, Fibonaci Word
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

string fibo(string a,string b,long long n){
	string c1 = a;
	string c2 = b;
	string tmp;
	if (n==0){
		return c1;
	} 
	else if (n==1){
		return c2;
	} 
	else {
	for (int i=2;i<=n;i++){
		tmp = c2;
		c2 = c1 + c2;
		c1 = tmp;
	}
	return c2;
	}
}

void test_case()
{
	string a,b,hasil;
	long long n;
	cin >> a >> b >> n;
	hasil = fibo(a,b,n-1);
	cout << hasil <<"\n";
	if (n==1){
		cout << a << "\n";
	}
	else if (n==2){
		cout << b << "\n";
	}
	else {
	cout << hasil[n-1] << "\n";
	}
}

int main() // Main Program for Codeforces
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)
	test_case();
// Type Your Body of Code Here
return 0;
}
