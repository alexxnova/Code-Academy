#! /bin/bash

if [ -z $1 ]
then 
	echo Enter file names on command line
	read FILENAMES
else FILENAMES="$@"
fi

for name in $FILENAMES
do
	touch ~/$name
done
