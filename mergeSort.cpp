#include <bits/stdc++.h>
#include <cmath>
#include <vector>
using namespace std;

void merge(vector<int> A1, vector<int> A2, vector<int> &A){
	int k=0;
	int i=0,j=0;
	while(i<A1.size() && j<A2.size()){
		if(A1[i]<=A2[j]){
			A[k++]=(A1[i]);
			i++;
		}
		else{
			A[k++]=(A2[j]);
			j++;
		};
	};
	while(i<A1.size()){
		A[k++]=(A1[i]);
		i++;
	};
	while(j<A2.size()){
		A[k++]=(A2[j]);
		j++;
	};
};

void mergeSort(vector<int> &A){
	if(A.size()<2){
		return;
	};
	vector<int> A1;
	vector<int> A2;
	for(int i=0; i<(A.size()/2); i++) A1.push_back(A[i]);
	for(int i=(A.size()/2); i<A.size(); i++) A2.push_back(A[i]);
	mergeSort(A1);
	mergeSort(A2);
	merge(A1,A2, A);
};
int main() {
	vector<int> V;
	for(int i=0; i<100; i++) {
		V.push_back((rand()%1000));
		cout << V[V.size()-1] << " ";
	};
	cout << endl;
	mergeSort(V);

	for(int i=0; i<V.size(); i++) cout << V[i] << " ";
	return 0;
}
