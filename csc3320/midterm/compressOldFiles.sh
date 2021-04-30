#!/bin/sh
#A script that prompts the user to input a number for the amount of days old a file has not been accessed. If it meets requirement, compresses them.

echo "Please enter the length of time (in days) that a file has not been accessed."
read userInput
find /home/jpham27 -atime ${userInput} > Results.txt  

terminal=`tty`

exec < Results.txt

tar -c oldFiles.tar -T /dev/null

while read line
do
	tar -r oldFiles.tar ${line}
done

exec < $terminal




