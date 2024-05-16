import random
num = random
lives = 5
lots = 10
#choise = input("you want to start the game y/n: ")
#target = (random.randint(1, lots))
choise = input("you want to start the game y/n: ")
if choise == "y":
 
   while lives > 0:
      print("you are alive")
      print(f"you have {lives} lives left!")
      target = (random.randint(1, lots))
      try:  
        hit = int(input("give a number from 1 to 10: "))
      except:
        print("give a number!!")
        continue #continues with the rest
      if hit < 1:
        print("give a number from 1 to 10") 
        continue
      if hit > 10:
        print("give a number from 1 to 10")
        continue  
               
      if hit > target:
        print("you aimed too far!!")
        lives -= 1
      elif hit < target:
        print("you aimed too close!!")
        lives -= 1
      elif hit == target:    
        print("you have hit the target")
        break
     #elif lives == 0:
     # print("game over!!")

else:
  print("another time then!!")
#shows the result of the game
if lives > 0:
  print("you win")
else: 
  print("you lost")  


#number = int(input("give a number: "))

#for i in range(0, 10):








