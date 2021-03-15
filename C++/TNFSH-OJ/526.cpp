#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	string n;
	int i;
	
	getline(cin, n);
	
	reverse(n.begin(), n.end());
	
	for(i=0; n[i]=='0'; ++i);
	n.erase(0, i);
	
	cout<<n<<endl;
	
	return 0;
}
