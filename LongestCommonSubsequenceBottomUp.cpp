//I am doing DP problems I have done in bottom up manner these days. this is one of them.
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define si(n) scanf("%d",&n)
#define sll(n) scanf("%lld",&n)
#define pin(n) printf("%dn",n)
#define plln(n) printf("%lldn",n)
#define pis(n) printf("%d ",n)
#define plls(n) printf("%lld ",n)
#define rep(i, start, end) for(ll i=start; i<end; i++)
#define repDown(i, start, end) for(ll i=start; i>=end; i--)
#define P pair<int,int>
#define PP pair<P,ll>
#define mod 1000000007
#define MAX 500005
#define s second
#define f first
#define newLine printf("n")
#define mem(A,i) memset(A, i, sizeof(A))

int LCSBottomUp(string A, string B){
	int a=A.length();
	int b=B.length();
	vector<vector<int> > DP(a+2,vector<int>(b+2,0));
	repDown(i,a-1,0){
		repDown(j,b-1,0){
			// cout << i << " " << j << endl;
			if(A[i]==B[j]) DP[i][j]=1+DP[i+1][j+1];
			else{
				DP[i][j]=max(DP[i+1][j], DP[i][j+1]);
			}
			// cout << DP[i][j] << endl;
		}
	}
	return DP[0][0];
}

int main(){;
	string A,B;
	cin >> A >> B;
	cout << LCSBottomUp(A,B) <<endl;
	return 0;
}
