#include<iostream>
using namespace std;

int main(){
	int x;//x數字
	int n=1, m;//n, m運算
	int i, j;//i, j旗標
	
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
		
		++n, --m;//輸出結果
	}
	return 0;
}
/*
Input:
3
Output:
.*****.
..***..
...*...
*//*
Input:
4
Output:
.*******.
..*****..
...***...
....*....
*/