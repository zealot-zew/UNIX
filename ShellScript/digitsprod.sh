#!/bin/bash
echo "Enter a number:"
read num
product=1
while [ $num -gt 0 ]
do
    digit=$((num % 10))
    product=$((product * digit))
    num=$((num / 10))
done
echo "Product of digits: $product"
