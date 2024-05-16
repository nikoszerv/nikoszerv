#order 66
order = ""

while len(order) == 0:
    order = input("your orders sir? ")
    if len(order) !=0:
      order = input("execute order: ")     
print(f"execute order: {order}")
print("alright sir!")
print(f"we proceed with the order {order}")