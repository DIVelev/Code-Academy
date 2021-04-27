class Parent:
    #Increment method for a number x
    def increment(self,x):
        return x+1
    
class Child(Parent):
    #Overriding the increment method
    def increment(self,x):
        return x+2
    
number = 4
parent = Parent()
#Testing the parent's increment method with the number variable
result = parent.increment(number)
print("Parent result of increment method is:",result)
child = Child()
#Testing the child's increment method with the number variable
result = child.increment(number)
print("Child result of increment method is:",result)
