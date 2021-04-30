#!/bin/bash
#Check Error Script
echo "Try to find out some errors!!!"
# Seach for the words which can be matched by regex [^a]*ce
# And save the output to file "Result"
echo "The regex [^a]*ce can match the string(s):" >> Result
grep '^[^a]*ce$' << END >> Result
lance
ace
brace
decide
piece
END
# Check the existence of file "Result"
# Send the content in "Result" to your emailbox
# $1 is replaced by your campus:ID
mail jpham27.student.gsu.edu < Result
# $1 is replaced by your campusID
echo "The result has been sent to jpham27@student.gsu.edu"
echo "Congratulations! You have corrected all the errors!"
