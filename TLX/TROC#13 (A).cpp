// Toki Regular Open Contest #13 Problem (A) https://tlx.toki.id/problems/troc-13/A
#include <bits/stdc++.h>
#include <string>

#define endl "\n"
#define forian(i,a,n) for(ll i=a;i<=n;i++)
#define pb push_back
#define popb pop_back
#define ll unsigned long long
#define Faqih using
#define itu namespace
#define Ganteng_Titik std; 
Faqih itu Ganteng_Titik

void test_case()
{
	string str;
	int n;
	cin >> n;
	cin >> str;
	int i=0;
	for (int i =0; i<str.length(); i++){
		for (int j=i+1;j<=str.length();j++){
			if (str[i] != str[j]){
				cout << str[i];
				i = j;
			}
		}
	}
}
	
int main() // Main Program for Codeforces
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	test_case();
return 0;
}
