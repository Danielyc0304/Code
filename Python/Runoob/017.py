import string

a=input('請輸入一個字符串:\n')
ans1=0
ans2=0
ans3=0
ans4=0

for i in a:
    if i.isalpha(): ans1+=1
    elif i.isspace(): ans2+=1
    elif i.isdigit(): ans3+=1
    else: ans4+=1
print('char = %d,space = %d,digit = %d,others = %d' %(ans1, ans2, ans3, ans4))
'''
Input:
請輸入一個字符串:
123runoobc  kdf235*(dfl
Output:
char = 13,space = 2,digit = 6,others = 2
'''