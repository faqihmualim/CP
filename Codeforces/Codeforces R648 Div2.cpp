// link soal: https://codeforces.com/problemset/problem/1365/A
#include <bits/stdc++.h>

#define forian(i,a,n) for(ll i=a;i<=n;i++)
#define pb push_back
#define popb pop_back
#define ll long long
#define Faqih using
#define itu namespace
#define Ganteng_Titik std; 
Faqih itu Ganteng_Titik
//int N; int a=0;
//int arr[110];

void test_case()
{
	int n,m; // n for row, m for column
	cin >> n >> m;
	int arr[n][m];
	// This Loop Insert the vaue into array
	for (int i=0; i<n;i++){
		for (int j=0;j<m;j++){
			cin >> arr[i][j];
		}
	}
	int b=0;
	// This loop counts the number of row which have 0 sum value
	for (int p=0; p<n;p++){
		int sum_row =0;
		for (int q=0;q<m;q++){
			sum_row = sum_row + arr[p][q];
		}
		if (sum_row == 0){
			b = b + 1;
		}
	}
	int a=0;
	// This loop counts the number of column which have 0 sum value
	for (int k=0;k<m;k++){
		int sum_column =0;
		for (int y=0; y<n;y++){
			sum_column = sum_column + arr[y][k];
		}
		if (sum_column == 0){
			a++;
		}
	}
	// count the minimum of column and row which have 0 sum value
	int best;
	best = min(a,b);
	// if the "best value" is 0 or, divides by 2, cout << "Vivek", else cout << "Ashis"
	if (best ==0){
		cout << "Vivek\n";
	}
	else if (best > 0 && best%2 ==0){
		cout << "Vivek\n";
	}
	else{
		cout << "Ashish\n";
	}
}
	
int main() // Main Program for Codeforces
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	test_case();
return 0;
}
