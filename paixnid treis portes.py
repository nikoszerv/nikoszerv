# 1 . vazw to prize pisw apo mi a tyxai porta
# 2. vazw ton xrhsth na dialeksei
#2.5 diorthwnw ta bugs
# 3.tou dinw mia plhroforia 
# 4.rwtaw an thelei na allaksei
# 5. apokalypsh epathlou

import random

prize = random.randint(1, 3)

guess = int(input('select: (1, 2, 3)'))

while(guess not in {1, 2, 3}):
    guess = int(input('please select a valid door: (1, 2, 3)'))
    
   
doors = [0, 0, 0]
doors[prize-1] = 1
doors[guess-1] = 1

for i in range(len(doors)):
    if (doors[i] == 0):
        print(f"the door {i} is empty!")
        # to f einai syntomo grafia gia auto
        #print('the door' + str(i) + 'is empty!')
        break 
#diadikasia 4 epilogh allaghs
choise = input('do you want to change your door? (yes \ no)')

while (choise!='yes' and choise!='no'):
    choise = input('please select yes or no')
    
if(choise=='no'):
     
     if (guess==prize):
       print('you won!')
     else:
        print('you lost!')  
else: 
           
     if (guess!=prize):
        print('you won!')
     else:
        print('you lost!')     
        
''' 
# enalaktiko gia thn diadikasia 3           
cnt = 1
door = cnt % 3+1
while(door in {prize, guess})
cnt += 1
 '''

    