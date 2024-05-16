
import random

player1 = input("you want to satrt the game yes or no: ")

while player1 != 'quit':
   if player1 == "yes":
     print("okay let's start")

   elif  player1 == "no":
     print("another time!")
     break
   my_list = ["rock", "paper", "scisors"]   
   player1 = input("give your choise: ")
   player2 = random.choice(my_list)
   print(player2)
   if  player1 == player2:
     print("It's a tie!")
     continue
   elif player1 == "rock"  and player2 == "scisors":  
     print("player 1 wins!")
     continue   
   elif player1 == "scisors" and player2 == "rock":
     print("player 2 wins!")
     continue   
   elif player1 == "paper" and player2 == "rock":
     print("player 1 wins!")
     continue
   elif player1 == "rock" and player2 == "paper":
     print("player 2 wins!")  
     continue 
   elif player1 == "scisors" and player2 == "paper":
     print("player 1 wins!")  
     continue
   elif player1 == "paper" and player2 == "scisors":
     print("player 2 wins!")  
     continue
