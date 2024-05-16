import random

lives = 7
score = 7

while lives > 0 and score == 7:   
    answer = input("You want to roll: yes/no ")
    if answer == 'yes':
       player = random.randint(1, 6) 
       dice = random.randint(1, 6)
       reroll = random.randint(1, 6)
       print(dice)
       print(player)  
       if player == dice:
            print("It's a tie!")
            answer = input("You want to reroll: yes/no ")
            if answer == "yes":
                print(reroll)
            
            else:
                  break
       elif player >= dice:
             score -= 1
             print("you win")
       else:
             lives -= 1 
             print("you lost!")
    else:
       print("next time")  
       exit()    
          