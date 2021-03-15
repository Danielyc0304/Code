#include<iostream>
#include<vector>
using namespace std;

vector<int> num[100001];
int n;
int mdis;

int DFS(int node){
	int dis, max1, max2;
	int i;

	if(num[node].size()==0)
		return 0;
	if(num[node].size()==1)
		return DFS(num[node][0])+1;
	for(i=0; i<num[node].size(); ++i){
		dis=DFS(num[node][i])+1;

		if(i==0)
			max1=dis;
		else if(i==1){
			if(dis>max1){
				max2=max1;
				max1=dis;
			}
			else
				max2=dis;
		}
		else{
			if(dis>=max1){
				max2=max1;
				max1=dis;
			}
			else if(dis>max2)
				max2=dis;
		}
	}
	mdis=max(mdis, max1+max2);

	return max1;
}
int main(){
	int a, b;
	int child[100001]={0};
	int rdis;
	int i;

	cin>>n;

	for(i=0; i<n-1; ++i){
		cin>>a>>b;
		num[a].push_back(b);
		child[b]=1;
	}
	for(i=0; child[i]!=0; ++i);

	rdis=DFS(i);
	mdis=max(mdis, rdis);

	cout<<mdis<<endl;

	return 0;
}