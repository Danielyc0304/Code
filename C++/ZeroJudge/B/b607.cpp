#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> num;//num質數
int s=3;//s計算值
int j=1;//j旗標

void prime(int max){//建立質數表; max最大值//TODO TLE
    bool c=false;//c判斷
    int i;//i旗標

    num.push_back(2);//第一個質數為2

    for(; s<=max; s+=2){//執行到最大值，並以奇數執行
        for(i=0; i<j; ++i)
            if(s%num[i]==0){
                c=true;

                break;
            }
        if(c==false){
            num.push_back(s);
            ++j;
        }
        c=false;//初始化
    }
}
int main(){//Number Partition
    int n;//n數字
    bool c=false;//c判斷
    int s1, s2;//s1, s2計算值
    int ans[4];//ans答案
    int i, k;//i, k旗標

    while(cin>>n){
        if(n==0)
            break;
        prime(n);

        if(find(num.begin(), num.end(), n)!=num.end()){
            ans[0]=1;
            ans[1]=n;
        }
        else if(n%2==0){//n是偶數
            s1=n/2+(n/2%2-1);
            for(; find(num.begin(), num.end(), s1)==num.end(); s1+=2);

            for(i=find(num.begin(), num.end(), s1)-num.begin(); find(num.begin(), num.end(), n-num[i])==num.end(); --i);

            ans[0]=2;
            ans[1]=num[i];
            ans[2]=n-num[i];
        }
        else{//n是奇數
            if(find(num.begin(), num.end(), n-2)!=num.end()){//n-2是質數，拆成2+奇數
                ans[0]=2;
                ans[1]=num[0];
                ans[2]=n-num[0];
            }
            else{//n-2不是質數，拆成奇數+奇數+奇數
                if(n%3==0 && find(num.begin(), num.end(), n/3)!=num.end()){
                    ans[0]=3;
                    ans[1]=n/3;
                    ans[2]=n/3;
                    ans[3]=n/3;
                }
                else{
                    s1=n/3-(n/3%2-1);
                    for(i=0; i<n; i+=2){
                        if(find(num.begin(), num.end(), s1+i)!=num.end()){
                            i=find(num.begin(), num.end(), s1+i)-num.begin();

                            break;
                        }
                        else if(find(num.begin(), num.end(), s1-i)!=num.end()){
                            i=find(num.begin(), num.end(), s1-i)-num.begin();

                            break;
                        }
                    }
                    s1=(n-num[i])/2+((n-num[i])/2%2-1);
                    for(; find(num.begin(), num.end(), s1)==num.end(); s1+=2);

                    for(k=find(num.begin(), num.end(), s1)-num.begin(); find(num.begin(), num.end(), n-num[i]-num[k])==num.end(); --k);

                    ans[0]=3;
                    ans[1]=num[k];
                    ans[2]=num[i];
                    ans[3]=n-num[i]-num[k];
                }
            }
        }
        cout<<ans[0];
        for(i=1; i<=ans[0]; ++i)
            cout<<' '<<ans[i];
        cout<<endl;
    }
    return 0;
}
/*
Input:
49
6
12
0
Output:
2 2 47
2 3 3
2 5 7
*/