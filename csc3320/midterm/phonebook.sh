#!/bin/sh/
#Runs a phonebook utility that allows user to access and modify an alphabetical list of names, addresses, and telephone numbers.

touch phonebook.txt

echo "Current phone-book information: "

terminal=`tty`

exec < phonebook.txt

while read line
do
	echo $line
done

exec < $terminal

echo "What would you like to do with the current phonebook? (read, edit, add or delete)"
read userInput

case ${userInput} in
	[Rr]ead)
		echo "Whose information would you like to see?"
		read userInput
		sed -n "/${userInput}/p" phonebook.txt;;

	[Ee]dit)
		echo "Whose information would you like to edit?"
		read userInput
		echo "What would you like to change? (address or number)"
		read userChange
		echo "Enter the information you would like to change it to"
		read userInfo
		
		if [ $userChange = "address" ] 
		then

			sed -ni "s/${userInput} \: (.*) \:/${userInput} \: ($userChange) //" phonebook.txt
		else
			sed -ni "s/${userInput} \: (.*) \: (.*) /${userInput} \: (.*) \: ($userChange) //" phonebook.txt			
		fi
;;
	[Dd]elete)
		echo "Whose information would you like to delete?"
		read userInput
		sed -ni "/${userInput}/!p" phonebook.txt
		;;
	[Aa]dd)
		echo "Type in the name of entry"
		read userEntryName
		echo "Type in the address of entry"
		read userEntryAddress
		echo "Type in the phone number of entry"
		read userPhoneNumber
		
		echo $userEntryName ":" $userEntryAddress ":" $userPhoneNumber >> phonebook.txt

;;

esac



