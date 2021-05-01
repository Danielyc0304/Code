import datetime

if __name__=='__main__':
    print(datetime.date.today().strftime('%d/%m/%Y'))#輸出今天日期

    a=datetime.date(1941, 1, 5)#創建一個日期
    print(a.strftime('%d/%m/%Y'))#輸出結果

    b=a+datetime.timedelta(days=1)#日期運算
    print(b.strftime('%d/%m/%Y'))#輸出結果

    c=a.replace(year=a.year+1)#日期替換
    print(c.strftime('%d/%m/%Y'))#輸出結果
'''
Output:
01/05/2021
05/01/1941
06/01/1941
05/01/1942
'''