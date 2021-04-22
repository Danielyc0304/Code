a=int(input('year:\n'))#a年
b=int(input('month:\n'))#b月
c=int(input('day:\n'))#c日
mon=[0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334]#mon累計天數
lea=0#lea是否為閏年

if 0<b<=12:
    ans=mon[b-1]
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