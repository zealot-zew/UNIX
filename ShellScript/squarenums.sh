#!/bin/bash
echo "Enter N:"
read N
for ((i=1; i<=N; i++))
do
    echo "$i^2 = $((i * i))"
done
