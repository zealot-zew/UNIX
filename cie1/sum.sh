#!/bin/bash

echo -n "Number 1:"
read num1

echo -n "Number 2:"
read num2

sum=$((num1 + num2))
echo "Sum: $sum"

sum=$(($num1 + $num2))
echo "Sum using explicit($): $sum"

sum=`expr $num1 + $num2`
echo "Sum using expr: $sum"

sum=`echo "$num1 + $num2" | bc`
echo "Sum using bc: $sum"