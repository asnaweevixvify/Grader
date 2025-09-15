arr = []

def multiplication_table(range_x,range_y):
    for i in range(1,range_x+1):
        for j in range(1,range_y+1):
            result = i*j
            arr.append(result)
        print(arr)
        arr.clear()
            
multiplication_table(25,12)