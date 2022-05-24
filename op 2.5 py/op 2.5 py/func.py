from TBody import TBody
from TBall import TBall
from TPar import TPar

def calculatingNumberOfObjects(number):
	num_of_balls = num_of_pars = number // 2
	if (num_of_balls + num_of_pars != number):
		num_of_balls += 1
	return num_of_balls, num_of_pars

def createListOfBalls(number):
	list_of_balls = []
	print('')
	for i in range (number):
		print("Enter " + str(i + 1) + " ball radius: ")
		radius = float(input())
		ballObject = TBall(radius)
		ballObject.findVolume()
		ballObject.findArea()
		list_of_balls.append(ballObject)
	return list_of_balls

def createListOfPars(number):
	list_of_pars = []
	print('')
	for i in range (number):
		print("Enter " + str(i + 1) + " par height: ")
		height = float(input())
		print("Enter " + str(i + 1) + " par length: ")
		length = float(input())
		print("Enter " + str(i + 1) + " par width: ")
		width = float(input())
		parObject = TPar(height, length, width)
		parObject.findVolume()
		parObject.findArea()
		list_of_pars.append(parObject)
	return list_of_pars

def ballListOutput(number, list_of_balls):
	fullVolume = 0
	print('')
	for i in range (number):
		list_of_balls[i].infoOutput()
		fullVolume += list_of_balls[i].getVolume()
	print("\nFull volume: {!s:<8.8}".format(fullVolume))

def parListOutput(number, list_of_pars):
	fullArea = 0
	print('')
	for i in range (number):
		list_of_pars[i].infoOutput()
		fullArea += list_of_pars[i].getArea()
	print("\nFull area: {!s:<8.8}".format(fullArea))