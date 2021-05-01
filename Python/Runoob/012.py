from sys import stdout
from math import sqrt

c1=0#c1判斷
c2=0#c2計數

for i in range(101, 201):
    a=int(sqrt(i))

    for j in range(2, a+1):
        if i%j==0:
            c1=1

            break
    if c1==0:
        print('%-4d' %i)#輸出質數
        
        c2+=1
        if c2%10==0:
            print()
    c1=0#初始化
print('The total is %d' %c2)#輸出質數總數
'''
Output:
101 
103 
107 
109 
113 
127 
131 
137 
139 
149 

151 
157 
163 
167 
173 
179 
181 
191 
193 
197 

199 
The total is 21
'''