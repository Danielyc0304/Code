#include<iostream>
using namespace std;

int main(){
    int people[45], a, b, c;//people出缺席; a全班人數; b出席人數; c出席人
    int i;//i旗標

    cin>>a>>b;

    for(i=1; i<=b; ++i){
        cin>>c;

        people[c]=1;
    }
    for(i=1; i<=a; ++i)
        if(people[i]==0)
            cout<<i<<' ';
    cout<<endl;//輸出缺席人

    return 0;
}
/*
Input:
10 
8
10 4 2 3 5 8 9 7
Output:
1 6
*//*
Input:
5
2
4 2
Output:
1 3 5
*/