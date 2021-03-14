#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int grade[101], n;
    int max=0, maxi, c1=0, c2=0, c3=0, c4=0, c5=0;
    double sum=0;
    int i;

    cin>>n;

    for(i=1; i<=n; ++i){
        cin>>grade[i];

        sum+=grade[i];

        if(grade[i]>max){
            max=grade[i];
            maxi=i;
        }

        if(grade[i]>=90)
            ++c1;
        else if(grade[i]>=80)
            ++c2;
        else if(grade[i]>=70)
            ++c3;
        else if(grade[i]>=60)
            ++c4;
        else
            ++c5;
    }
    cout<<fixed<<setprecision(2)<<sum/n<<endl;
    cout<<maxi<<endl;

    cout<<"A:";
    for(i=0; i<c1; ++i)
        cout<<'*';
    cout<<endl;

    cout<<"B:";
    for(i=0; i<c2; ++i)
        cout<<'*';
    cout<<endl;

    cout<<"C:";
    for(i=0; i<c3; ++i)
        cout<<'*';
    cout<<endl;

    cout<<"D:";
    for(i=0; i<c4; ++i)
        cout<<'*';
    cout<<endl;

    cout<<"E:";
    for(i=0; i<c5; ++i)
        cout<<'*';
    cout<<endl;

    return 0;
}