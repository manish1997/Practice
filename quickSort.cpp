#include <bits/stdc++.h>
#include <cmath>
#include <vector>
using namespace std;

void quickSort(vector<int> &A, int start, int end){
	if(end<=start){
		return;
	};
	int pivot=end;
	int k=start;
	for(int i=start; i<end; i++){
	    if(A[i]<A[pivot]) {
	        swap(A[i], A[k]);
	        k++;
	    };
	};
	swap(A[pivot], A[k]);
	quickSort(A, start, k-1);
	quickSort(A,k+1, end);
	return;
};
int main() {
	vector<int> V;
	for(int i=0; i<10; i++) {
		V.push_back((rand()%30+100));
		cout << V[V.size()-1] << " ";
	};
	cout << endl;
	quickSort(V,0,V.size()-1);

	for(int i=0; i<V.size(); i++) cout << V[i] << " ";
	return 0;
}
