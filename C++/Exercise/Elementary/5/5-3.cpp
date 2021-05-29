#include<iostream>
using namespace std;

int main(){//找出直角三角形
    int L, R;//L和的下限; R和的上限
    int i, j, k;//i, j, k旗標

    while(cin>>L>>R)
        for(i=1; i<R/2; ++i)
            for(j=i+1; j<R/2; ++j)
                for(k=j+1; k<R/2; ++k)
                    if(i+j+k>=L && i+j+k<=R)
                        if(i*i+j*j==k*k)
                            cout<<i<<' '<<j<<' '<<k<<endl;
    return 0;
}
/*
Input:
30 60
Output:
5 12 13
7 24 25
8 15 17
9 12 15
10 24 26
12 16 20
15 20 25
*/