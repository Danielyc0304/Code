#include<iostream>
using namespace std;

int GCD(int a, int b){
	if(b==0)
		return a;
	return GCD(b, a%b);
}
int main(){
	int T, a, b;
	int i;
	
	cin>>T;
	
	for(i=0; i<T; ++i){
		cin>>a>>b;		
		cout<<GCD(a, b)<<endl;
	}
	return 0;
}
