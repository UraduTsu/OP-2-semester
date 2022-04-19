import pickle
from class2 import Class2
from class1 import Class1

def inpt(z):
    s = "+"
    if z == True:
        filein = open("file1.txt", "wb")
    else:
        filein = open("file1.txt", "ab")
    while s == "+":
        vnzname = input("Enter vnzname: ")
        cityname = input("Enter cityname: ")
        lvlakr = int(input("Enter lvlakr: "))
        info = Class2(vnzname, cityname, lvlakr)
        fakultnum = int(input("Enter fakultnum: "))
        a = [int(input("Enter students on " + str(i + 1) + " fakultet: ")) for i in range (fakultnum)]
        moreinfo = Class1(fakultnum, a, info)
        pickle.dump(moreinfo, filein)       #запис класа у файл
        s = input("Enter + to continue: ")
    filein.close()

def otpt(): 
    lst = rd("file1.txt")
    for i in lst:
        k = 1
        print("Vnzname: {:<16} Cityname: {:<16} Lvlakr: {!s:<2} Fakultnum: {!s:<3}".format(i.class2.vnzname,
                                                                                          i.class2.cityname,
                                                                                         i.class2.lvlakr,
                                                                                        i.fakultnum))
        for j in i.students:
            print("Students on " + str(k) + " fakultet: " + str(j))
            k += 1

def otpt2(): 
    lst = rd("file2.txt")
    for i in lst:
        print("Vnzname: {:<16} Cityname: {:<16} Lvlakr: {!s:<2} ".format(i.vnzname, i.cityname, i.lvlakr))

def rd(name):                               #функція для читання файла
    fileout = open(name, "rb")
    lst = []
    flag = True
    while flag:
        try:
            lst.append(pickle.load(fileout))    #додавання елементів класа з файла у список
        except EOFError:
            flag = False
    fileout.close()
    return lst

def maxstud():
    faknum = studnum = 0
    vnzname = ''
    city = input("Enter city you want to check: ")
    fileout = open("file1.txt", "rb")
    lst2 = rd("file1.txt")  
    for i in lst2:
        if city == i.class2.cityname:
            l = 1
            for j in i.students:
                if j > studnum:
                    studnum = j
                    vnzname = i.class2.vnzname
                    faknum = l
                l += 1        
    print("The most num of students is on " + str(faknum) + " fakultet in " + vnzname + " vnz: " + str(studnum) + " students")
    fileout.close()

def newf():
    filein = open("file2.txt", "wb")
    fileout = open("file1.txt", "rb")
    lst3 = rd("file1.txt")
    for i in lst3:
        if i.class2.lvlakr > 2:
            pickle.dump(i.class2, filein)
    filein.close()
    fileout.close()