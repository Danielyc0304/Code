I=int(input('淨利潤: '))#I利潤
mon=[1000000, 600000, 400000, 200000, 100000, 0]#mon利潤間距
rat=[0.01, 0.015, 0.03, 0.05, 0.075, 0.1]#提成
ans=0#ans答案

for i in range(0, 6):
    if I>mon[i]:
        print((I-mon[i])*rat[i])#輸出間距獎金

        ans+=(I-mon[i])*rat[i]
        I=mon[i]
print(ans)#輸出總獎金
'''
Input:
淨利潤: 120000
Output:
1500.0
10000.0
11500.0
'''