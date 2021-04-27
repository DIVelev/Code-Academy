class Parent:
    # Overloading
    def sum1(self,a,b):
        return a+b
    
    # Sum2 - Test for multiply operator *
    def sum2(self,first,second):
        if (type(first) == str):
            if(type(second) == str):
                return first + second
            else:
                return first * second
        else:
            if(type(second) == str):
                return first * second
            else:
                return first + second

#Creating an object for class Parent      
obj = Parent()
#Testing sum1 with numbers
result = obj.sum1(4,5)
print(result)
#Testing sum1 with strings
result = obj.sum1("Test","Sum1")
print(result)
#Testing sum2 with numbers
result = obj.sum2(3,3)
print(result)
#Testing sum2 with strings
result = obj.sum2("Test","Sum2")
print(result)
#Testing sum2 with a number and a string
result = obj.sum2(3,"Function")
print(result)
#Testing sum2 with a string and a number
result = obj.sum2("Test",2)
print(result)
