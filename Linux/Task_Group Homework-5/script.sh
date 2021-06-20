#!/bin/bash
gcc $1 -o strCopied 
string1=$2
string2=$3
./strCopied $string1 $string2
result=$?
if [ "$result" -eq "0" ]
then 
	echo "The program run successfuly"
elif [ "$result" -eq "2" ] 
then
	echo "Three arguments are needed!"
elif [ "$result" -eq "3" ] 
then
	echo "Test fault! The string2 and string1 are not equal!"
elif [ "$result" -eq "4" ] 
then
	echo "Test fault! The string3 and string4 are not equal!"
elif [ "$result" -eq "5" ] 
then
	echo "Test fault! The string1 and string4 are not equal!"
elif [ "$result" -eq "6" ] 
then
	echo "Test fault! The string2 and string4 are not equal!"
fi
exit 0
