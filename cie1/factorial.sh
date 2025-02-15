#!/bin/bash

echo -n "Enter number: "
read num

if [[ $num -lt 0 ]];
then
    echo "Factorial doesnt exist for negative numbers"
    exit -1
fi

Factorial=1
i=1

while [[ $i -le $num ]];
do
    Factorial=$((Factorial*i))
    ((i++))
done
echo "Factorial:$Factorial"
