s1=1
s2=1

for i in range(1, 22):
    print('%12ld %12ld' %(s1, s2), end=' ')#輸出結果

    if i%3==0:
        print()
    s1+=s2
    s2+=s1
'''
Output:
           1           1            2           3            5           8 
          13          21           34          55           89         144 
         233         377          610         987         1597        2584 
        4181        6765        10946       17711        28657       46368 
       75025      121393       196418      317811       514229      832040 
     1346269     2178309      3524578     5702887      9227465    14930352 
    24157817    39088169     63245986   102334155    165580141   267914296 
'''