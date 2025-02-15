#!/bin/bash

echo -n "Enter the number of terms:"
read terms

a=0
b=1

for ((i=0; i<terms; i++))
do
    echo -n "$a "
    fib=$((a+b))
    a=$b
    b=$fib
done
echo