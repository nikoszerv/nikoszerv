import random

HANGMAN_PICS = ['''
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

word = ["D","E","L","T","A"]
lives = 7
found = len(word)
#letters = ["D","E","L","T","A"] #LIST 
letters = []
keyword = ["_","_","_","_","_"]

def chooseLetter ():
    global hit
    hit = input("Δώσε ένα γράμμα: ")[0]

while (lives > 0 and found > 0):
    print("Έχεις ακόμα: ",lives," ζωές")
    print("Γράμματα που έχεις πει: ",letters)
    print("Η λέξη: ",keyword)
    #hit = input("Δώσε ένα γράμμα: ")[0] Θα πάρει μόνο το πρώτο γράμμα
    chooseLetter()
    if (hit in word):
        if hit in letters:
            print("Είπες ξανά το γράμμα!")
            lives = lives - 1
        else:
            x = word.index(hit)
            keyword[x]=hit
            found = found - 1
    else:
        lives = lives - 1
    letters.append(hit)
    #letters.insert(0, hit)

if (lives > 0):
    print ("You win!")
if (found > 0):
    print ("You lost!") 