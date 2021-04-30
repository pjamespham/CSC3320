#!/bin/sh
# A script that prints out the manuel list for a given command. If it is not found, then it prints something else.

echo Please type a command you would like to search for


read searchCommand

grep -q ${searchCommand} mandatabase.txt 
if [ $? -eq 0 ]
then
	grep ${searchCommand} mandatabase.txt
else
	echo "No such command"
fi




