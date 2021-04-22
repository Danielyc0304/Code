for i in range(1, 85):#i=(m+n)/2, j=(m-n)/2
    if 168%i==0:
        j=168/i

        if i>j and i%2==0 and j%2==0:#由上得知i, j皆為偶數
            n=(i-j)/2
            x=n**2-100

            print(x)#輸出答案
'''
Output:
-99.0
21.0
261.0
1581.0
'''