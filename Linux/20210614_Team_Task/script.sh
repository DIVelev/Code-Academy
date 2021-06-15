#!/bin/bash
gcc $1 -o strCpy 
firstSTRING=$2
secondSTRING=$3
stringPOSITION=$4
./strCpy $firstSTRING $secondSTRING $stringPOSITION
result=$?
if [ "$result" -eq "0" ]
then 
	echo "The program run successfuly"
elif [ "$result" -eq "2" ] 
then
	echo "Three arguments are needed!"
elif [ "$result" -eq "3" ]
then
	echo "Invalid integer/string position!"
elif [ "$result" -eq "4" ]
then
	echo "The entered position is bigger than the length of the first string!"
fi
exit 0
