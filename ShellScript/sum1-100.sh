#!/bin/bash
echo "Enter a number (N):"
read N
sum=0
for ((i=1; i<=N; i++))
do
    sum=$((sum + i))
done
echo "Sum of numbers from 1 to $N is: $sum"
