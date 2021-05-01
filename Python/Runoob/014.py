def factorization(a):#質因數分解; a數字
    print('{} = '.format(a), end=' ')#相等於print('%d = ' %a, end=' ')

    if not isinstance(a, int) or a<=0:
        print('請輸入一個正確的數字 !')
    elif a in [1]:#相等於elif a==1
        print('{}'.format(a))#相等於print(a)
    while a not in [1]:#相等於while a!=1
        for i in range(2, a+1):
            if a%i==0:
                a//=i

                if a==1:
                    print(i)
                else:
                    print('{} *'.format(i), end=' ')#相等於print('%d *' %i, end=' ')
                break
factorization(90)#質因數分解
factorization(100)#質因數分解
'''
Output:
90 =  2 * 3 * 3 * 5
100 =  2 * 2 * 5 * 5
'''