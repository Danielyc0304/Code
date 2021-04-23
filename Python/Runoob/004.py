a=int(input('year:\n'))#a年
b=int(input('month:\n'))#b月
c=int(input('day:\n'))#c日
lea=0#lea是否為閏年
ans=0#ans答案

if 1<=b<=12:
    for i in range(1, b):
        if i<=7:
            if i==2:
                ans+=28
            elif i%2==1:
                ans+=31
            else:
                ans+=30
        else:
            if i%2==0:
                ans+=31
            else:
                ans+=30#計算月份
else:
    print('data error')
ans+=c

if (a%4==0 and a%100!=0) or a%400==0:#如果是閏年
    lea=1
if lea==1 and b>2:#如果是閏年且過完二月
    ans+=1
print('it is the %dth day.' %ans)#輸出總天數
'''
Input:
year:
2015
month:
6
day:
7
Output:
it is the 158th day.
'''