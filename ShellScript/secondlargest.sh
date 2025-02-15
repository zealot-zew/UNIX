#!/bin/bash
echo "Enter three numbers:"
read a b c
nums=($a $b $c)
sorted=($(printf "%s\n" "${nums[@]}" | sort -n))
echo "Second Largest: ${sorted[1]}"
