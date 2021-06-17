#!/bin/bash
gcc $1 -o linearSearch 
size=$2
maxNumber=$3
key=$4
./linearSearch $size $maxNumber $key
result=$?
if [ "$result" -eq "0" ]
then 
	echo "The program run successfuly"
elif [ "$result" -eq "2" ] 
then
	echo "Three arguments are needed!"
elif [ "$result" -eq "3" ]
then
	echo "Invalid size! You need to enter a valid integer!"
elif [ "$result" -eq "4" ]
then
	echo "Invalid maxNumber! You need to enter a valid integer!"
elif [ "$result" -eq "5" ]
then
	echo "Invalid key! You need to enter a valid integer!"
elif [ "$result" -eq "6" ]
then
	echo "Key not found!"
fi
exit 0
