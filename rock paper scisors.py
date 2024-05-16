import random
     
#import random

my_list = ["rock", "paper", "scisors"]
player1 = random.choice(my_list)
player2 = random.choice(my_list)

print(player1)
print(player2)

if  player1 == player2:
     print("It's a tie!")
elif player1 == "rock"  and player2 == "scisors":  
     print("player 1 wins!")
elif player1 == "scisors" and player2 == "rock":
     print("player 2 wins!")
elif player1 == "paper" and player2 == "rock":
     print("payer 1 wins!")
elif player1 == "rock" and player2 == "paper":
     print("player 2 wins!")  
elif player1 == "scisors" and player2 == "paper":
     print("player 1 wins!")  
elif player1 == "paper" and player2 == "scisors":
     print("player 2 wins!")  
     
                 