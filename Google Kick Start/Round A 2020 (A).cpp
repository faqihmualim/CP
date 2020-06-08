// https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ffc7/00000000001d3f56
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
//int N; int a=0;
//int arr[110];

void test_case()
{
	int N,B;
	int arr[100001];
	cin >> N; cin >> B;
	for (int i=0;i<N;i++){
		cin >> arr[i];
	}
	sort(arr,arr+N);
//	for (int i=0;i<N;i++){
//	cout << arr[i] << " ";
//	}
	int sum =0;
	for(int i=0;i<N;i++){
		if (B >=arr[i]){
			sum++;
		}
		B = B - arr[i];
	};
	cout << sum << "\n";
}
	
int main() // Main Program for Code Jam/Kick Start
{
	ios::sync_with_stdio(0);
	cin.tie(0);
//	cout.tie(false);
	int t;
	cin >> t;
	for (int i=1;i<=t;i++)
	{
	cout << "Case #" << i << ": ";
	test_case();
	}
// Type Your Body of Code Here
return 0;
}
