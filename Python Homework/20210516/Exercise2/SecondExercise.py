class StringTesting():
    
    def __init__(self,string = "Pesho"):
        self.string = string
    
    def getString(self):
        self.string = input("Enter a string:")
        return self.string
        
    def printString(self):
        print(self.string.upper())
        return self.string.upper()
