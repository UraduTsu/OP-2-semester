import func

sym = '+'
f1 = "file1.txt"
f2 = "file2.txt"
func.inpt(f1)
func.otpt(f1)
func.newf(f1, f2)
func.otpt(f2)
while sym == '+':
    sym = input("Enter + if you want to continue writing: ")
    if sym == '+':
        func.app(f1)
        func.otpt(f1)
        func.newf(f1, f2)
        func.otpt(f2)