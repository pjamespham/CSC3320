#!/bin/bash
# James Pham
# jpham27@student.gsu.ed

echo 'Welcome to Computer science society' 
echo `date`

echo `ls -l ~ | egrep '^d' | wc -l` 'directories'
echo $PATH; echo $USER; echo $SHELL
echo `df`
echo 'Please could you loan me $25.00?'
echo 'if x=2 ...' 
x=2
echo "$x*$x = " `expr $x \* $x`
echo "$x/2 = " `expr $x \/ 2`
echo `ls | egrep '^c'`
echo "Good bye. Current hour:" `date +%I`
