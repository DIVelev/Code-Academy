def findEven(start,end):
    
    numList = []
    finalSum = 0

    for i in range(start,end):
        digits = [int(x) for x in str(i)]
        for n in digits:
            finalSum += n
        
        if finalSum % 2 == 0:
            numList.append(i)
            
        finalSum = 0
    
    numToString = [str(number) for number in numList]
    result = ",".join(numToString)
    return(result)
