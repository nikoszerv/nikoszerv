# hidden number game
krymenos_arithmos = 57
prospatheies = 10
cnt = 0
for arithmoi in range (0, 100+1):
    arithmos = int(input('Dwse enan arithmo : '))
    cnt += 1
    if cnt >= prospatheies:
        print("exases")
        break

    elif arithmos < krymenos_arithmos and arithmos != 0:
        print ('O arithmos ' +str(arithmos)+ ' einai mikroteros')    
        continue

    elif arithmos > krymenos_arithmos and arithmos != 0:
        print('o arithmos ' + str(arithmos) +' einai megalyteros dwse mikrotero')
        continue
  
    elif arithmos == 0:
        continue

    elif arithmos == krymenos_arithmos and arithmos != 0:
        print('petyxate ton swsto arithmo!!')
        break

print("ekanes " + str(cnt) + (" prospatheies"))