#include<iostream>
using namespace std;

int main(){
    string food;
    int a, x, y, z, w, n, m;
    int c=0;
    int i, j;

    cin>>a;

    for(i=0; i<a; ++i){
        cin>>x>>y>>z>>w>>n>>m;
        cin.get();
        getline(cin, food);

        for(j=0; j<food.length(); j+=2){
            m-=c*n;
            
            if(m<=0){
                cout<<"bye~Rabbit\n";

                break;
            }
            if(food[j]=='1')
                m+=x;
            else if(food[j]=='2')
                m+=y;
            else if(food[j]=='3')
                m-=z;
            else if(food[j]=='4'){
                m-=w;
                ++c;
            }
            if(m<=0){
                cout<<"bye~Rabbit\n";

                break;
            }
        }
        if(m>0)
            cout<<m<<'g'<<endl;
        c=0;
    }
    return 0;
}