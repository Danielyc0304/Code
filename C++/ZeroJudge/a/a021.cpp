#include<iostream>
#include<sstream>
using namespace std;

int tmpi1, tmpi2;
string ans;

void sum(char *a){
    stringstream ss;
    string num3;
    int s=0, num1, num2;
    int i;

    for(i=1; tmpi1-i>-1 && tmpi2-i>tmpi1+2; ++i){
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
    for(; (tmpi1-i>-1 || tmpi2-i>tmpi1+2) || s!=0; ++i){
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
void dif(char *a){
    stringstream ss;
    string num3;
    int s=0, num1, num2, c=0;
    int i;

    if(tmpi1==tmpi2-tmpi1-3)
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
	for(i=1; tmpi1-i>-1 && tmpi2-i>tmpi1+2; ++i){
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
	for(; tmpi1-i>-1 || tmpi2-i>tmpi1+2; ++i){
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
	for(i=0; ans[i]=='0'; ++i){}
	ans.erase(0, i);
	
	if(ans[0]=='\0')
		ans='0';
	else if(tmpi1<tmpi2-tmpi1-3 || (tmpi1==tmpi2-tmpi1-3 && c==1)){
		num3='-';
		ans.insert(0, num3);
	}
}
void pro(char *a){
    stringstream ss;
    string num3;
    int nump[tmpi2-3]={0}, s=0, num1, num2;
    int i, j;

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
    for(i=0; ans[i]=='0'; ++i){}
    ans.erase(0, i);
}
void quo(char *a){
    stringstream ss;
    string num3;
    int numq[tmpi1], ansq[tmpi1]={0}, s=0, num1, num2, c=0;
    int i, j;

    if(tmpi1==tmpi2-tmpi1-3)
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
        for(i=0; i<2*tmpi1-tmpi2+4; ++i){
            while(c==0){
                while(i>0 && numq[i-1]!=0){
                    for(j=0; j<tmpi2-tmpi1-2; ++j){
                        if(j<tmpi2-tmpi1-3){
                            ss<<a[tmpi2-j-1];
                            ss>>num1;
                            ss.clear();
                        }
                        else
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
                for(j=0; j<tmpi2-tmpi1-3; ++j){
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
int main(){
    char a[501];
    int i;

    cin.get(a, sizeof(a));

    for(i=0; a[i]!=' '; ++i){}
    tmpi1=i;
    for(i+=3; a[i]!='\0'; ++i){}
    tmpi2=i;

    if(a[tmpi1+1]=='+')
        sum(a);
    else if(a[tmpi1+1]=='-')
        dif(a);
    else if(a[tmpi1+1]=='*')
        pro(a);
    else
        quo(a);
    cout<<ans<<endl;

    return 0;
}