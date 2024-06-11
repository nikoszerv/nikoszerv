import random
def passCreator(letters, numbers, symbols, length = 12):
        all_characters = letters + [str(num) for num in numbers] + symbols
        password = ''.join(random.choice(all_characters) for _ in range(length))
        return password
   
letters = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']

numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 0]

symbols = ["@", "#", "!", "$", "%", "^", "&", "*", "(", ")", "_", "-", "+", "=", "{", "}",
           "[", "]", ":", "/", "<", ">", "?", "|", ",", ".", "`", "~"]

password = passCreator(letters, numbers, symbols)
print(f"the password is {password}")

