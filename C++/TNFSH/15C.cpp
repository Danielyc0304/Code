#include<iostream>
using namespace std;

int main(){
    int grade[201], N;
    int sum=0, max=0, min=100;
    int i;

    cin>>N;

    for(i=0; i<N; ++i){
        cin>>grade[i];

        sum+=grade[i];

        if(grade[i]>max)
            max=grade[i];
        if(grade[i]<min)
            min=grade[i];
    }
    cout<<sum<<endl<<sum/N<<endl<<max<<endl<<min<<endl;

    return 0;
}