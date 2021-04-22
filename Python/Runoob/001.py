for i in range(1, 5):
    for j in range(1, 5):
        for k in range(1, 5):
            if i!=j and i!=k and j!=k:#如果沒有重複數字
                print(i, j, k)#輸出數字排列
'''
Output:
1 2 3
1 2 4
1 3 2
1 3 4
1 4 2
1 4 3
2 1 3
2 1 4
2 3 1
2 3 4
2 4 1
2 4 3
3 1 2
3 1 4
3 2 1
3 2 4
3 4 1
3 4 2
4 1 2
4 1 3
4 2 1
4 2 3
4 3 1
4 3 2
'''