def fibonacci(a):#斐波那契數列; a個數
    fib=[1, 1]

    for i in range(2, a):
        fib.append(fib[i-1]+fib[i-2])
    return fib
print(fibonacci(10))#輸出斐波那契數列
'''
Output:
[1, 1, 2, 3, 5, 8, 13, 21, 34, 55]
'''