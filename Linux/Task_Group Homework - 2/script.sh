#!/bin/bash
gcc $1 -o bitNa 
./bitNa 
result=$?
if [ "$result" -ne "0" ]
then 
	echo "The program failt"
else 
	echo "The program run successfuly"
fi
exit 0
