#include<iostream>
using namespace std;

int main(){
	int x;
	int n=1, m;
	int i, j;
	
	cin>>x;
	
	m=x;
	
	for(i=0; i<x; ++i){
		for(j=0; j<n; ++j)
			cout<<'.';
		for(j=0; j<2*m-1; ++j)
			cout<<'*';
		for(j=0; j<n; ++j)
			cout<<'.';
		cout<<endl;
		
		++n, --m;
	}
	return 0;
}
