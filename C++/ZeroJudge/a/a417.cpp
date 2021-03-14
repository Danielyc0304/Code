#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

int main(){
    int T, N, M;
    int num[101][101]={0};
    int dir[5][3]={{0, 1}, {1, 0}, {0, -1}, {-1, 0}}, s=1;
    int i, j=0, k=0, l;

    cin>>T;

    for(i=0; i<T; ++i){
        cin>>N>>M;

        if(M==1){
            l=0;

            while(1){
                num[j][k]=s;
                ++s;

                if(num[j+dir[l][0]][k+dir[l][1]]!=0 || j+dir[l][0]==-1 || j+dir[l][0]==N || k+dir[l][1]==-1 || k+dir[l][1]==N){
                    ++l;

                    if(l==4)
                        l=0;
                    if(num[j+dir[l][0]][k+dir[l][1]]!=0)
                        break;
                }
                j+=dir[l][0], k+=dir[l][1];
            }
        }
        else{
            l=3;

            while(1){
                num[j][k]=s;
                ++s;

                if(num[j-dir[l][0]][k-dir[l][1]]!=0 || j-dir[l][0]==-1 || j-dir[l][0]==N || k-dir[l][1]==-1 || k-dir[l][1]==N){
                    --l;

                    if(l==-1)
                        l=3;
                    if(num[j-dir[l][0]][k-dir[l][1]]!=0)
                        break;
                }
                j-=dir[l][0], k-=dir[l][1];
            }
        }
        for(j=0; j<N; ++j){
            for(k=0; k<N; ++k)
                cout<<setw(5)<<num[j][k];
            cout<<endl;
        }
        memset(num, 0, sizeof(num));
        s=1, j=0, k=0;
    }
    return 0;
}