// https://atcoder.jp/contests/abc168/submissions/14120958
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
const double pi = 3.14159265359;
void test_case()
{
	double a,b,h,m;
	double c;
	cin >> a >> b >> h >> m;
	double dif_angle,sudut_jam,sudut_menit;
	double (sudut_jam = double (h*30)+(double(m/2)));
	double (sudut_menit = double (m*6));
	double (dif_angle = abs(sudut_jam - sudut_menit));
//	printf("%.20f\n", dif_angle);
	// Mencari Sisi Ketiga dari Jarum Jam
	c = sqrt((a*a) +(b*b) - (2*a*b*cos(pi*dif_angle/180)));
	printf("%.20f\n", c);
}

int main() // Main Program for At Coder
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	test_case();
return 0;
}
