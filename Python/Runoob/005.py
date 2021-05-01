num=[]#num數字

for i in range(3):
    a=int(input('integer:\n'))
    num.append(a)
num.sort()#排序

print(num)#輸出排序結果
'''
Input:
integer:
8
integer:
5
integer:
6
Output:
[5, 6, 8]
'''