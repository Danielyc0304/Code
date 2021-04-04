#include<iostream>
using namespace std;

int ans=0;

void merge(int *num, int left, int right){
    int tmp[right-left], L, R;
    int i;

    L=left;
    R=(left+right)/2+1;

    for(i=0; L<=(left+right)/2 && R<=right; ++i){
        if(num[L]<num[R]){
            tmp[i]=num[L];
            ++L;
        }

    }
}
int main(){
    
    return 0;
}