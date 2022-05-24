from TBody import TBody

class TPar(TBody):

    def __init__(self, height, length, width):
        self.height = height
        self.length = length
        self.width = width
        self.type = "Par"

    def findVolume(self):
        self.volume = self.height * self.length * self.width

    def findArea(self):
        self.area = (self.height * self.width * 2) + (self.height * self.length * 4);

    def infoOutput(self):
        print("Type: {:<5} Height: {!s:<5} Length: {!s:<5} Width: {!s:<5} Volume: {!s:<10.8} Area: {!s:<10.8}".format(self.type, self.height, self.length, self.width, self.volume, self.area))

    def getHeight(self):
        return self.height

    def getWidth(self):
        return self.width

    def getLength(self):
        return self.length