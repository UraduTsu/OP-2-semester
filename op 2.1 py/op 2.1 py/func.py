def inpt(f1):                                   
    file1 = open(f1, 'w')
    flag = True                                 
    symbol = 19;                                #Комбінація Ctrl + S
    while flag:                                 #Запис рядків у файл поки не знайдено Ctrl + S
        s = input()                             
        if s.find(chr(symbol)) != -1:           
            flag = False
            s = s.replace(chr(symbol), '')      #Видалення символу Crtl + S         
        if s != '':                             
            file1.write(s + '\n')
    file1.close()                              

def otpt(f):
    print('')
    file = open(f, 'r')
    s = file.read()                       
    print(s)                         
    file.close()                               

def newf(f1, f2):                           
    k = 1        
    s = ' '
    file1 = open(f1, "r")
    file2 = open(f2, "w")
    while s:                     
        s = file1.readline()            #Читання рядків
        if s != "":                     #Ігнорування порожніх рядків
            if s.find('\n') != -1:      #Визначення наявності символу переходу на новий рядок
                snew = str(len(s) - 1) + " " + s.replace('\n', '') + " " + str(k) + '\n'        #Формування нового рядка
            else:
                snew = str(len(s)) + " " + s.replace('\n', '') + " " + str(k) + '\n'            #Формування нового рядка
            k += 1                                
            file2.write(snew)
    file1.close()
    file2.close()

def app(f):                            
    file = open(f, 'a')
    flag = True                                 
    symbol = 19;                                
    while flag:                                 
        s = input()                             
        if s.find(chr(symbol)) != -1:           
            flag = False
            s = s.replace(chr(symbol), '')              
        if s != '':                             
            file.write(s)
    file.close()