import func
from TBody import TBody
from TBall import TBall
from TPar import TPar

number = int(input("Enter number of objects you want to create: "))
if number == 0 or number == 1:
    print("No")
else:
    number_of_balls, number_of_pars = func.calculatingNumberOfObjects(number)
    list_of_balls = func.createListOfBalls(number_of_balls)
    list_of_pars = func.createListOfPars(number_of_pars)
    func.ballListOutput(number_of_balls, list_of_balls)
    func.parListOutput(number_of_pars, list_of_pars)
