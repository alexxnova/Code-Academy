#! /bin/bash

ARR1=(1 2 3)
ARR2=(1 2 3)

gcc l12t16.c -o l12t16

./l12t16 $ARR1 $ARR2

READ=$?

if [ "$READ" -eq "0" ]
then
    echo "Executed successfully"
elif [ "$READ" -eq "1" ]
then
    echo "Program failed: exit($READ)"
elif [ "$READ" -eq "2" ]
then
    echo "Program failed: exit($READ)"
elif [ "$READ" -eq "3" ]
then
    echo "Program failed: exit($READ)"
fi
