#!/bin/bash

counter=1

while [ $counter -le 10 ];
do
    echo "$counter"
    ((counter++))
done

echo "using until loop"

#using until loop
counter=1
until [ $counter -gt 10 ];
do
    echo "$counter"
    ((counter++))
done


