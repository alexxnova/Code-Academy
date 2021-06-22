#! /bin/bash

CFILE="l18t10"

if [ -f "${CFILE}.c" ]
then
	gcc "${CFILE}.c" -o "$CFILE"
else
	echo -e "\nERROR: ${CFILE}.c doesn't exists"
fi

if [ -x "$CFILE" ]
then
     	./"$CFILE"
else 
	echo -e "\nERROR: $CFILE is not executable. Change mode."
fi

READ=$?

if [ "$READ" -eq "0" ]
then
    echo -e "\ntest_$CFILE.sh SUCCESSFULL"
else
    echo -e "\ntest_$CFILE.sh FAILED"
fi
