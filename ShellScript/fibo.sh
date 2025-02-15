#!/bin/bash
echo "Enter number of terms:"
read n
a=0
b=1
count=2
echo "Fibonacci Sequence:"
echo -n "$a $b "
while [ $count -lt $n ]
do
    fib=$((a + b))
    echo -n "$fib "
    a=$b
    b=$fib
    ((count++))
done
echo
