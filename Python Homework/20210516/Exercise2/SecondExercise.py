class StringTesting():
    
    def __init__(self,string = "Pesho"):
        self.string = string
    
    def getString(self):
        self.string = input("Enter a string:")
        return self.string
        
    def printString(self):
        return self.string.upper()
