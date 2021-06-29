#!/bin/bash
gcc ./20210624_1.c -o strToInt
input_file="./tests.txt"
pass=0
fail=0
test_counter=1

check_result(){
	
	if [ "$READ" -eq "0" ]
	then
		echo "The test ran successfuly"
		((pass++))
	else
		echo "Test failed with exit: $READ"
		((fail++))
	fi
}

test_program(){

	echo 
	echo "---------------------------------"
	echo "Test Number: $test_counter"
	
	echo "Input: $line"

	./strToInt $line

	READ=$?

	check_result $fail $pass
}

print_result() {

	echo 
	echo "---------------------------------"
	echo "Test results:"
	echo "Failed: $fail"
	echo "Passed: $pass"

}

while IFS= read -r line
do
	test_program $line $test_counter
	((test_counter++))
done < $input_file

print_result $fail $pass

exit 0