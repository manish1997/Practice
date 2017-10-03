#include <bits/stdc++.h>
using namespace std;
#define ll long long
int A[1000];
ll lower_limit(int start, int end, ll val){
    while(start<=end){
        int mid=(start+end)>>1;
        if(A[mid]>=val) end=mid-1;
        else start=mid+1;
    }
    return end+1;
}
ll upper_limit(int start, int end, ll val){
    while(start<=end){
        int mid=(start+end)>>1;
        if(A[mid]<=val) start=mid+1;
        else end=mid-1;
    }
    return start-1;
}
int main(){
  int n; cin >> n; //less than equal to 1000
  for(int i=0; i<n; i++) cin >> A[i];
  int val; cin >> val; // to find limit for
  cout << upper_limit(0,n,val) << endl; //-1 if all are greater than given value.. last (n-1)
  cout << lower_limit(0,n,val) << endl; //n if all are less than given value.. last (0)
  return 0;
}
