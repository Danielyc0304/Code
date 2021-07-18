#include<iostream>
#include<cmath>
using namespace std;

int main(){//勘根定理
    int a, b, c, d, e, f;//a, b, c, d, e, f係數
    bool c1=false;//c判斷
    int i;//i旗標

    cin>>a>>b>>c>>d>>e>>f;

    if(a==0 && b==0 && c==0 && d==0 && e==0 && f==0)
        cout<<"Too many... = =\"\n";
    else{
        for(i=-36; i<=36; ++i){//-2147483647<=x^6<=2147483647 --> 大約-36<=x<=36
            if(a*pow(i, 5)+b*pow(i, 4)+c*pow(i, 3)+d*pow(i, 2)+e*i+f==0){//f(i)=0
                cout<<i<<' '<<i<<endl;

                c1=true;
            }
            else if((a*pow(i, 5)+b*pow(i, 4)+c*pow(i, 3)+d*pow(i, 2)+e*i+f)*(a*pow(i+1, 5)+b*pow(i+1, 4)+c*pow(i+1, 3)+d*pow(i+1, 2)+e*(i+1)+f)<0 && i<36){//f(i)*f(i+1)<0
                cout<<i<<' '<<i+1<<endl;

                c1=true;
            }
        }
        if(c1==false)
            cout<<"N0THING! >\\\\\\<\n";
    }
    return 0;
}
/*
Input:
0 0 6 -25 -29 20
Output:
-2 -1
0 1
5 5
*/