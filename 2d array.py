#user creation
array = []
rows = int(input("give a number of rows: "))
cols = int(input("give a number of cols: ")) 
for i in range(rows):
    array.append([])
    for j in range(cols):
        elem = int(input(f'give {str(i)}, {str(j)} element: '))
        array[i].append(elem)
print(array)        