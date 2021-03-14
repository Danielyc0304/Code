#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> num;
    vector<int> tmp;
    int N, act, a;
    int dir[6][3]={{0, -1}, {-1, 0}, {0, 1}, {1, 0}, {0, -1}};
    int i, j;

    cin>>N>>act;

    for(i=0; i<N; ++i){
        for(j=0; j<N; ++j){
            cin>>a;
            tmp.push_back(a);
        }
        num.push_back(tmp);
        tmp.clear();
    }
    i=N/2, j=N/2;
    while(1){
        cout<<num[i][j];

        num[i][j]=-1;
        i+=dir[act][0], j+=dir[act][1];

        if(i==-1 || j==-1)
            break;
        if(num[i+dir[act+1][0]][j+dir[act+1][1]]!=-1){
            ++act;

            if(act==4)
                act=0;
        }
    }
    cout<<endl;
    
    return 0;
}