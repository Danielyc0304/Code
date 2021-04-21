#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

int main(){//Q11286 - Conformity
    map<string, int> com;//com同樣組合的次數
    int num1[5], n;//num1課程代號; n排列組合總數
    string num2;//num2排序後課程代號
    int c;//c計數
    int ans=0;//ans答案
    int i, j;//i, j旗標

    while(cin>>n){
        if(n==0)//如果n=0，結束執行
            break;
        for(i=0; i<n; ++i){
            for(j=0; j<5; ++j)
                cin>>num1[j];
            sort(num1, num1+5);//排序

            for(j=0; j<5; ++j)
                num2+=to_string(num1[j]);//轉換int為string
            com[num2]+=1;//在num2為索引的數值+1

            num2.clear();//初始化
        }
        map<string, int>::iterator it;//宣告迭代器
        for(it=com.begin(); it!=com.end(); ++it){
            if((*it).second>ans){//如果數值大於答案
                ans=(*it).second;
                c=0;
            }
            if((*it).second==ans)//如果數值等於答案
                ++c;
        }
        cout<<ans*c<<endl;//輸出結果

        com.clear();
        ans=0;//初始化
    }
    return 0;
}
/*
Input:
3
100 101 102 103 488
100 200 300 101 102
103 102 101 488 100
3
200 202 204 206 208
123 234 345 456 321
100 200 300 400 444
0
Output:
2
3
*/