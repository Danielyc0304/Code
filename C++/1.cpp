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
        else{
            tmp[i]=num[R];
            ++R;
            ans+=(left+right)/2-L+1;
        }
    }
    for(; L<=(left+right)/2; ++i){
        tmp[i]=num[L];
        ++L;
    }
    for(; R<=right; ++i){
        tmp[i]=num[R];
        ++R;
    }
    for(i=0; i<=right-left; ++i)
        num[i+left]=tmp[i];
}
void mergesort(int *num, int left, int right){
    if(left<right){
        mergesort(num, left, (left+right)/2);
        mergesort(num, (left+right)/2+1, right);
        merge(num, left, right);
    }
}
int main(){
<<<<<<< HEAD
    int num[10000], N;
    int i;

    cin>>N;

    for(i=0; i<N; ++i)
        cin>>num[i];
    mergesort(num, 0, N-1);

    cout<<ans<<endl;

=======
    
>>>>>>> dcbd0637ff40531cb1df271bcda65ccc057f5b4b
    return 0;
}