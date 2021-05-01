a=int(input('輸入分數:\n'))#a分數

if a>=90:
    grade='A'
elif a>=60:
    grade='B'
else:
    grade='C'
print('%d 屬於 %s' %(a, grade))#輸出結果
'''
Input:
輸入分數:
89
Output:
89 屬於 B
'''