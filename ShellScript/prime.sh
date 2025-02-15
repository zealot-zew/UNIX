#!/bin/bash
echo "Enter a number:"
read num
if [ $num -lt 2 ]; then
    echo "Not Prime"
    exit
fi
for ((i=2; i*i<=num; i++))
do
    if [ $((num % i)) -eq 0 ]; then
        echo "Not Prime"
        exit
    fi
done
echo "Prime"
