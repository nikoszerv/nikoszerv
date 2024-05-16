#ΕΡΓΑΣΙΑ SUDOKU!
def isValidSudoku(board): #ορισμος συναρτησης πινακα
    def is_valid_unit(unit):#ορισμος εσωτερικης συνάρτησησ που πέρνει εναν πίνακα (unit)
        #ayth edw h leitourgia elegxei ama kapoia grammh sthlh h kouti 3x3 periexoun psifia 
        #apo to 1-9 dixws epanalhpsh  
        seen = set() #dhmiourgia synoloy (seen) gia na krata ta monadika stoixeia toy (unit)
       
        for num in unit: # elegxei kathe arithmo sto unit
            if num != '.': # an arithmos diaforos tou kenou (".") tote elegxei an exei emfanistei
                #sto synolo (seen)
                if num in seen: # an exei emfanistei tote epistrefei false
                    return False
                seen.add(num) # diaforetika prostithetai sto synolo (seen)
        return True #ean ola ta stoixeia einai monadika h synarthsh apistrefei true

    # elegxos grammwn
    for row in board: # enas vrogxos pou epeksergazetai kathe gramh tou pinaka
        if not is_valid_unit(row): #kaleitai synarthsh gia elegxo egkyrothtas se kathe grammh
            return False # an dn einai egkyrh epistrefei false

    # elegxos sthlwn
    for col in zip(*board):#(zip)enwnei ths stiles tou pinaka se grammes
        #(*)xrhsimopoeite gia na ksepaketarei ths styles toy pinaka 
        if not is_valid_unit(col): # epeksergasia kathe sthlhs(col) tou pinaka
            #(is_valid_unit(col)) kaleitai h synarthsh gia elegxo egkyrothtas ths kathe sthlhs
            #an dn einai egkyrh 
            return False #epistrefei false

    # elegxei ola ta 3x3 koutia
    for i in range(0, 9, 3):# (i ειναι η αρχικη γραμμη καθε 3χ3 τετραγωνου) 
        #(for i in range(0, 9, 3): aytos o vrogxos ekteleitai 3 fores ksekinwntas apo to 0
        # kai ayksanontas thn metavlhth(i) kata 3 se kathe epanalhpsh)
        for j in range(0, 9, 3): # kathe fora poy ekteleitai h ekswterikh for 
            #h eswterikh for ekteleitai epishs 3 fores
            # h metavlhth j einai h arxikh sthlh kathe tetragwnou 3x3
            square = [board[x][y] #dhmiourgia listas(square) h opoia periexei ta stoixeia 
                      #enos tetragwnou 3x3 xrhsimopoieitai(list comprehension) gia na eksagei
                      #ta stoixeiaapo ton pinaka board
                      # epeksergasia kathe koutiou 
                       for x in range(i, i + 3) 
                         for y in range(j, j + 3)]
                         #aytoi oi vrogxoi xrhsimopoiountai gia na 
                         #periorisoun thn perioxh pou eksetazetaiston pinaka(board)
                         #kai na ejagoyn ta stoixeia toy tetragwnoy
                         
                        # ayto to tmhma toy kwdika diairei ton pinaka sudoku se tetragwna 
                        #kai elegxei thn egkyrothta kathe tetragwnou ksexwrista
                        #xrhsimopoiwntas thn synarthsh (is_valid_unit)
                         
            if not is_valid_unit(square): #(is_valid_unit(square)) kaleitai h synarthsh gia
                #elegxo kathe tetragwnou an dn einai egkyro
                return False #epistrefei false

    return True #epistrofh apo telesmatos

# paradeigmata

sudoku_board = [

 ["8","3",".",".","7",".",".",".","."]
,["6",".",".","1","9","5",".",".","."]
,[".","9","8",".",".",".",".","6","."]
,["8",".",".",".","6",".",".",".","3"]
,["4",".",".","8",".","3",".",".","1"]
,["7",".",".",".","2",".",".",".","6"]
,[".","6",".",".",".",".","2","8","."]
,[".",".",".","4","1","9",".",".","5"]
,[".",".",".",".","8",".",".","7","9"]
]
result = isValidSudoku(sudoku_board)
print(result)
'''
sudoku_board = [

["5", "3", ".", ".", "7", ".", ".", ".", "."],
["6", ".", ".", "1", "9", "5", ".", ".", "."],
[".", "9", "8", ".", ".", ".", ".", "6", "."],
["8", ".", ".", ".", "6", ".", ".", ".", "3"],
["4", ".", ".", "8", ".", "3", ".", ".", "1"],
["7", ".", ".", ".", "2", ".", ".", ".", "6"],
[".", "6", ".", ".", ".", ".", "2", "8", "."],
[".", ".", ".", "4", "1", "9", ".", ".", "5"],
[".", ".", ".", ".", "8", ".", ".", "7", "9"]

]
result = isValidSudoku(sudoku_board)
print(result)
'''
#ZERVAS NIKOLAOS