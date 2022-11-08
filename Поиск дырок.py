# import sys
# sys.setrecursionlimit(10000)
# print(sys.getrecursionlimit())

arr = [[1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
       [1, 1, 0, 1, 1, 1, 1, 1, 1, 1],
       [1, 1, 0, 0, 1, 1, 0, 1, 1, 1],
       [1, 1, 1, 1, 1, 0, 0, 0, 1, 1],
       [0, 1, 1, 1, 1, 1, 0, 1, 1, 1],
       [1, 0, 1, 1, 1, 1, 1, 1, 1, 1],
       [1, 0, 0, 1, 1, 1, 1, 1, 0, 1],
       [1, 0, 0, 1, 1, 1, 0, 1, 1, 1],
       [1, 1, 1, 1, 1, 0, 0, 1, 1, 1],
       [1, 1, 0, 0, 1, 1, 1, 1, 1, 1]]
counter = 0


def sew(row, col, param=0):
    global arr
    global row1
    global col1
    global counter
    if param == 0:
        for i in range(row, len(arr)):
            for j in range(col, len(arr[0])):
                if arr[i][j] == 0:
                    row1 = i
                    col1 = j
                    sew(i, j, 1)

    elif param == 1:
        arr[row][col] = 1
        if row < len(arr) - 1:
            if arr[row + 1][col] == 0:  # проверяем нижний элемент
                sew(row + 1, col, 1)
        if col > 0:
            if arr[row][col - 1] == 0:  # проверяем левый элемент
                sew(row, col - 1, 1)
        if col < len(arr[0]) - 1:
            if arr[row][col + 1] == 0:  # проверяем правый элемент
                sew(row, col + 1, 1)
        if row > 0:
            if arr[row - 1][col] == 0:  # проверяем верхний элемент
                sew(row - 1, col, 1)
        if row == row1 and col == col1:  # если мы вернулись в точку старта
            counter += 1
            for r in arr:
                print(r)
            print('\n')
            sew(row, col)


sew(0, 0)
print(counter)
