// Faqih Mualim ITB Bandung --> Jakarta
// Template for Competitive Programming
// Pemograman Kompetitif Dasar
// Judul soal: Seleksi Olimpiade
// Link Soal: https://tlx.toki.id/courses/competitive/chapters/01/problems/A
#include <bits/stdc++.h>
#include <string>
#include <cstdio>
#include <cmath>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <ext/pb_ds/assoc_container.hpp>

#define endl "\n"
#define pb push_back
#define popb pop_back
#define ll long long
#define REPPLUS(i,a,n) for(ll i=a;i<=n;i++)
#define REPMIN(i,a,n) for(ll i=a;i>=n;i--)
#define Faqih using
#define itu namespace
#define Ganteng_Titik std;
Faqih itu Ganteng_Titik
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int N,M;
int arr[100005];
int mat[100][100];

void test_case()
{
	cin >> N >> M;
	string peserta_lulus;
	string peserta[100];
	cin >> peserta_lulus;
	int soal1, soal2, soal3;
	int pro1[100], pro2[100], pro3[100];
	pro1[0] =0;
	pro2[0] =0;
	pro3[0] =0;
	string peringkat[100];
	REPPLUS(j,1,N){                     // Memasukkan ID Peserta serta nilai2nya di setiap Soal
		cin >> peserta[j];
		peringkat[j] = peserta[j];
		cin >> pro1[j] >> pro2[j] >> pro3[j];
	}
	REPPLUS(k,1,N) {					// Mengurutkan Ranking Peserta berdasarkan Nilai Soal Nomor 3
		REPPLUS(z,1,N-1){
			if (pro3[z+1] > pro3[z]) {
				swap(peringkat[z+1], peringkat[z]);
			} 
		}
	}
	REPPLUS(k,1,N) {					// Mengurutkan Ranking Peserta berdasarkan Nilai Soal Nomor 2
		REPPLUS(z,1,N-1){
			if (pro2[z+1] > pro2[z]) {
				swap(peringkat[z+1], peringkat[z]);
			} 
		}
	}
	REPPLUS(k,1,N) {					// Mengurutkan Ranking Peserta berdasarkan Nilai Soal Nomor 1
		REPPLUS(z,1,N-1){
			if (pro1[z+1] > pro1[z]) {
				swap(peringkat[z+1], peringkat[z]);
			} 
		}
	}
	// Semua Peserta sudah terurut Rankingnya berdasarkan deskripsi Soal
	// Selanjutnya tinggal mencari apakah di antara M siswa yang lulus dari N siswa ada peserta_lulus
	int count = 0;
	REPPLUS (k,1,M) {
		if (peringkat[k]== peserta_lulus)
		count++;
	}
	if (count ==0){
		cout << "TIDAK\n";
	}
	else {
		cout << "YA\n";
	}
	
}
	
int main() // Main Program for Codeforces
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	while (T--)
		test_case();
return 0;
}
