#hangman game
import random

word = ["D", "E", "L", "T", "A"]
lives = 6
found = len(word)
#letters = ["D", "E", "L", "T", "A"]
letters = []
keyword = ["_", "_", "_", "_", "_",]

while lives > 0 and found > 0:
   
    print(f"you have {lives} lives!")
    print(f"the remaining word is {keyword}")
    hit = input("enter a letter: ")

    if hit in word:
     
      if hit in letters:
         lives -= 1   
         print(f"this letter {hit} has already exist") 
      else: 
         x = word.index(hit)
         keyword[x] = hit
         print("you have enter the right letter!!")
         print(f"this is the correct letter {letters}")  
         letters.append(hit)
         found -= 1
     
    else:
      print("you have enter the wrong letter!!")
      print(f"this {letters} is not the correct letter")
      lives -= 1
       
if lives > 0:
  print("you win")
  print(f"you gave these letters {letters}")

else:
  print("you lost") 
  print(f"you gave these letters {letters}")   