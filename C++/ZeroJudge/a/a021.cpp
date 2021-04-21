#include<iostream>
#include<sstream>
using namespace std;

int tmpi1, tmpi2;//tmpi1, tmpi2暫存定位點
string ans;//ans答案

void addition(char a[]){//加法; a算式
    stringstream ss;//ss字串串流
    string num3;//num3數字
    int s=0, num1, num2;//s計算值; num1, num2數字
    int i;//i旗標

    for(i=1; tmpi1-i>-1 && tmpi2-i>tmpi1+2; ++i){//處理相同位數
        ss<<a[tmpi1-i];
        ss>>num1;
        ss.clear();

        ss<<a[tmpi2-i];
        ss>>num2;
        ss.clear();

        num1+=num2+s;
        s=num1/10;
        num1%=10;

        ss<<num1;
        ss>>num3;
        ss.clear();

        ans.insert(0, num3);
    }
    for(; (tmpi1-i>-1 || tmpi2-i>tmpi1+2) || s!=0; ++i){//處理剩餘位數或尚有進位
        if(tmpi1-i>-1)
            ss<<a[tmpi1-i];
        else if(tmpi2-i>tmpi1+2)
            ss<<a[tmpi2-i];
        else
            num1=0;
        if(s!=0){
            ss>>num1;
            ss.clear();

            num1+=s;
            s=num1/10;
            num1%=10;

            ss<<num1;
        }
        ss>>num3;
        ss.clear();

        ans.insert(0, num3);
    }
}
void Subtraction(char a[]){//減法; a算式
    stringstream ss;//ss字串串流
    string num3;//num3數字
    int s=0, c=0, num1, num2;//s計算值; c判斷; num1, num2數字
    int i;//i旗標

    if(tmpi1==tmpi2-tmpi1-3)//同位數時判斷大小
		for(i=0; a[i]!=' '; ++i){
			ss<<a[i];
			ss>>num1;
			ss.clear();
			
			ss<<a[tmpi1+i+3];
			ss>>num2;
			ss.clear();
			
			if(num1>num2)
				break;
			else if(num1<num2){
				c=1;
				
				break;
			}
		}
	for(i=1; tmpi1-i>-1 && tmpi2-i>tmpi1+2; ++i){//處理相同位數
		if(tmpi1>=tmpi2-tmpi1-3 && c==0){
			ss<<a[tmpi1-i];
			ss>>num1;
			ss.clear();
			
			ss<<a[tmpi2-i];
			ss>>num2;
		}
		else{
			ss<<a[tmpi2-i];
			ss>>num1;
			ss.clear();
			
			ss<<a[tmpi1-i];
			ss>>num2;
		}
		ss.clear();
		
		num1-=num2+s;
		if(num1<0){
			s=1;
			num1+=10;
		}
		else
			s=0;
		ss<<num1;
		ss>>num3;
		ss.clear();
		
		ans.insert(0, num3);
	}
	for(; tmpi1-i>-1 || tmpi2-i>tmpi1+2; ++i){//處理剩餘位數
		if(tmpi1-i>-1)
			ss<<a[tmpi1-i];
		else
			ss<<a[tmpi2-i];
		if(s!=0){
			ss>>num1;
			ss.clear();
			
			num1-=s;
			if(num1<0){
				s=1;
				num1+=10;
			}
			else
				s=0;
			ss<<num1;
		}
		ss>>num3;
		ss.clear();
		
		ans.insert(0, num3);
	}
	for(i=0; ans[i]=='0'; ++i);
	ans.erase(0, i);
	
	if(ans[0]=='\0')
		ans='0';
	else if(tmpi1<tmpi2-tmpi1-3 || (tmpi1==tmpi2-tmpi1-3 && c==1)){
		num3='-';
		ans.insert(0, num3);
	}
}
void multiplication(char a[]){//乘法; a算式
    stringstream ss;//ss字串串流
    string num3;//num3數字
    int nump[tmpi2-3]={0}, s=0, num1, num2;//nump數字; s計算值; num1, num2數字
    int i, j;//i, j旗標

    for(i=1; tmpi1-i>-1; ++i){
        ss<<a[tmpi1-i];
        ss>>num1;
        ss.clear();

        for(j=1; tmpi2-j>tmpi1+2; ++j){
            ss<<a[tmpi2-j];
            ss>>num2;
            ss.clear();

            nump[i+j-2]+=num1*num2;
        }
    }
    for(i=0; i<tmpi2-3; ++i){
        nump[i]+=s;
        s=nump[i]/10;
        nump[i]%=10;

        ss<<nump[i];
        ss>>num3;
        ss.clear();

        ans.insert(0, num3);
    }
    for(i=0; ans[i]=='0'; ++i);
    ans.erase(0, i);
}
void division(char a[]){//除法; a算式
    stringstream ss;//ss字串串流
    string num3;//num3數字
    int numq[tmpi1], ansq[tmpi1]={0}, s=0, c=0, num1, num2;//numq數字; ansq答案; s計算值; c判斷; num1, num2數字
    int i, j;//i, j旗標

    if(tmpi1==tmpi2-tmpi1-3)//位數相同時判斷大小
        for(i=0; a[i]!=' '; ++i){
            ss<<a[i];
            ss>>num1;
            ss.clear();

            ss<<a[tmpi1+i+3];
            ss>>num2;
            ss.clear();

            if(num1>num2)
                break;
            else if(num1<num2){
                c=1;

                break;
            }
        }
    if(tmpi1>=tmpi2-tmpi1-3 && c==0){
        for(i=0; i<tmpi1; ++i){
            ss<<a[i];
            ss>>numq[i];
            ss.clear();
        }
        for(i=0; i<2*tmpi1-tmpi2+4; ++i){//做tmpi1-(tmpi2-tmpi1-3)+1=第一個數字位數-第二個數字位數+1次
            while(c==0){//如果同位數被除數大於除數
                while(i>0 && numq[i-1]!=0){
                    for(j=0; j<tmpi2-tmpi1-2; ++j){//如果前一位不為0
                        if(j<tmpi2-tmpi1-3){
                            ss<<a[tmpi2-j-1];
                            ss>>num1;
                            ss.clear();
                        }
                        else//處理借位情況
                            num1=0;
                        numq[tmpi2-tmpi1+i-j-4]-=num1+s;
                        if(numq[tmpi2-tmpi1+i-j-4]<0){
                            s=1;
                            numq[tmpi2-tmpi1+i-j-4]+=10;
                        }
                        else
                            s=0;
                    }
                    ++ansq[i];
                }
                for(j=0; j<tmpi2-tmpi1-3; ++j){//判斷相同位數被除數和除數的大小
                    ss<<a[tmpi1+j+3];
                    ss>>num1;
                    ss.clear();

                    if(numq[i+j]>num1)
                        break;
                    else if(numq[i+j]<num1){
                        c=1;

                        break;
                    }
                }
                if(c==0){
                    for(j=0; j<tmpi2-tmpi1-3; ++j){
                        ss<<a[tmpi2-j-1];
                        ss>>num1;
                        ss.clear();

                        numq[tmpi2-tmpi1+i-j-4]-=num1+s;
                        if(numq[tmpi2-tmpi1+i-j-4]<0){
                            s=1;
                            numq[tmpi2-tmpi1+i-j-4]+=10;
                        }
                        else
                            s=0;
                    }
                    ++ansq[i];
                }
            }
            c=0;
        }
        for(i=0; i<2*tmpi1-tmpi2+4; ++i){
            ss<<ansq[2*tmpi1-tmpi2-i+3];
            ss>>num3;
            ss.clear();

            ans.insert(0, num3);
        }
    }
    else
        ans='0';
}
int main(){//大數運算
    char a[501];//a算式
    int i;//i旗標

    cin.get(a, sizeof(a));

    for(i=0; a[i]!=' '; ++i);
    tmpi1=i;
    for(i+=3; a[i]!='\0'; ++i);
    tmpi2=i;

    switch(a[tmpi1+1]){
        case '+': addition(a); break;
        case '-': Subtraction(a); break;
        case '*': multiplication(a); break;
        default: division(a);
    }
    cout<<ans<<endl;//輸出答案

    return 0;
}
/*
Input:
2222222222222222222222222 + 1111111111111111111111111
Output:
3333333333333333333333333
*//*
Input:
2222222222222222222222222 - 1111111111111111111111111
Output:
1111111111111111111111111
*//*
Input:
2222222222222222222222222 * 1111111111111111111111111
Output:
2469135802469135802469135308641975308641975308642
*//*
Input:
2222222222222222222222222 / 1111111111111111111111111
Output:
2
*/