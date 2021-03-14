#include<iostream>
using namespace std;

int main(){
	int K;
	
	cin>>K;
	
	if(K==3 || K==4 || K==5) cout<<"Spring!\n";
	else if(K==6 || K==7 || K==8) cout<<"Summer!\n";
	else if(K==9 || K==10 || K==11) cout<<"Autumn!\n";
	else cout<<"Winter!\n";

	return 0;
}
