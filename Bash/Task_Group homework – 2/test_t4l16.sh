#!/bin/bash

NUM=1$

gcc l4t16.c -o l4t16

./l4t16 $NUM

READ = $?

if [ "$READ" -eq '0' ]
then
    echo "Test passed"
else
    echo "Test failed"
fi
