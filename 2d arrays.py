array = [
    [1,2,3,4],
    [5,6,7,8],
    [9,10,11,12]
]
array.insert(0,[0,0,0,0])
array.insert(4, [1,1,1,1])

for row in array:
    for elem in row:
        print(elem, end=" ")
    print("")
for row in array:
    row.append(1) #add 1 in the ende of every row
print("")
for row in array:
    for elem in row:
        print(elem, end=" ")
    print("")    