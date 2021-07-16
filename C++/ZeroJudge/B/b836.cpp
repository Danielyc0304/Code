#include<iostream>
using namespace std;

int main(){//kevin戀愛攻略系列題-2 說好的霸王花呢??
    long int n, m;//n花瓣數; m每次增加花瓣數
    int i;//i旗標

    while(cin>>n>>m){
        if(m!=0)
            for(i=1; n>0; i+=m)
                n-=i;
        if(n==0 || m==0)
            cout<<"Go Kevin!!\n";
        else
            cout<<"No Stop!!\n";
    }
    return 0;
}
/*
Input:
9 2
Output:
Go Kevin!!
*/