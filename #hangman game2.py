#hangman game
import random
hangman_pics = ['''
     +---+
         |
         |
         |
        ===''', '''
     +---+
     O   |
        |
        |
       ===''', '''
    +---+
    O   |
    |   |
        |
       ===''', '''
    +---+
    O   |
   /|   |
        |
       ===''', '''
    +---+
    O   |
   /|\  |
        |
       ===''', '''
    +---+
    O   |
   /|\  |
   /    |
       ===''', '''
    +---+
    O   |
   /|\  |
   / \  |
      ==='''] 

word = ["D", "E", "L", "T", "A"]
lives = 6
found = len(word)
letters = []
keyword = ["_", "_", "_", "_", "_",]

def Choose_letter(): 
   #global hit 
   while True:
      hit = input("enter a letter: ")[0]#([0] this forbids to enter words instead of letters)
      hit = hit.upper()
      
      if len(hit) != 1:
         print("give a letter!!")
         print("yuo gave too many letters!!")
      else:
         return hit

def printHangman():
      print(f"you gave these letters {letters}")        
      print("the word: ", keyword)
      print(hangman_pics[6-lives])

while lives > 0 and found > 0:
      printHangman()   
      print(f"you have {lives} lives!")
      print(f"the remaining word is {keyword}")
      #hit = input("enter a letter: ")[0]#([0] this forbids to enter words instead of letters)
      hit = Choose_letter()
      
      if hit in letters:
        print(f"this letter {hit} has already exist") 
      else: 
         letters.append(hit)
         if hit in word:  
           x = word.index(hit)
           keyword[x] = hit
           found -= 1   
         else: 
           lives -= 1
       
if lives > 0:
  print("you win")
  print(f"you gave these letters {letters}")

else:
  print("you lost") 
  print(f"you gave these letters {letters}")   