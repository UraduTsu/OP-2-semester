from TBody import TBody

class TBall(TBody):

    def __init__(self, radius):
        self.radius = radius
        self.type = "Ball"

    def findVolume(self):
        self.volume = 4 / 3 * 3.14 * self.radius * self.radius

    def findArea(self):
        self.area = 4 * 3.14 * self.radius * self.radius

    def infoOutput(self):
        print("Type: {:<5} Radius: {!s:<5} Volume: {!s:<10.8} Area: {!s:<10.8}".format(self.type, self.radius, self.volume, self.area))

    def getRadius(self):
        return self.radius