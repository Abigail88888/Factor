#include<bits/stdc++.h>
using namespace;
vector<int>Factor(vector<int>A, int n);
void Mostrarvector(vector<int>A);
int main(){
	int vector<int>A;
	int n;
	f=Factor(A,n);
	Mostrarvector(A);
	cout<<"Ingrese la cantidad de elementos del vector"<<endl;
	cin>>n;
	return 0;
}
vector<int>Factor(vector<int>A){
	for(i=0; i<=n; i++){
		if(n%i==0){
			A.push_back(i);
		}
	}
	return A;
}
void Mostrarvector(vector<int>A){
	int i;
	for(i=0; i<A.size(); i++){
		cout<<A[i]<<"/";
	}
	cout<<endl;
}
